/* Warning: This file is automatically generated by AX-RadioLAB.
   Manual changes are overwritten! */

#include "../COMMON/easyax5043.h"
#include <libmftypes.h>
#include <libmfcrc.h>

// TX: fcarrier=868.300MHz dev=  8.000kHz br=  4.800kBit/s pwr= 15.0dBm
// RX: fcarrier=868.300MHz bw=100.000kHz br=  4.800kBit/s

__reentrantb void ax5043_set_registers(void) __reentrant
{
	AX5043_MODULATION              = 0x08;
	AX5043_ENCODING                = 0x00;
	AX5043_FRAMING                 = 0x26;
	AX5043_PINFUNCSYSCLK           = 0x01;
	AX5043_PINFUNCDCLK             = 0x01;
	AX5043_PINFUNCDATA             = 0x01;
	AX5043_PINFUNCANTSEL           = 0x01;
	AX5043_PINFUNCPWRAMP           = 0x01;
	AX5043_WAKEUPXOEARLY           = 0x01;
	AX5043_IFFREQ1                 = 0x0C;
	AX5043_IFFREQ0                 = 0x9A;
	AX5043_DECIMATION              = 0x02;
	AX5043_RXDATARATE2             = 0x03;
	AX5043_RXDATARATE1             = 0x41;
	AX5043_RXDATARATE0             = 0x55;
	AX5043_MAXDROFFSET2            = 0x00;
	AX5043_MAXDROFFSET1            = 0x00;
	AX5043_MAXDROFFSET0            = 0x00;
	AX5043_MAXRFOFFSET2            = 0x80;
	AX5043_MAXRFOFFSET1            = 0x47;
	AX5043_MAXRFOFFSET0            = 0x22;
	AX5043_FSKDMAX1                = 0x15;
	AX5043_FSKDMAX0                = 0xEA;
	AX5043_FSKDMIN1                = 0xEA;
	AX5043_FSKDMIN0                = 0x16;
	AX5043_AMPLFILTER              = 0x00;
	AX5043_RXPARAMSETS             = 0xF4;
	AX5043_AGCGAIN0                = 0x96;
	AX5043_AGCTARGET0              = 0x76;
	AX5043_TIMEGAIN0               = 0xDC;
	AX5043_DRGAIN0                 = 0xD6;
	AX5043_PHASEGAIN0              = 0xC3;
	AX5043_FREQUENCYGAINA0         = 0x0F;
	AX5043_FREQUENCYGAINB0         = 0x1F;
	AX5043_FREQUENCYGAINC0         = 0x08;
	AX5043_FREQUENCYGAIND0         = 0x08;
	AX5043_AMPLITUDEGAIN0          = 0x46;
	AX5043_FREQDEV10               = 0x00;
	AX5043_FREQDEV00               = 0x00;
	AX5043_FOURFSK0                = 0x00;
	AX5043_BBOFFSRES0              = 0x00;
	AX5043_AGCGAIN1                = 0x96;
	AX5043_AGCTARGET1              = 0x76;
	AX5043_AGCAHYST1               = 0x00;
	AX5043_AGCMINMAX1              = 0x00;
	AX5043_TIMEGAIN1               = 0xDA;
	AX5043_DRGAIN1                 = 0xD5;
	AX5043_PHASEGAIN1              = 0xC3;
	AX5043_FREQUENCYGAINA1         = 0x0F;
	AX5043_FREQUENCYGAINB1         = 0x1F;
	AX5043_FREQUENCYGAINC1         = 0x08;
	AX5043_FREQUENCYGAIND1         = 0x08;
	AX5043_AMPLITUDEGAIN1          = 0x46;
	AX5043_FREQDEV11               = 0x00;
	AX5043_FREQDEV01               = 0x38;
	AX5043_FOURFSK1                = 0x00;
	AX5043_BBOFFSRES1              = 0x00;
	AX5043_AGCGAIN3                = 0xFF;
	AX5043_AGCTARGET3              = 0x76;
	AX5043_AGCAHYST3               = 0x00;
	AX5043_AGCMINMAX3              = 0x00;
	AX5043_TIMEGAIN3               = 0xD9;
	AX5043_DRGAIN3                 = 0xD4;
	AX5043_PHASEGAIN3              = 0xC3;
	AX5043_FREQUENCYGAINA3         = 0x0F;
	AX5043_FREQUENCYGAINB3         = 0x1F;
	AX5043_FREQUENCYGAINC3         = 0x0C;
	AX5043_FREQUENCYGAIND3         = 0x0C;
	AX5043_AMPLITUDEGAIN3          = 0x46;
	AX5043_FREQDEV13               = 0x00;
	AX5043_FREQDEV03               = 0x38;
	AX5043_FOURFSK3                = 0x00;
	AX5043_BBOFFSRES3              = 0x00;
	AX5043_MODCFGF                 = 0x03;
	AX5043_FSKDEV2                 = 0x00;
	AX5043_FSKDEV1                 = 0x20;
	AX5043_FSKDEV0                 = 0xC5;
	AX5043_MODCFGA                 = 0x05;
	AX5043_TXRATE2                 = 0x00;
	AX5043_TXRATE1                 = 0x13;
	AX5043_TXRATE0                 = 0xA9;
	AX5043_TXPWRCOEFFB1            = 0x0F;
	AX5043_TXPWRCOEFFB0            = 0xFF;
	AX5043_PLLRNGCLK               = 0x03;
	AX5043_BBTUNE                  = 0x0C;
	AX5043_BBOFFSCAP               = 0x77;
	AX5043_PKTADDRCFG              = 0x00;
	AX5043_PKTLENCFG               = 0x80;
	AX5043_PKTLENOFFSET            = 0x00;
	AX5043_PKTMAXLEN               = 0xC8;
	AX5043_MATCH0PAT3              = 0xAA;
	AX5043_MATCH0PAT2              = 0xCC;
	AX5043_MATCH0PAT1              = 0xAA;
	AX5043_MATCH0PAT0              = 0xCC;
	AX5043_MATCH0LEN               = 0x1F;
	AX5043_MATCH0MAX               = 0x1F;
	AX5043_MATCH1PAT1              = 0x55;
	AX5043_MATCH1PAT0              = 0x55;
	AX5043_MATCH1LEN               = 0x8A;
	AX5043_MATCH1MAX               = 0x0A;
	AX5043_TMGRXBOOST              = 0x32;
	AX5043_TMGRXSETTLE             = 0x14;
	AX5043_TMGRXOFFSACQ            = 0x73;
	AX5043_TMGRXCOARSEAGC          = 0x0C;
	AX5043_TMGRXAGC                = 0x00;
	AX5043_TMGRXRSSI               = 0x08;
	AX5043_TMGRXPREAMBLE2          = 0x35;
	AX5043_RSSIREFERENCE           = 0x19;
	AX5043_RSSIABSTHR              = 0xC6;
	AX5043_BGNDRSSIGAIN            = 0x02;
	AX5043_BGNDRSSITHR             = 0x00;
	AX5043_PKTCHUNKSIZE            = 0x0D;
	AX5043_PKTMISCFLAGS            = 0x03;
	AX5043_PKTACCEPTFLAGS          = 0x20;
	AX5043_DACVALUE1               = 0x00;
	AX5043_DACVALUE0               = 0x00;
	AX5043_DACCONFIG               = 0x00;
	AX5043_0xF10                   = 0x03;
	AX5043_0xF11                   = 0x07;
	AX5043_0xF1C                   = 0x07;
	AX5043_0xF21                   = 0x5C;
	AX5043_0xF22                   = 0x53;
	AX5043_0xF23                   = 0x76;
	AX5043_0xF26                   = 0x92;
	AX5043_0xF34                   = 0x08;
	AX5043_0xF35                   = 0x10;
	AX5043_0xF44                   = 0x24;
}


__reentrantb void ax5043_set_registers_tx(void) __reentrant
{
	AX5043_PLLLOOP                 = 0x09;
	AX5043_PLLCPI                  = 0x02;
	AX5043_PLLVCODIV               = 0x20;
	AX5043_PLLVCOI                 = 0x99;
	AX5043_XTALCAP                 = 0x0C;
	AX5043_0xF00                   = 0x0F;
	AX5043_REF                     = 0x03;
	AX5043_0xF18                   = 0x06;
}


__reentrantb void ax5043_set_registers_rx(void) __reentrant
{
	AX5043_PLLLOOP                 = 0x09;
	AX5043_PLLCPI                  = 0x01;
	AX5043_PLLVCODIV               = 0x20;
	AX5043_PLLVCOI                 = 0x99;
	AX5043_XTALCAP                 = 0x0C;
	AX5043_0xF00                   = 0x0F;
	AX5043_REF                     = 0x03;
	AX5043_0xF18                   = 0x06;
}


#if defined SDCC
// do not mark as reentrant, otherwise the register allocator will generate suboptimal code
#pragma nooverlay
int32_t axradio_conv_freq_fromhz(int32_t f)
#else
__reentrantb int32_t axradio_conv_freq_fromhz(int32_t f) __reentrant
#endif
{
	/* scale by 1.046875 (true 1.048576) */
	int32_t r;
	r = f;
	f >>= 4;
	r += f;
	f >>= 2;
	r -= f;
	return r;
}

#if defined SDCC
// do not mark as reentrant, otherwise the register allocator will generate suboptimal code
#pragma nooverlay
int32_t axradio_conv_freq_tohz(int32_t f)
#else
__reentrantb int32_t axradio_conv_freq_tohz(int32_t f) __reentrant
#endif
{
	/* scale by 0.953125 (true 0.953674) */
	int32_t r;
	r = f;
	f >>= 4;
	r -= f;
	f >>= 2;
	r += f;
	return r;
}

#if defined SDCC
// do not mark as reentrant, otherwise the register allocator will generate suboptimal code
#pragma nooverlay
int32_t axradio_conv_timeinterval_totimer0(int32_t dt)
#else
__reentrantb int32_t axradio_conv_timeinterval_totimer0(int32_t dt) __reentrant
#endif
{
	/* scale by 0.032776 (true 0.032768) */
	int32_t r;
	dt >>= 5;
	r = dt;
	dt >>= 4;
	r += dt;
	dt >>= 2;
	r -= dt;
	dt >>= 3;
	r += dt;
	return r;
}

__reentrantb uint8_t axradio_byteconv(uint8_t b) __reentrant
{
	return b;
}


__reentrantb void axradio_byteconv_buffer(uint8_t __xdata *buf, uint16_t buflen) __reentrant
{
}


__reentrantb uint8_t axradio_framing_check_crc(const __xdata uint8_t *pkt, uint16_t cnt) __reentrant
{
	return crc_crc16(pkt, cnt, 0xFFFF) == 0xB001;
}


__reentrantb uint16_t axradio_framing_append_crc(__xdata uint8_t *pkt, uint16_t cnt) __reentrant
{
	uint16_t s = crc_crc16(pkt, cnt, 0xFFFF);
	pkt += cnt;
	*pkt++ = ~(uint8_t)(s);
	*pkt++ = ~(uint8_t)(s >> 8);
	return cnt + 2;
}





// physical layer
const uint8_t __code axradio_phy_pn9 = 0;
const uint8_t __code axradio_phy_nrchannels = 1;
const uint32_t __code axradio_phy_chanfreq[1] = { 0x3644cccd };
const uint8_t __code axradio_phy_chanpllrnginit[1] = { 0x0a };
uint8_t __xdata axradio_phy_chanpllrng_rx[1];
uint8_t __xdata axradio_phy_chanpllrng_tx[1];
const int32_t __code axradio_phy_maxfreqoffset = 54630;
const int8_t __code axradio_phy_rssioffset = 32;
// axradio_phy_rssioffset is added to AX5043_RSSIREFERENCE and subtracted from chip RSSI value to prevent overflows (8bit RSSI only goes down to -128)
// axradio_phy_rssioffset is also added to AX5043_RSSIABSTHR
const int8_t __code axradio_phy_rssireference = 0x19;
const int8_t __code axradio_phy_channelbusy = -90 + 32;
const uint16_t __code axradio_phy_cs_period = 7; // timer0 units, 10ms
const uint8_t __code axradio_phy_cs_enabled = 0;
const uint8_t __code axradio_phy_lbt_retries = 0;
const uint8_t __code axradio_phy_lbt_forcetx = 0;
const uint8_t __code axradio_phy_tmgrxpreamble1_wor = 0x4C;
const uint8_t __code axradio_phy_tmgrxpreamble1_cont = 0x00;

const uint16_t __code axradio_phy_preamble_wor_longlen = 4; // wor_longlen + wor_len totals to 240.0ms plus 56bits
const uint16_t __code axradio_phy_preamble_wor_len = 184;
const uint16_t __code axradio_phy_preamble_longlen = 0;
const uint16_t __code axradio_phy_preamble_len = 56;
const uint8_t __code axradio_phy_preamble_byte = 0x55;
const uint8_t __code axradio_phy_preamble_flags = 0x38;
const uint8_t __code axradio_phy_preamble_appendbits = 0;
const uint8_t __code axradio_phy_preamble_appendpattern = 0x00;

//framing
const uint8_t __code axradio_framing_maclen = 1;
const uint8_t __code axradio_framing_addrlen = 0;
const uint8_t __code axradio_framing_destaddrpos = 0;
const uint8_t __code axradio_framing_sourceaddrpos = 0xff;
const uint8_t __code axradio_framing_lenpos = 0;
const uint8_t __code axradio_framing_lenoffs = 0;
const uint8_t __code axradio_framing_lenmask = 0xff;
const uint8_t __code axradio_framing_swcrclen = 0;

const uint8_t __code axradio_framing_synclen = 32;
const uint8_t __code axradio_framing_syncword[] = { 0xcc, 0xaa, 0xcc, 0xaa};
const uint8_t __code axradio_framing_syncflags = 0x18;
const uint8_t __code axradio_framing_enable_sfdcallback = 0;

const uint32_t __code axradio_framing_ack_timeout = 25; // 37.0ms in wtimer0 units (640Hz)
const uint32_t __code axradio_framing_ack_delay = 313; // 1.0ms in wtimer1 units (20MHz/64)
const uint8_t __code axradio_framing_ack_retransmissions = 0;
const uint8_t __code axradio_framing_ack_seqnrpos = 0xff;

const uint8_t __code axradio_framing_minpayloadlen = 0; // must be set to 1 if the payload directly follows the destination address, and a CRC is configured
//WOR
const uint16_t __code axradio_wor_period = 128;

// synchronous mode
const uint32_t __code axradio_sync_period = 32768; // ACTUALLY FREQ, NOT PERIOD!
const uint32_t __code axradio_sync_xoscstartup = 49;
const uint32_t __code axradio_sync_slave_syncwindow = 98304; // 3.000s
const uint32_t __code axradio_sync_slave_initialsyncwindow = 5898240; //180.000s
const uint32_t __code axradio_sync_slave_syncpause = 19660800; // 600.000s
const int16_t __code axradio_sync_slave_maxperiod = 2020; // in (2^SYNC_K1) * wtimer0 units
const uint8_t __code axradio_sync_slave_resyncloss = 11;  // resyncloss is one more than the number of missed packets to cause a resync
// window 0 is the first window after synchronisation
// window 1 is the window normally used when there are no lost packets
// window 2 is used after one packet is lost, etc
const uint8_t __code axradio_sync_slave_nrrx = 3;
const uint32_t __code axradio_sync_slave_rxadvance[] = { 850, 813, 891 };// 25.918ms, 24.788ms, 27.167ms
const uint32_t __code axradio_sync_slave_rxwindow[] = { 864, 790, 946 }; // 26.346ms, 24.086ms, 28.844ms
const uint32_t __code axradio_sync_slave_rxtimeout = 1106; // 33.8ms, maximum duration of a packet
