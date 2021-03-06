/*
 * OMAP4 Interrupt lines definitions
 *
 * Copyright (C) 2009 Texas Instruments, Inc.
 *
 * Santosh Shilimkar (santosh.shilimkar@ti.com)
 * Benoit Cousson (b-cousson@ti.com)
 *
 * This file is automatically generated from the OMAP hardware databases.
 * We respectfully ask that any modifications to this file be coordinated
 * with the public linux-omap@vger.kernel.org mailing list and the
 * authors above to ensure that the autogeneration scripts are kept
 * up-to-date with the file contents.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __ARCH_ARM_MACH_OMAP2_OMAP44XX_IRQS_H
#define __ARCH_ARM_MACH_OMAP2_OMAP44XX_IRQS_H

/* OMAP44XX IRQs numbers definitions */
#define OMAP44XX_IRQ_LOCALTIMER			29
#define OMAP44XX_IRQ_LOCALWDT			30

#define OMAP44XX_IRQ_GIC_START			32

#define OMAP44XX_IRQ_PL310			(0 + OMAP44XX_IRQ_GIC_START)	/* Level-2 Cache Controller interrupt */
#define OMAP44XX_IRQ_CTI0			(1 + OMAP44XX_IRQ_GIC_START)	/* TRIGOUT[6] of Cross Trigger Interface 0 (CTI0) */
#define OMAP44XX_IRQ_CTI1			(2 + OMAP44XX_IRQ_GIC_START)	/* TRIGOUT[6] of Cross Trigger Interface 1 (CTI1) */
#define OMAP44XX_IRQ_ELM			(4 + OMAP44XX_IRQ_GIC_START)	/* Error location process completion */
#define OMAP44XX_IRQ_SYS_1N			(7 + OMAP44XX_IRQ_GIC_START)	/* External interrupt (active low) */
#define OMAP44XX_IRQ_SECURITY_EVENTS		(8 + OMAP44XX_IRQ_GIC_START)	/* Occurs when a firewall (ARTERIS/L4) has generated an out-band error or when power events occurred (including power-on reset, so by default, this interrupt is active after power-up reset). */
#define OMAP44XX_IRQ_L3_DBG			(9 + OMAP44XX_IRQ_GIC_START)	/* Reports debug errors on L3 */
#define OMAP44XX_IRQ_L3_APP			(10 + OMAP44XX_IRQ_GIC_START)	/* Reports application or non-attributable errors on L3 */
#define OMAP44XX_IRQ_PRCM			(11 + OMAP44XX_IRQ_GIC_START)	/* PRCM module */
#define OMAP44XX_IRQ_SDMA_0			(12 + OMAP44XX_IRQ_GIC_START)	/* System DMA interrupt request 0 */
#define OMAP44XX_IRQ_SDMA_1			(13 + OMAP44XX_IRQ_GIC_START)	/* System DMA interrupt request 1 */
#define OMAP44XX_IRQ_SDMA_2			(14 + OMAP44XX_IRQ_GIC_START)	/* System DMA interrupt request 2 */
#define OMAP44XX_IRQ_SDMA_3			(15 + OMAP44XX_IRQ_GIC_START)	/* System DMA interrupt request 3 */
#define OMAP44XX_IRQ_MCBSP4			(16 + OMAP44XX_IRQ_GIC_START)	/* McBSP 4 / PORCOMMONIRQ : Common Synchronous Interrupt Request line */
#define OMAP44XX_IRQ_MCBSP1			(17 + OMAP44XX_IRQ_GIC_START)	/* McBSP 1 / PORCOMMONIRQ : Common Synchronous Interrupt Request line */
#define OMAP44XX_IRQ_SR_MCU			(18 + OMAP44XX_IRQ_GIC_START)	/* SmartReflex MCU interrupt request */
#define OMAP44XX_IRQ_SR_CORE			(19 + OMAP44XX_IRQ_GIC_START)	/* SmartReflex Core interrupt request */
#define OMAP44XX_IRQ_GPMC			(20 + OMAP44XX_IRQ_GIC_START)	/* General purpose memory controller module */
#define OMAP44XX_IRQ_GFX			(21 + OMAP44XX_IRQ_GIC_START)	/* 2D/3D graphics module */
#define OMAP44XX_IRQ_MCBSP2			(22 + OMAP44XX_IRQ_GIC_START)	/* McBSP 2 / PORCOMMONIRQ : Common Synchronous Interrupt Request line */
#define OMAP44XX_IRQ_MCBSP3			(23 + OMAP44XX_IRQ_GIC_START)	/* McBSP 3 / PORCOMMONIRQ : Common Synchronous Interrupt Request line */
#define OMAP44XX_IRQ_ISS_5			(24 + OMAP44XX_IRQ_GIC_START)	/* Imaging Sub System interrupt request */
#define OMAP44XX_IRQ_DSS_DISPC			(25 + OMAP44XX_IRQ_GIC_START)	/* Display controller interrupt request */
#define OMAP44XX_IRQ_MAIL_U0			(26 + OMAP44XX_IRQ_GIC_START)	/* Mailbox user 0 interrupt request */
#define OMAP44XX_IRQ_C2C_SSCM_0			(27 + OMAP44XX_IRQ_GIC_START)	/* Chip2Chip Status interrupt */
#define OMAP44XX_IRQ_TESLA_MMU			(28 + OMAP44XX_IRQ_GIC_START)	/* Telsa (Mini64) SS MMU interrupt */
#define OMAP44XX_IRQ_GPIO1			(29 + OMAP44XX_IRQ_GIC_START)	/* GPIO module 1 interrupt 1 */
#define OMAP44XX_IRQ_GPIO2			(30 + OMAP44XX_IRQ_GIC_START)	/* GPIO module 2 interrupt 1 */
#define OMAP44XX_IRQ_GPIO3			(31 + OMAP44XX_IRQ_GIC_START)	/* GPIO module 3 interrupt 1 */
#define OMAP44XX_IRQ_GPIO4			(32 + OMAP44XX_IRQ_GIC_START)	/* GPIO module 4 interrupt 1 */
#define OMAP44XX_IRQ_GPIO5			(33 + OMAP44XX_IRQ_GIC_START)	/* GPIO module 5 interrupt 1 */
#define OMAP44XX_IRQ_GPIO6			(34 + OMAP44XX_IRQ_GIC_START)	/* GPIO module 6 interrupt 1 */
#define OMAP44XX_IRQ_USIM			(35 + OMAP44XX_IRQ_GIC_START)	/* USIM interrupt */
#define OMAP44XX_IRQ_WDT3			(36 + OMAP44XX_IRQ_GIC_START)	/* Watchdog timer module 3 overflow (WDT controlled by Mini64) */
#define OMAP44XX_IRQ_GPT1			(37 + OMAP44XX_IRQ_GIC_START)	/* General purpose timer module 1 (Timer 1ms / Wakeup domain) */
#define OMAP44XX_IRQ_GPT2			(38 + OMAP44XX_IRQ_GIC_START)	/* General purpose timer module 2 (Timer 1ms / Core domain) */
#define OMAP44XX_IRQ_GPT3			(39 + OMAP44XX_IRQ_GIC_START)	/* General purpose timer module 3 */
#define OMAP44XX_IRQ_GPT4			(40 + OMAP44XX_IRQ_GIC_START)	/* General purpose timer module 4 */
#define OMAP44XX_IRQ_GPT5			(41 + OMAP44XX_IRQ_GIC_START)	/* General purpose timer module 5 (Audio BE) */
#define OMAP44XX_IRQ_GPT6			(42 + OMAP44XX_IRQ_GIC_START)	/* General purpose timer module 6 (Audio BE) */
#define OMAP44XX_IRQ_GPT7			(43 + OMAP44XX_IRQ_GIC_START)	/* General purpose timer module 7 (Audio BE) */
#define OMAP44XX_IRQ_GPT8			(44 + OMAP44XX_IRQ_GIC_START)	/* General purpose timer module 8 (Audio BE) */
#define OMAP44XX_IRQ_GPT9			(45 + OMAP44XX_IRQ_GIC_START)	/* General purpose timer module 9 */
#define OMAP44XX_IRQ_GPT10			(46 + OMAP44XX_IRQ_GIC_START)	/* General purpose timer module 10 (Timer 1ms / Core domain) */
#define OMAP44XX_IRQ_GPT11			(47 + OMAP44XX_IRQ_GIC_START)	/* General purpose timer module 11 */
#define OMAP44XX_IRQ_SPI4			(48 + OMAP44XX_IRQ_GIC_START)	/* McSPI module 4 */
#define OMAP44XX_IRQ_SHA1_S			(49 + OMAP44XX_IRQ_GIC_START)	/* SHA2/MD5 crypto-accelerator 1 combined secure side */
#define OMAP44XX_IRQ_FPKA_SINTREQUEST_S		(50 + OMAP44XX_IRQ_GIC_START)	/* PKA crypto-accelerator combined */
#define OMAP44XX_IRQ_SHA1_P			(51 + OMAP44XX_IRQ_GIC_START)	/* SHA2/MD5 crypto-accelerator 1 combined public side */
#define OMAP44XX_IRQ_RNG			(52 + OMAP44XX_IRQ_GIC_START)	/* RNG module */
#define OMAP44XX_IRQ_DSS_DSI1			(53 + OMAP44XX_IRQ_GIC_START)	/* Display DSI1 interrupt request */
#define OMAP44XX_IRQ_I2C1			(56 + OMAP44XX_IRQ_GIC_START)	/* I2C module 1 */
#define OMAP44XX_IRQ_I2C2			(57 + OMAP44XX_IRQ_GIC_START)	/* I2C module 2 */
#define OMAP44XX_IRQ_HDQ			(58 + OMAP44XX_IRQ_GIC_START)	/* HDQ/One wire */
#define OMAP44XX_IRQ_MMC5			(59 + OMAP44XX_IRQ_GIC_START)	/* MMC5_IRQ */
#define OMAP44XX_IRQ_I2C3			(61 + OMAP44XX_IRQ_GIC_START)	/* I2C module 3 */
#define OMAP44XX_IRQ_I2C4			(62 + OMAP44XX_IRQ_GIC_START)	/* I2C module 4 */
#define OMAP44XX_IRQ_AES2_S			(63 + OMAP44XX_IRQ_GIC_START)	/* AES module 2 Interrupt secure side */
#define OMAP44XX_IRQ_AES2_P			(64 + OMAP44XX_IRQ_GIC_START)	/* AES module 2 Interrupt public side */
#define OMAP44XX_IRQ_SPI1			(65 + OMAP44XX_IRQ_GIC_START)	/* McSPI module 1 */
#define OMAP44XX_IRQ_SPI2			(66 + OMAP44XX_IRQ_GIC_START)	/* McSPI module 2 */
#define OMAP44XX_IRQ_HSI_P1			(67 + OMAP44XX_IRQ_GIC_START)	/* HSI interrupt request - Port 1 combined interrupt */
#define OMAP44XX_IRQ_HSI_P2			(68 + OMAP44XX_IRQ_GIC_START)	/* HSI interrupt request - Port 2 combined interrupt */
#define OMAP44XX_IRQ_FDIF_3			(69 + OMAP44XX_IRQ_GIC_START)	/* Face detect Interrupt */
#define OMAP44XX_IRQ_UART4			(70 + OMAP44XX_IRQ_GIC_START)	/* UART module 4 */
#define OMAP44XX_IRQ_HSI_DMA			(71 + OMAP44XX_IRQ_GIC_START)	/* HSI DMA engine */
#define OMAP44XX_IRQ_UART1			(72 + OMAP44XX_IRQ_GIC_START)	/* UART module 1 */
#define OMAP44XX_IRQ_UART2			(73 + OMAP44XX_IRQ_GIC_START)	/* UART module 2 */
#define OMAP44XX_IRQ_UART3			(74 + OMAP44XX_IRQ_GIC_START)	/* UART module 3 (also infrared) */
#define OMAP44XX_IRQ_PBIAS			(75 + OMAP44XX_IRQ_GIC_START)	/* Merged interrupt for PBIASlite1 and 2 */
#define OMAP44XX_IRQ_OHCI			(76 + OMAP44XX_IRQ_GIC_START)	/* HSUSB MP Host Interrupt OHCI controller */
#define OMAP44XX_IRQ_EHCI			(77 + OMAP44XX_IRQ_GIC_START)	/* HSUSB MP Host Interrupt EHCI controller */
#define OMAP44XX_IRQ_TLL			(78 + OMAP44XX_IRQ_GIC_START)	/* HSUSB MP TLL Interrupt */
#define OMAP44XX_IRQ_AES1_S			(79 + OMAP44XX_IRQ_GIC_START)	/* AES module 1 interrupt secure side */
#define OMAP44XX_IRQ_WDT2			(80 + OMAP44XX_IRQ_GIC_START)	/* WDT2 interrupt */
#define OMAP44XX_IRQ_DES_S			(81 + OMAP44XX_IRQ_GIC_START)	/* DES/3DES module secure side */
#define OMAP44XX_IRQ_DES_P			(82 + OMAP44XX_IRQ_GIC_START)	/* DES/3DES module Public side */
#define OMAP44XX_IRQ_MMC1			(83 + OMAP44XX_IRQ_GIC_START)	/* MMC1_IRQ */
#define OMAP44XX_IRQ_DSS_DSI2			(84 + OMAP44XX_IRQ_GIC_START)	/* Display DSI2 interrupt request */
#define OMAP44XX_IRQ_AES1_P			(85 + OMAP44XX_IRQ_GIC_START)	/* AES module 1 interrupt public side */
#define OMAP44XX_IRQ_MMC2			(86 + OMAP44XX_IRQ_GIC_START)	/* MMC/SDIO module 2 */
#define OMAP44XX_IRQ_MPU_ICR			(87 + OMAP44XX_IRQ_GIC_START)	/* MPU ICR Interrupt from Modem-APE  Inter Processor Communication IP */
#define OMAP44XX_IRQ_C2C_SSCM_1			(88 + OMAP44XX_IRQ_GIC_START)	/* Chip2Chip GPI interrupt */
#define OMAP44XX_IRQ_FSUSB			(89 + OMAP44XX_IRQ_GIC_START)	/* FS-USB - Host controller Interrupt */
#define OMAP44XX_IRQ_FSUSB_SMI			(90 + OMAP44XX_IRQ_GIC_START)	/* FS-USB - Host controller  SMI (system Management) Interrupt */
#define OMAP44XX_IRQ_SPI3			(91 + OMAP44XX_IRQ_GIC_START)	/* McSPI module 3 */
#define OMAP44XX_IRQ_HS_USB_MC_N		(92 + OMAP44XX_IRQ_GIC_START)	/* Module HS USB OTG controller */
#define OMAP44XX_IRQ_HS_USB_DMA_N		(93 + OMAP44XX_IRQ_GIC_START)	/* Module HS USB OTG DMA controller interrupt */
#define OMAP44XX_IRQ_MMC3			(94 + OMAP44XX_IRQ_GIC_START)	/* MMC/SDIO module 3 */
#define OMAP44XX_IRQ_GPT12			(95 + OMAP44XX_IRQ_GIC_START)	/* General purpose timer module 12 (secure timer / Wakeup domain) */
#define OMAP44XX_IRQ_MMC4			(96 + OMAP44XX_IRQ_GIC_START)	/* MMC/SDIO module 4 */
#define OMAP44XX_IRQ_SLIMBUS1			(97 + OMAP44XX_IRQ_GIC_START)	/* SLIMBus module 1 */
#define OMAP44XX_IRQ_SLIMBUS2			(98 + OMAP44XX_IRQ_GIC_START)	/* SLIMBus module 2 */
#define OMAP44XX_IRQ_ABE			(99 + OMAP44XX_IRQ_GIC_START)	/* Audio Back-End interrupt */
#define OMAP44XX_IRQ_DUCATI_MMU			(100 + OMAP44XX_IRQ_GIC_START)	/* Ducati MMU interrupt */
#define OMAP44XX_IRQ_DSS_HDMI			(101 + OMAP44XX_IRQ_GIC_START)	/* Display HDMI interrupt request */
#define OMAP44XX_IRQ_SR_IVA			(102 + OMAP44XX_IRQ_GIC_START)	/* SmartReflex IVA interrupt request */
#define OMAP44XX_IRQ_IVA_HD_POSYNCITRPEND_1	(103 + OMAP44XX_IRQ_GIC_START)	/* Sync interrupt from ICONT2 (vDMA) */
#define OMAP44XX_IRQ_IVA_HD_POSYNCITRPEND_0	(104 + OMAP44XX_IRQ_GIC_START)	/* Sync interrupt from ICONT1 */
#define OMAP44XX_IRQ_IVA_HD_POMBINTRPEND_0	(107 + OMAP44XX_IRQ_GIC_START)	/* IVA-HD Sub System interrupt request (Mailbox interrupt 0) */
#define OMAP44XX_IRQ_MCASP1_AR			(108 + OMAP44XX_IRQ_GIC_START)	/* McASP Receive interrupt - Module 1 (Audio BE) */
#define OMAP44XX_IRQ_MCASP1_AX			(109 + OMAP44XX_IRQ_GIC_START)	/* McASP Transmit interrupt - Module 1 (Audio BE) */
#define OMAP44XX_IRQ_EMIF4_1			(110 + OMAP44XX_IRQ_GIC_START)	/* EMIF4 interrupt - Module 1 */
#define OMAP44XX_IRQ_EMIF4_2			(111 + OMAP44XX_IRQ_GIC_START)	/* EMIF4 interrupt - Module 2 */
#define OMAP44XX_IRQ_MCPDM			(112 + OMAP44XX_IRQ_GIC_START)	/* McPDM interrupt (Audio BE) */
#define OMAP44XX_IRQ_DMM			(113 + OMAP44XX_IRQ_GIC_START)	/* DMM interrupt */
#define OMAP44XX_IRQ_DMIC			(114 + OMAP44XX_IRQ_GIC_START)	/* DMIC interrupt (Audio BE) */
#define OMAP44XX_IRQ_CDMA_0			(115 + OMAP44XX_IRQ_GIC_START)	/* Crypto DMA interrupt request 0 */
#define OMAP44XX_IRQ_CDMA_1			(116 + OMAP44XX_IRQ_GIC_START)	/* Crypto DMA interrupt request 1 */
#define OMAP44XX_IRQ_CDMA_2			(117 + OMAP44XX_IRQ_GIC_START)	/* Crypto DMA interrupt request 2 */
#define OMAP44XX_IRQ_CDMA_3			(118 + OMAP44XX_IRQ_GIC_START)	/* Crypto DMA interrupt request 3 */
#define OMAP44XX_IRQ_SYS_2N			(119 + OMAP44XX_IRQ_GIC_START)	/* External interrupt 2 (active low) */
#define OMAP44XX_IRQ_KBD_CTL			(120 + OMAP44XX_IRQ_GIC_START)	/* Keyboard controller IRQ */
#define OMAP44XX_IRQ_UNIPRO1			(124 + OMAP44XX_IRQ_GIC_START)	/* Unipro Module 1 */

#endif
