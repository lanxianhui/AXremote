-- run with
-- runghc gen_key_table.hs > key_table.h


import Data.Char
import Text.Printf

data KeyEntry =
  KeyKeyboard { modifier :: String, keycode :: String } |
  KeyMultimedia { keycode :: String } |
  KeyNone deriving (Show) 

page KeyNone           = 0
page (KeyKeyboard _ _) = 1
page (KeyMultimedia _) = 2

code_mod KeyNone = "0"
code_mod (KeyKeyboard m _) = m
code_mod (KeyMultimedia k) = "0" -- multimedia keys don't have modifiers

code_key KeyNone = "0 /* unused */"
code_key (KeyKeyboard _ k) = "KEY_" ++ k
code_key (KeyMultimedia k) = "MULT_BIT_" ++ k

fromChar c = KeyKeyboard "0" c

keyline n entry = "/* " ++  (printf "%3d" n) ++ " */   {" ++ (show (page entry)) ++ ", " ++ (code_mod entry) ++ ", " ++ (code_key entry) ++ "}"


-- list of keys (add more here)

readable_keys = ['A'..'Z'] ++ ['0'..'9']
non_readable_keys = [(ord '\b', "BACKSPACE"),
           (ord '\n', "RETURN"),
           (27, "ESCAPE"),
           (ord '+', "PLUS"),
           (ord '-', "MINUS"),
           (ord '=', "EQUALS"),
           (ord ' ', "SPACE"),
           (ord '/', "SLASH")]

non_ascii_keys = 
  [ KeyKeyboard "0" "PAUSE"
  , KeyKeyboard "0" "PAGE_UP"
  , KeyKeyboard "0" "PAGE_DOWN"
  , KeyKeyboard "0" "CUR_RIGHT"
  , KeyKeyboard "0" "CUR_LEFT"
  , KeyKeyboard "0" "CUR_DOWN"
  , KeyKeyboard "0" "CUR_UP"
  , KeyKeyboard "0" "STOP"
  , KeyKeyboard "0" "HOME"
  , KeyKeyboard "0" "PERIOD"
  , KeyKeyboard "0" "COMMA"
  , KeyKeyboard "0" "LSQUARE_BRACKET"
  , KeyKeyboard "0" "RSQUARE_BRACKET"
  , KeyKeyboard "0" "COMMA"
  , KeyMultimedia "PREV"
  , KeyMultimedia "NEXT"
  , KeyMultimedia "STOP"
  , KeyMultimedia "PLAYP"
  , KeyMultimedia "PLAY"
  , KeyMultimedia "MUTE"
  , KeyMultimedia "VOL_UP"
  , KeyMultimedia "VOL_DOWN" ]
  ++ (map (\ i -> KeyKeyboard "0" ("F" ++ (show i))) [1..12])

-- actual generation (change stuff here if you want a differently organized list)
-- sort these according to their ASCII code (if any, otherwise just insert it at an unused ASCII code)

ascii_keys = non_readable_keys ++ (map (\ c -> (ord c, [c])) readable_keys)

num_keys = max ((length ascii_keys) + (length non_ascii_keys)) (maximum (map fst ascii_keys))

keylines i non_ascii = case (lookup i ascii_keys) of
    Just k  -> [ keyline i (fromChar k) ]     ++ (keylines (i+1) non_ascii)
    Nothing ->
      if null non_ascii
        then
          if i > maximum (map fst ascii_keys)
            then
              [] -- end recursion (no more ascii or non-ascii keys)
            else
              [ keyline i KeyNone ] ++ keylines (i+1) [] -- there are still ascii keys in the list
        else
          [ keyline i (head non_ascii) ] ++ (keylines (i+1) (tail non_ascii))

main = do
  putStrLn "// generated by gen_key_table.hs"
  putStrLn ""
  putStrLn ("#define NUM_KEYS " ++ (show num_keys))
  putStrLn "static const uint8_t keyReport[NUM_KEYS+1][3] PROGMEM = {"
  putStrLn (foldl1 (\ l r -> l ++ ",\n" ++ r) (keylines 0 (KeyNone : non_ascii_keys)))
  putStrLn "};"
