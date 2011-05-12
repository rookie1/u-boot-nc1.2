/*
 * (C) Copyright 2006
 * Texas Instruments, <www.ti.com>
 * Richard Woodruff <r-woodruff2@ti.com>
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#ifndef _OMAP34XX_SYS_INFO_H_
#define _OMAP34XX_SYS_INFO_H_

#define XDR_POP		5      /* package on package part */
#define SDR_DISCRETE	4      /* 128M memory SDR module*/
#define DDR_STACKED	3      /* stacked part on 2422 */
#define DDR_COMBO	2      /* combo part on cpu daughter card (menalaeus) */
#define DDR_DISCRETE	1      /* 2x16 parts on daughter card */

/* Currently Virtio models this one */
#define CPU_3430_CHIPID		0x0B68A000

#define GPMC_MUXED		1
#define GPMC_NONMUXED		0

#define TYPE_NAND		0x800	/* bit pos for nand in gpmc reg */
#define TYPE_NOR		0x000
#define TYPE_ONENAND		0x800

#define WIDTH_8BIT		0x0000
#define WIDTH_16BIT		0x1000	/* bit pos for 16 bit in gpmc */

#define I2C_MENELAUS		0x72	/* i2c id for companion chip */
#define I2C_TRITON2		0x4B	/* addres of power group */

#define BOOT_FAST_XIP		0x1f

/* SDP definitions according to FPGA Rev. Is this OK?? */
#define SDP_3430_V1		0x1
#define SDP_3430_V2		0x2

#define BOARD_3430_LABRADOR	0x80
#define BOARD_3430_LABRADOR_V1	0x01
#define BOARD_OMAP3430_EDP1	0x01
#define BOARD_OMAP3430_EDP1_V1	0x01

#define BOARD_OMAP3621_BOXER    0x10
#define BOARD_OMAP3621_EVT1A    0x11

enum hw_board_id {
BOARD_ENCORE_REV_EVT1A	= 1,
BOARD_ENCORE_REV_EVT1B	= 2,
BOARD_ENCORE_REV_EVT2	= 3,
BOARD_ENCORE_REV_DVT 	= 4,
BOARD_ENCORE_REV_PVT	= 5,
BOARD_ENCORE_REV_MASK	= 0x7
};

enum hw_product_id {
HWID_PROD_ENCORE	= 0,
HWID_PROD_RAVE		= 1,
HWID_PROD_APPLAUSE	= 2,
HWID_PROD_ACCLAIM	= 3,
HWID_PROD_GOSSAMER	= 4,
HWID_PROD_CONDOR	= 5,
HWID_PROD_MASK		= 0x7
};


enum board_feature {
BOARD_FEATURE_3G	= 0x08,
BOARD_FEATURE_1GHZ	= 0x10,
BOARD_FEATURE_EINK	= 0x20,
};

extern int has_3G_support(void);
extern int read_board_1GHz_support(void);

#endif
