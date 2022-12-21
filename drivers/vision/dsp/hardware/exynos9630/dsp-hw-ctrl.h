/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Samsung Exynos SoC series dsp driver
 *
 * Copyright (c) 2019 Samsung Electronics Co., Ltd.
 *              http://www.samsung.com/
 */

#ifndef __DSP_HW_CTRL_H__
#define __DSP_HW_CTRL_H__

#define ENABLE_REG_SYSCTRL_DSPC
#define ENABLE_REG_AAREG
//#define ENABLE_REG_WDT
//#define ENABLE_REG_SDMA_SS
//#define ENABLE_REG_PWM
#define ENABLE_REG_CPU_SS
#define ENABLE_REG_GIC
#define ENABLE_REG_SYSCTRL_DSP0
#define ENABLE_REG_SYSCTRL_DSP1

enum dsp_reg_id {
#ifdef ENABLE_REG_SYSCTRL_DSPC
	DSPC_CA5_INTR_STATUS_NS,
	DSPC_CA5_INTR_ENABLE_NS,
	DSPC_CA5_SWI_SET_NS,
	DSPC_CA5_SWI_CLEAR_NS,
	DSPC_CA5_INTR_MASKED_STATUS_NS,
	DSPC_IAC_INTR_STATUS_NS,
	DSPC_IAC_INTR_ENABLE_NS,
	DSPC_IAC_SWI_SET_NS,
	DSPC_IAC_SWI_CLEAR_NS,
	DSPC_IAC_INTR_MASKED_STATUS_NS,
	DSPC_HOST_INTR_STATUS_NS,
	DSPC_HOST_INTR_ENABLE_NS,
	DSPC_HOST_SWI_SET_NS,
	DSPC_HOST_SWI_CLEAR_NS,
	DSPC_HOST_INTR_MASKED_STATUS_NS,
	DSPC_ABOX_INTR_STATUS_NS,
	DSPC_ABOX_INTR_ENABLE_NS,
	DSPC_ABOX_SWI_SET_NS,
	DSPC_ABOX_SWI_CLEAR_NS,
	DSPC_ABOX_INTR_MASKED_STATUS_NS,
	DSPC_IAC_WAKEUP_NS,
	DSPC_IAC_SFR2AXI_SGMO,
	STM_ENABLE,
	STM_SEL,
	STM_SFR0,
	STM_SFR1,
	DSPC_IAC_STACK_START_NS,
	DSPC_IAC_STACK_END_NS,
	DSPC_IAC_SWRESET,
	DSPC_IVP0_TH0_MAILBOX_INTR_NS,
	DSPC_IVP0_TH0_MAILBOX_NS,
	DSPC_IVP0_TH1_MAILBOX_INTR_NS,
	DSPC_IVP0_TH1_MAILBOX_NS,
	DSPC_IVP1_TH0_MAILBOX_INTR_NS,
	DSPC_IVP1_TH0_MAILBOX_NS,
	DSPC_IVP1_TH1_MAILBOX_INTR_NS,
	DSPC_IVP1_TH1_MAILBOX_NS,
	DSPC_IAC_MAILBOX_INTR_NS,
	DSPC_IAC_MAILBOX_NS,
	DSPC_HOST_MAILBOX_INTR_NS,
	DSPC_HOST_MAILBOX_NS,
	DSPC_TO_HOST_MAILBOX_INTR_NS,
	DSPC_TO_HOST_MAILBOX_NS,
	DSPC_ABOX_MAILBOX_INTR_NS,
	DSPC_ABOX_MAILBOX_NS,
	DSPC_TO_ABOX_MAILBOX_INTR_NS,
	DSPC_TO_ABOX_MAILBOX_NS,
	DSPC_MCGEN,
	DSPC_WDTEN,
	DSPC_CA5_INTR_STATUS_S,
	DSPC_CA5_INTR_ENABLE_S,
	DSPC_CA5_SWI_SET_S,
	DSPC_CA5_SWI_CLEAR_S,
	DSPC_CA5_INTR_MASKED_STATUS_S,
	DSPC_IAC_INTR_STATUS_S,
	DSPC_IAC_INTR_ENABLE_S,
	DSPC_IAC_SWI_SET_S,
	DSPC_IAC_SWI_CLEAR_S,
	DSPC_IAC_INTR_MASKED_STATUS_S,
	DSPC_HOST_INTR_STATUS_S,
	DSPC_HOST_INTR_ENABLE_S,
	DSPC_HOST_SWI_SET_S,
	DSPC_HOST_SWI_CLEAR_S,
	DSPC_HOST_INTR_MASKED_STATUS_S,
	DSPC_ABOX_INTR_STATUS_S,
	DSPC_ABOX_INTR_ENABLE_S,
	DSPC_ABOX_SWI_SET_S,
	DSPC_ABOX_SWI_CLEAR_S,
	DSPC_ABOX_INTR_MASKED_STATUS_S,
	DSPC_IAC_WAKEUP_S,
	DSPC_HOST_RRESP_MASK,
	DSPC_HOST_BRESP_MASK,
	DSPC_M2_AXUSER,
	DSPC_M2_AXQOS,
	DSPC_IAC_STACK_START_S,
	DSPC_IAC_STACK_END_S,
	DSPC_PERF_MON_ENABLE,
	DSPC_PERF_MON_CLEAR,
	DSPC_DBG_MON_ENABLE,
	DSPC_DBG_INTR_STATUS,
	DSPC_DBG_INTR_ENABLE,
	DSPC_DBG_INTR_CLEAR,
	DSPC_DBG_INTR_MSTATUS,
	DSPC_DBG_IAC_PC,
	DSPC_DBG_IAC_VALID_CNTL,
	DSPC_DBG_IAC_VALID_CNTH,
	DSPC_DBG_IAC_STALL_CNT,
	DSPC_DBG_IAC_ADDR_PM,
	DSPC_DBG_IAC_ADDR_DM,
	DSPC_DBG_IAC_ERROR_INFO,
	DSPC_DBG_IAC_INTR_CNT_NS,
	DSPC_DBG_IAC_INTR_CNT_S,
	DSPC_DBG_DINTR_STATUS,
	DSPC_DBG_DINTR_ENABLE,
	DSPC_DBG_DINTR_CLEAR,
	DSPC_DBG_DINTR_MSTATUS,
	DSPC_IVP0_TH0_MAILBOX_INTR_S,
	DSPC_IVP0_TH0_MAILBOX_S,
	DSPC_IVP0_TH1_MAILBOX_INTR_S,
	DSPC_IVP0_TH1_MAILBOX_S,
	DSPC_IVP1_TH0_MAILBOX_INTR_S,
	DSPC_IVP1_TH0_MAILBOX_S,
	DSPC_IVP1_TH1_MAILBOX_INTR_S,
	DSPC_IVP1_TH1_MAILBOX_S,
	DSPC_IAC_MAILBOX_INTR_S,
	DSPC_IAC_MAILBOX_S,
	DSPC_HOST_MAILBOX_INTR_S,
	DSPC_HOST_MAILBOX_S,
	DSPC_TO_HOST_MAILBOX_INTR_S,
	DSPC_TO_HOST_MAILBOX_S,
	DSPC_ABOX_MAILBOX_INTR_S,
	DSPC_ABOX_MAILBOX_S,
	DSPC_TO_ABOX_MAILBOX_INTR_S,
	DSPC_TO_ABOX_MAILBOX_S,
#endif // ENABLE_REG_SYSCTRL_DSPC
#ifdef ENABLE_REG_AAREG
	SEMAPHORE_REG,
	CLEAR_EXCL,
#endif // ENABLE_REG_AAREG
#ifdef ENABLE_REG_WDT
	DSPC_WTCON,
	DSPC_WTDAT,
	DSPC_WTCNT,
	DSPC_WTCLRINT,
	DSPC_WTMINCNT,
#endif // ENABLE_REG_WDT
#ifdef ENABLE_REG_SDMA_SS
	VERSION,
	SRESET,
	CLOCK_GATE_EN,
	CLOCK_GATE_SE_SET_0,
	CLOCK_GATE_SE_SET_1,
	MO_CTRL_EXT,
	MO_CTRL_INT_RD,
	MO_CTRL_INT_WR,
	ARQOS_LUT,
	AWQOS_LUT,
	DESCRIPTOR_QUEUE_CFG_VC0,
	DESCRIPTOR_QUEUE_CFG_VC1,
	DESCRIPTOR_QUEUE_CFG_VC2,
	DESCRIPTOR_QUEUE_CFG_VC3,
	DESCRIPTOR_QUEUE_CFG_VC4,
	DESCRIPTOR_QUEUE_CFG_VC5,
	DESCRIPTOR_QUEUE_CFG_VC6,
	DESCRIPTOR_QUEUE_CFG_VC7,
	DESCRIPTOR_QUEUE_CFG_VC8,
	DESCRIPTOR_QUEUE_CFG_VC9,
	DESCRIPTOR_QUEUE_CFG_VC10,
	DESCRIPTOR_QUEUE_CFG_VC11,
	DESCRIPTOR_QUEUE_CFG_VC12,
	DESCRIPTOR_QUEUE_CFG_VC13,
	DESCRIPTOR_QUEUE_CFG_VC14,
	DESCRIPTOR_QUEUE_CFG_VC15,
	DESCRIPTOR_QUEUE_CFG_VC16,
	DESCRIPTOR_QUEUE_CFG_VC17,
	DESCRIPTOR_QUEUE_CFG_VC18,
	DESCRIPTOR_QUEUE_CFG_VC19,
	DESCRIPTOR_QUEUE_CFG_VC20,
	DESCRIPTOR_QUEUE_CFG_VC21,
	DESCRIPTOR_QUEUE_CFG_VC22,
	DESCRIPTOR_QUEUE_CFG_VC23,
	ERR_CODES,
	ERR_MASK,
	INTERRUPT_CM,
	INTERRUPT_MASK_CM,
	INTERRUPT_DONE_NS,
	INTERRUPT_BLK_DONE_NS,
	INTERRUPT_FORCE_NS,
	INTERRUPT_GROUP_NS,
	INTERRUPT_QUEUE_NS_VC0,
	INTERRUPT_QUEUE_NS_VC1,
	INTERRUPT_QUEUE_NS_VC2,
	INTERRUPT_QUEUE_NS_VC3,
	INTERRUPT_QUEUE_NS_VC4,
	INTERRUPT_QUEUE_NS_VC5,
	INTERRUPT_QUEUE_NS_VC6,
	INTERRUPT_QUEUE_NS_VC7,
	INTERRUPT_QUEUE_NS_VC8,
	INTERRUPT_QUEUE_NS_VC9,
	INTERRUPT_QUEUE_NS_VC10,
	INTERRUPT_QUEUE_NS_VC11,
	INTERRUPT_QUEUE_NS_VC12,
	INTERRUPT_QUEUE_NS_VC13,
	INTERRUPT_QUEUE_NS_VC14,
	INTERRUPT_QUEUE_NS_VC15,
	INTERRUPT_QUEUE_NS_VC16,
	INTERRUPT_QUEUE_NS_VC17,
	INTERRUPT_QUEUE_NS_VC18,
	INTERRUPT_QUEUE_NS_VC19,
	INTERRUPT_QUEUE_NS_VC20,
	INTERRUPT_QUEUE_NS_VC21,
	INTERRUPT_QUEUE_NS_VC22,
	INTERRUPT_QUEUE_NS_VC23,
	INTERRUPT_DONE_S,
	INTERRUPT_BLK_DONE_S,
	INTERRUPT_FORCE_S,
	INTERRUPT_GROUP_S,
	INTERRUPT_QUEUE_S_VC0,
	INTERRUPT_QUEUE_S_VC1,
	INTERRUPT_QUEUE_S_VC2,
	INTERRUPT_QUEUE_S_VC3,
	INTERRUPT_QUEUE_S_VC4,
	INTERRUPT_QUEUE_S_VC5,
	INTERRUPT_QUEUE_S_VC6,
	INTERRUPT_QUEUE_S_VC7,
	INTERRUPT_QUEUE_S_VC8,
	INTERRUPT_QUEUE_S_VC9,
	INTERRUPT_QUEUE_S_VC10,
	INTERRUPT_QUEUE_S_VC11,
	INTERRUPT_QUEUE_S_VC12,
	INTERRUPT_QUEUE_S_VC13,
	INTERRUPT_QUEUE_S_VC14,
	INTERRUPT_QUEUE_S_VC15,
	INTERRUPT_QUEUE_S_VC16,
	INTERRUPT_QUEUE_S_VC17,
	INTERRUPT_QUEUE_S_VC18,
	INTERRUPT_QUEUE_S_VC19,
	INTERRUPT_QUEUE_S_VC20,
	INTERRUPT_QUEUE_S_VC21,
	INTERRUPT_QUEUE_S_VC22,
	INTERRUPT_QUEUE_S_VC23,
	TCM0_TRANSFER_ON_VC0,
	TCM1_TRANSFER_ON_VC0,
	TCM0_TRANSFER_ON_VC1,
	TCM1_TRANSFER_ON_VC1,
	TCM0_TRANSFER_ON_VC2,
	TCM1_TRANSFER_ON_VC2,
	TCM0_TRANSFER_ON_VC3,
	TCM1_TRANSFER_ON_VC3,
	TCM0_TRANSFER_ON_VC4,
	TCM1_TRANSFER_ON_VC4,
	TCM0_TRANSFER_ON_VC5,
	TCM1_TRANSFER_ON_VC5,
	TCM0_TRANSFER_ON_VC6,
	TCM1_TRANSFER_ON_VC6,
	TCM0_TRANSFER_ON_VC7,
	TCM1_TRANSFER_ON_VC7,
	TCM0_TRANSFER_ON_VC8,
	TCM1_TRANSFER_ON_VC8,
	TCM0_TRANSFER_ON_VC9,
	TCM1_TRANSFER_ON_VC9,
	TCM0_TRANSFER_ON_VC10,
	TCM1_TRANSFER_ON_VC10,
	TCM0_TRANSFER_ON_VC11,
	TCM1_TRANSFER_ON_VC11,
	TCM0_TRANSFER_ON_VC12,
	TCM1_TRANSFER_ON_VC12,
	TCM0_TRANSFER_ON_VC13,
	TCM1_TRANSFER_ON_VC13,
	TCM0_TRANSFER_ON_VC14,
	TCM1_TRANSFER_ON_VC14,
	TCM0_TRANSFER_ON_VC15,
	TCM1_TRANSFER_ON_VC15,
	TCM0_TRANSFER_ON_VC16,
	TCM1_TRANSFER_ON_VC16,
	TCM0_TRANSFER_ON_VC17,
	TCM1_TRANSFER_ON_VC17,
	TCM0_TRANSFER_ON_VC18,
	TCM1_TRANSFER_ON_VC18,
	TCM0_TRANSFER_ON_VC19,
	TCM1_TRANSFER_ON_VC19,
	TCM0_TRANSFER_ON_VC20,
	TCM1_TRANSFER_ON_VC20,
	TCM0_TRANSFER_ON_VC21,
	TCM1_TRANSFER_ON_VC21,
	TCM0_TRANSFER_ON_VC22,
	TCM1_TRANSFER_ON_VC22,
	TCM0_TRANSFER_ON_VC23,
	TCM1_TRANSFER_ON_VC23,
	FLT_INFO_SET_CFG,
	FLT_INFO_MAX_SET0,
	FLT_INFO_MIN_SET0,
	FLT_INFO_SUM_SET0,
	FLT_INFO_SUM2_SET0,
	FLT_INFO_MAX_SET1,
	FLT_INFO_MIN_SET1,
	FLT_INFO_SUM_SET1,
	FLT_INFO_SUM2_SET1,
	FLT_INFO_MAX_SET2,
	FLT_INFO_MIN_SET2,
	FLT_INFO_SUM_SET2,
	FLT_INFO_SUM2_SET2,
	FLT_INFO_MAX_SET3,
	FLT_INFO_MIN_SET3,
	FLT_INFO_SUM_SET3,
	FLT_INFO_SUM2_SET3,
	STATUS_SE_0,
	STATUS_SE_1,
	STATUS_INT_SOURCE_ERR,
	STATUS_INT_SOURCE_DONE,
	STATUS_INT_SOURCE_BLK_DONE,
	STATUS_INT_SOURCE_GROUP,
	STATUS_VC_INFO_VC0_7,
	STATUS_VC_INFO_VC8_15,
	STATUS_VC_INFO_VC16_24,
	STATUS_TCM0_SDMA_MUTEX,
	STATUS_TCM1_SDMA_MUTEX,
	TCM0_TRANSFER_ON_UPDATE_VC,
	TCM1_TRANSFER_ON_UPDATE_VC,
	NSECURE,
	DEBUG_ADDR,
	DEBUG_REG0,
	ENABLE_VC0,
	FLOW_CONTROL_VC0,
	INTERRUPT_MASK_VC0,
	NUM_OF_BLK_VC0,
	FRM_SIZE_XY_VC0,
	BLK_SIZE_XY_VC0,
	BLK_SIZE_Z_VC0,
	BLK_BOUNDER_XY_VC0,
	BLK_BOUNDER_Z_VC0,
	BLK_OVERLAP_XY_VC0,
	BLK_OVERLAP_Z_VC0,
	EXT_MEM_ADDR_P0_VC0,
	EXT_MEM_ADDR_P1_VC0,
	INT_MEM0_ADDR_P0_VC0,
	INT_MEM0_ADDR_P1_VC0,
	INT_MEM0_ADDR_P2_VC0,
	INT_MEM1_ADDR_P0_VC0,
	INT_MEM1_ADDR_P1_VC0,
	INT_MEM1_ADDR_P2_VC0,
	INT_MEM_ADDR_DSG_VC0,
	INT_MEM_OFFSET_DSG_VC0,
	INT_MEM_STRIDE_VC0,
	INT_MEM_2D_STRIDE_Y_VC0,
	INT_MEM_2D_STRIDE_UV_VC0,
	DATA_INFO_VC0,
	DATA_CONVERT_CFG_VC0,
	QCONV_SCALE_VC0,
	QCONV_BAIS_VC0,
	ROTATE_CFG_VC0,
	PADDING_SIZE_VC0,
	PADDING_SIZE_UV_VC0,
	PADDING_DATA_INFO_VC0,
	NPUFMT_CFG_VC0,
	ENABLE_VC1,
	FLOW_CONTROL_VC1,
	INTERRUPT_MASK_VC1,
	NUM_OF_BLK_VC1,
	FRM_SIZE_XY_VC1,
	BLK_SIZE_XY_VC1,
	BLK_SIZE_Z_VC1,
	BLK_BOUNDER_XY_VC1,
	BLK_BOUNDER_Z_VC1,
	BLK_OVERLAP_XY_VC1,
	BLK_OVERLAP_Z_VC1,
	EXT_MEM_ADDR_P0_VC1,
	EXT_MEM_ADDR_P1_VC1,
	INT_MEM0_ADDR_P0_VC1,
	INT_MEM0_ADDR_P1_VC1,
	INT_MEM0_ADDR_P2_VC1,
	INT_MEM1_ADDR_P0_VC1,
	INT_MEM1_ADDR_P1_VC1,
	INT_MEM1_ADDR_P2_VC1,
	INT_MEM_ADDR_DSG_VC1,
	INT_MEM_OFFSET_DSG_VC1,
	INT_MEM_STRIDE_VC1,
	INT_MEM_2D_STRIDE_Y_VC1,
	INT_MEM_2D_STRIDE_UV_VC1,
	DATA_INFO_VC1,
	DATA_CONVERT_CFG_VC1,
	QCONV_SCALE_VC1,
	QCONV_BAIS_VC1,
	ROTATE_CFG_VC1,
	PADDING_SIZE_VC1,
	PADDING_SIZE_UV_VC1,
	PADDING_DATA_INFO_VC1,
	NPUFMT_CFG_VC1,
	ENABLE_VC2,
	FLOW_CONTROL_VC2,
	INTERRUPT_MASK_VC2,
	NUM_OF_BLK_VC2,
	FRM_SIZE_XY_VC2,
	BLK_SIZE_XY_VC2,
	BLK_SIZE_Z_VC2,
	BLK_BOUNDER_XY_VC2,
	BLK_BOUNDER_Z_VC2,
	BLK_OVERLAP_XY_VC2,
	BLK_OVERLAP_Z_VC2,
	EXT_MEM_ADDR_P0_VC2,
	EXT_MEM_ADDR_P1_VC2,
	INT_MEM0_ADDR_P0_VC2,
	INT_MEM0_ADDR_P1_VC2,
	INT_MEM0_ADDR_P2_VC2,
	INT_MEM1_ADDR_P0_VC2,
	INT_MEM1_ADDR_P1_VC2,
	INT_MEM1_ADDR_P2_VC2,
	INT_MEM_ADDR_DSG_VC2,
	INT_MEM_OFFSET_DSG_VC2,
	INT_MEM_STRIDE_VC2,
	INT_MEM_2D_STRIDE_Y_VC2,
	INT_MEM_2D_STRIDE_UV_VC2,
	DATA_INFO_VC2,
	DATA_CONVERT_CFG_VC2,
	QCONV_SCALE_VC2,
	QCONV_BAIS_VC2,
	ROTATE_CFG_VC2,
	PADDING_SIZE_VC2,
	PADDING_SIZE_UV_VC2,
	PADDING_DATA_INFO_VC2,
	NPUFMT_CFG_VC2,
	ENABLE_VC3,
	FLOW_CONTROL_VC3,
	INTERRUPT_MASK_VC3,
	NUM_OF_BLK_VC3,
	FRM_SIZE_XY_VC3,
	BLK_SIZE_XY_VC3,
	BLK_SIZE_Z_VC3,
	BLK_BOUNDER_XY_VC3,
	BLK_BOUNDER_Z_VC3,
	BLK_OVERLAP_XY_VC3,
	BLK_OVERLAP_Z_VC3,
	EXT_MEM_ADDR_P0_VC3,
	EXT_MEM_ADDR_P1_VC3,
	INT_MEM0_ADDR_P0_VC3,
	INT_MEM0_ADDR_P1_VC3,
	INT_MEM0_ADDR_P2_VC3,
	INT_MEM1_ADDR_P0_VC3,
	INT_MEM1_ADDR_P1_VC3,
	INT_MEM1_ADDR_P2_VC3,
	INT_MEM_ADDR_DSG_VC3,
	INT_MEM_OFFSET_DSG_VC3,
	INT_MEM_STRIDE_VC3,
	INT_MEM_2D_STRIDE_Y_VC3,
	INT_MEM_2D_STRIDE_UV_VC3,
	DATA_INFO_VC3,
	DATA_CONVERT_CFG_VC3,
	QCONV_SCALE_VC3,
	QCONV_BAIS_VC3,
	ROTATE_CFG_VC3,
	PADDING_SIZE_VC3,
	PADDING_SIZE_UV_VC3,
	PADDING_DATA_INFO_VC3,
	NPUFMT_CFG_VC3,
	ENABLE_VC4,
	FLOW_CONTROL_VC4,
	INTERRUPT_MASK_VC4,
	NUM_OF_BLK_VC4,
	FRM_SIZE_XY_VC4,
	BLK_SIZE_XY_VC4,
	BLK_SIZE_Z_VC4,
	BLK_BOUNDER_XY_VC4,
	BLK_BOUNDER_Z_VC4,
	BLK_OVERLAP_XY_VC4,
	BLK_OVERLAP_Z_VC4,
	EXT_MEM_ADDR_P0_VC4,
	EXT_MEM_ADDR_P1_VC4,
	INT_MEM0_ADDR_P0_VC4,
	INT_MEM0_ADDR_P1_VC4,
	INT_MEM0_ADDR_P2_VC4,
	INT_MEM1_ADDR_P0_VC4,
	INT_MEM1_ADDR_P1_VC4,
	INT_MEM1_ADDR_P2_VC4,
	INT_MEM_ADDR_DSG_VC4,
	INT_MEM_OFFSET_DSG_VC4,
	INT_MEM_STRIDE_VC4,
	INT_MEM_2D_STRIDE_Y_VC4,
	INT_MEM_2D_STRIDE_UV_VC4,
	DATA_INFO_VC4,
	DATA_CONVERT_CFG_VC4,
	QCONV_SCALE_VC4,
	QCONV_BAIS_VC4,
	ROTATE_CFG_VC4,
	PADDING_SIZE_VC4,
	PADDING_SIZE_UV_VC4,
	PADDING_DATA_INFO_VC4,
	NPUFMT_CFG_VC4,
	ENABLE_VC5,
	FLOW_CONTROL_VC5,
	INTERRUPT_MASK_VC5,
	NUM_OF_BLK_VC5,
	FRM_SIZE_XY_VC5,
	BLK_SIZE_XY_VC5,
	BLK_SIZE_Z_VC5,
	BLK_BOUNDER_XY_VC5,
	BLK_BOUNDER_Z_VC5,
	BLK_OVERLAP_XY_VC5,
	BLK_OVERLAP_Z_VC5,
	EXT_MEM_ADDR_P0_VC5,
	EXT_MEM_ADDR_P1_VC5,
	INT_MEM0_ADDR_P0_VC5,
	INT_MEM0_ADDR_P1_VC5,
	INT_MEM0_ADDR_P2_VC5,
	INT_MEM1_ADDR_P0_VC5,
	INT_MEM1_ADDR_P1_VC5,
	INT_MEM1_ADDR_P2_VC5,
	INT_MEM_ADDR_DSG_VC5,
	INT_MEM_OFFSET_DSG_VC5,
	INT_MEM_STRIDE_VC5,
	INT_MEM_2D_STRIDE_Y_VC5,
	INT_MEM_2D_STRIDE_UV_VC5,
	DATA_INFO_VC5,
	DATA_CONVERT_CFG_VC5,
	QCONV_SCALE_VC5,
	QCONV_BAIS_VC5,
	ROTATE_CFG_VC5,
	PADDING_SIZE_VC5,
	PADDING_SIZE_UV_VC5,
	PADDING_DATA_INFO_VC5,
	NPUFMT_CFG_VC5,
	ENABLE_VC6,
	FLOW_CONTROL_VC6,
	INTERRUPT_MASK_VC6,
	NUM_OF_BLK_VC6,
	FRM_SIZE_XY_VC6,
	BLK_SIZE_XY_VC6,
	BLK_SIZE_Z_VC6,
	BLK_BOUNDER_XY_VC6,
	BLK_BOUNDER_Z_VC6,
	BLK_OVERLAP_XY_VC6,
	BLK_OVERLAP_Z_VC6,
	EXT_MEM_ADDR_P0_VC6,
	EXT_MEM_ADDR_P1_VC6,
	INT_MEM0_ADDR_P0_VC6,
	INT_MEM0_ADDR_P1_VC6,
	INT_MEM0_ADDR_P2_VC6,
	INT_MEM1_ADDR_P0_VC6,
	INT_MEM1_ADDR_P1_VC6,
	INT_MEM1_ADDR_P2_VC6,
	INT_MEM_ADDR_DSG_VC6,
	INT_MEM_OFFSET_DSG_VC6,
	INT_MEM_STRIDE_VC6,
	INT_MEM_2D_STRIDE_Y_VC6,
	INT_MEM_2D_STRIDE_UV_VC6,
	DATA_INFO_VC6,
	DATA_CONVERT_CFG_VC6,
	QCONV_SCALE_VC6,
	QCONV_BAIS_VC6,
	ROTATE_CFG_VC6,
	PADDING_SIZE_VC6,
	PADDING_SIZE_UV_VC6,
	PADDING_DATA_INFO_VC6,
	NPUFMT_CFG_VC6,
	ENABLE_VC7,
	FLOW_CONTROL_VC7,
	INTERRUPT_MASK_VC7,
	NUM_OF_BLK_VC7,
	FRM_SIZE_XY_VC7,
	BLK_SIZE_XY_VC7,
	BLK_SIZE_Z_VC7,
	BLK_BOUNDER_XY_VC7,
	BLK_BOUNDER_Z_VC7,
	BLK_OVERLAP_XY_VC7,
	BLK_OVERLAP_Z_VC7,
	EXT_MEM_ADDR_P0_VC7,
	EXT_MEM_ADDR_P1_VC7,
	INT_MEM0_ADDR_P0_VC7,
	INT_MEM0_ADDR_P1_VC7,
	INT_MEM0_ADDR_P2_VC7,
	INT_MEM1_ADDR_P0_VC7,
	INT_MEM1_ADDR_P1_VC7,
	INT_MEM1_ADDR_P2_VC7,
	INT_MEM_ADDR_DSG_VC7,
	INT_MEM_OFFSET_DSG_VC7,
	INT_MEM_STRIDE_VC7,
	INT_MEM_2D_STRIDE_Y_VC7,
	INT_MEM_2D_STRIDE_UV_VC7,
	DATA_INFO_VC7,
	DATA_CONVERT_CFG_VC7,
	QCONV_SCALE_VC7,
	QCONV_BAIS_VC7,
	ROTATE_CFG_VC7,
	PADDING_SIZE_VC7,
	PADDING_SIZE_UV_VC7,
	PADDING_DATA_INFO_VC7,
	NPUFMT_CFG_VC7,
	ENABLE_VC8,
	FLOW_CONTROL_VC8,
	INTERRUPT_MASK_VC8,
	NUM_OF_BLK_VC8,
	FRM_SIZE_XY_VC8,
	BLK_SIZE_XY_VC8,
	BLK_SIZE_Z_VC8,
	BLK_BOUNDER_XY_VC8,
	BLK_BOUNDER_Z_VC8,
	BLK_OVERLAP_XY_VC8,
	BLK_OVERLAP_Z_VC8,
	EXT_MEM_ADDR_P0_VC8,
	EXT_MEM_ADDR_P1_VC8,
	INT_MEM0_ADDR_P0_VC8,
	INT_MEM0_ADDR_P1_VC8,
	INT_MEM0_ADDR_P2_VC8,
	INT_MEM1_ADDR_P0_VC8,
	INT_MEM1_ADDR_P1_VC8,
	INT_MEM1_ADDR_P2_VC8,
	INT_MEM_ADDR_DSG_VC8,
	INT_MEM_OFFSET_DSG_VC8,
	INT_MEM_STRIDE_VC8,
	INT_MEM_2D_STRIDE_Y_VC8,
	INT_MEM_2D_STRIDE_UV_VC8,
	DATA_INFO_VC8,
	DATA_CONVERT_CFG_VC8,
	QCONV_SCALE_VC8,
	QCONV_BAIS_VC8,
	ROTATE_CFG_VC8,
	PADDING_SIZE_VC8,
	PADDING_SIZE_UV_VC8,
	PADDING_DATA_INFO_VC8,
	NPUFMT_CFG_VC8,
	ENABLE_VC9,
	FLOW_CONTROL_VC9,
	INTERRUPT_MASK_VC9,
	NUM_OF_BLK_VC9,
	FRM_SIZE_XY_VC9,
	BLK_SIZE_XY_VC9,
	BLK_SIZE_Z_VC9,
	BLK_BOUNDER_XY_VC9,
	BLK_BOUNDER_Z_VC9,
	BLK_OVERLAP_XY_VC9,
	BLK_OVERLAP_Z_VC9,
	EXT_MEM_ADDR_P0_VC9,
	EXT_MEM_ADDR_P1_VC9,
	INT_MEM0_ADDR_P0_VC9,
	INT_MEM0_ADDR_P1_VC9,
	INT_MEM0_ADDR_P2_VC9,
	INT_MEM1_ADDR_P0_VC9,
	INT_MEM1_ADDR_P1_VC9,
	INT_MEM1_ADDR_P2_VC9,
	INT_MEM_ADDR_DSG_VC9,
	INT_MEM_OFFSET_DSG_VC9,
	INT_MEM_STRIDE_VC9,
	INT_MEM_2D_STRIDE_Y_VC9,
	INT_MEM_2D_STRIDE_UV_VC9,
	DATA_INFO_VC9,
	DATA_CONVERT_CFG_VC9,
	QCONV_SCALE_VC9,
	QCONV_BAIS_VC9,
	ROTATE_CFG_VC9,
	PADDING_SIZE_VC9,
	PADDING_SIZE_UV_VC9,
	PADDING_DATA_INFO_VC9,
	NPUFMT_CFG_VC9,
	ENABLE_VC10,
	FLOW_CONTROL_VC10,
	INTERRUPT_MASK_VC10,
	NUM_OF_BLK_VC10,
	FRM_SIZE_XY_VC10,
	BLK_SIZE_XY_VC10,
	BLK_SIZE_Z_VC10,
	BLK_BOUNDER_XY_VC10,
	BLK_BOUNDER_Z_VC10,
	BLK_OVERLAP_XY_VC10,
	BLK_OVERLAP_Z_VC10,
	EXT_MEM_ADDR_P0_VC10,
	EXT_MEM_ADDR_P1_VC10,
	INT_MEM0_ADDR_P0_VC10,
	INT_MEM0_ADDR_P1_VC10,
	INT_MEM0_ADDR_P2_VC10,
	INT_MEM1_ADDR_P0_VC10,
	INT_MEM1_ADDR_P1_VC10,
	INT_MEM1_ADDR_P2_VC10,
	INT_MEM_ADDR_DSG_VC10,
	INT_MEM_OFFSET_DSG_VC10,
	INT_MEM_STRIDE_VC10,
	INT_MEM_2D_STRIDE_Y_VC10,
	INT_MEM_2D_STRIDE_UV_VC10,
	DATA_INFO_VC10,
	DATA_CONVERT_CFG_VC10,
	QCONV_SCALE_VC10,
	QCONV_BAIS_VC10,
	ROTATE_CFG_VC10,
	PADDING_SIZE_VC10,
	PADDING_SIZE_UV_VC10,
	PADDING_DATA_INFO_VC10,
	NPUFMT_CFG_VC10,
	ENABLE_VC11,
	FLOW_CONTROL_VC11,
	INTERRUPT_MASK_VC11,
	NUM_OF_BLK_VC11,
	FRM_SIZE_XY_VC11,
	BLK_SIZE_XY_VC11,
	BLK_SIZE_Z_VC11,
	BLK_BOUNDER_XY_VC11,
	BLK_BOUNDER_Z_VC11,
	BLK_OVERLAP_XY_VC11,
	BLK_OVERLAP_Z_VC11,
	EXT_MEM_ADDR_P0_VC11,
	EXT_MEM_ADDR_P1_VC11,
	INT_MEM0_ADDR_P0_VC11,
	INT_MEM0_ADDR_P1_VC11,
	INT_MEM0_ADDR_P2_VC11,
	INT_MEM1_ADDR_P0_VC11,
	INT_MEM1_ADDR_P1_VC11,
	INT_MEM1_ADDR_P2_VC11,
	INT_MEM_ADDR_DSG_VC11,
	INT_MEM_OFFSET_DSG_VC11,
	INT_MEM_STRIDE_VC11,
	INT_MEM_2D_STRIDE_Y_VC11,
	INT_MEM_2D_STRIDE_UV_VC11,
	DATA_INFO_VC11,
	DATA_CONVERT_CFG_VC11,
	QCONV_SCALE_VC11,
	QCONV_BAIS_VC11,
	ROTATE_CFG_VC11,
	PADDING_SIZE_VC11,
	PADDING_SIZE_UV_VC11,
	PADDING_DATA_INFO_VC11,
	NPUFMT_CFG_VC11,
	ENABLE_VC12,
	FLOW_CONTROL_VC12,
	INTERRUPT_MASK_VC12,
	NUM_OF_BLK_VC12,
	FRM_SIZE_XY_VC12,
	BLK_SIZE_XY_VC12,
	BLK_SIZE_Z_VC12,
	BLK_BOUNDER_XY_VC12,
	BLK_BOUNDER_Z_VC12,
	BLK_OVERLAP_XY_VC12,
	BLK_OVERLAP_Z_VC12,
	EXT_MEM_ADDR_P0_VC12,
	EXT_MEM_ADDR_P1_VC12,
	INT_MEM0_ADDR_P0_VC12,
	INT_MEM0_ADDR_P1_VC12,
	INT_MEM0_ADDR_P2_VC12,
	INT_MEM1_ADDR_P0_VC12,
	INT_MEM1_ADDR_P1_VC12,
	INT_MEM1_ADDR_P2_VC12,
	INT_MEM_ADDR_DSG_VC12,
	INT_MEM_OFFSET_DSG_VC12,
	INT_MEM_STRIDE_VC12,
	INT_MEM_2D_STRIDE_Y_VC12,
	INT_MEM_2D_STRIDE_UV_VC12,
	DATA_INFO_VC12,
	DATA_CONVERT_CFG_VC12,
	QCONV_SCALE_VC12,
	QCONV_BAIS_VC12,
	ROTATE_CFG_VC12,
	PADDING_SIZE_VC12,
	PADDING_SIZE_UV_VC12,
	PADDING_DATA_INFO_VC12,
	NPUFMT_CFG_VC12,
	ENABLE_VC13,
	FLOW_CONTROL_VC13,
	INTERRUPT_MASK_VC13,
	NUM_OF_BLK_VC13,
	FRM_SIZE_XY_VC13,
	BLK_SIZE_XY_VC13,
	BLK_SIZE_Z_VC13,
	BLK_BOUNDER_XY_VC13,
	BLK_BOUNDER_Z_VC13,
	BLK_OVERLAP_XY_VC13,
	BLK_OVERLAP_Z_VC13,
	EXT_MEM_ADDR_P0_VC13,
	EXT_MEM_ADDR_P1_VC13,
	INT_MEM0_ADDR_P0_VC13,
	INT_MEM0_ADDR_P1_VC13,
	INT_MEM0_ADDR_P2_VC13,
	INT_MEM1_ADDR_P0_VC13,
	INT_MEM1_ADDR_P1_VC13,
	INT_MEM1_ADDR_P2_VC13,
	INT_MEM_ADDR_DSG_VC13,
	INT_MEM_OFFSET_DSG_VC13,
	INT_MEM_STRIDE_VC13,
	INT_MEM_2D_STRIDE_Y_VC13,
	INT_MEM_2D_STRIDE_UV_VC13,
	DATA_INFO_VC13,
	DATA_CONVERT_CFG_VC13,
	QCONV_SCALE_VC13,
	QCONV_BAIS_VC13,
	ROTATE_CFG_VC13,
	PADDING_SIZE_VC13,
	PADDING_SIZE_UV_VC13,
	PADDING_DATA_INFO_VC13,
	NPUFMT_CFG_VC13,
	ENABLE_VC14,
	FLOW_CONTROL_VC14,
	INTERRUPT_MASK_VC14,
	NUM_OF_BLK_VC14,
	FRM_SIZE_XY_VC14,
	BLK_SIZE_XY_VC14,
	BLK_SIZE_Z_VC14,
	BLK_BOUNDER_XY_VC14,
	BLK_BOUNDER_Z_VC14,
	BLK_OVERLAP_XY_VC14,
	BLK_OVERLAP_Z_VC14,
	EXT_MEM_ADDR_P0_VC14,
	EXT_MEM_ADDR_P1_VC14,
	INT_MEM0_ADDR_P0_VC14,
	INT_MEM0_ADDR_P1_VC14,
	INT_MEM0_ADDR_P2_VC14,
	INT_MEM1_ADDR_P0_VC14,
	INT_MEM1_ADDR_P1_VC14,
	INT_MEM1_ADDR_P2_VC14,
	INT_MEM_ADDR_DSG_VC14,
	INT_MEM_OFFSET_DSG_VC14,
	INT_MEM_STRIDE_VC14,
	INT_MEM_2D_STRIDE_Y_VC14,
	INT_MEM_2D_STRIDE_UV_VC14,
	DATA_INFO_VC14,
	DATA_CONVERT_CFG_VC14,
	QCONV_SCALE_VC14,
	QCONV_BAIS_VC14,
	ROTATE_CFG_VC14,
	PADDING_SIZE_VC14,
	PADDING_SIZE_UV_VC14,
	PADDING_DATA_INFO_VC14,
	NPUFMT_CFG_VC14,
	ENABLE_VC15,
	FLOW_CONTROL_VC15,
	INTERRUPT_MASK_VC15,
	NUM_OF_BLK_VC15,
	FRM_SIZE_XY_VC15,
	BLK_SIZE_XY_VC15,
	BLK_SIZE_Z_VC15,
	BLK_BOUNDER_XY_VC15,
	BLK_BOUNDER_Z_VC15,
	BLK_OVERLAP_XY_VC15,
	BLK_OVERLAP_Z_VC15,
	EXT_MEM_ADDR_P0_VC15,
	EXT_MEM_ADDR_P1_VC15,
	INT_MEM0_ADDR_P0_VC15,
	INT_MEM0_ADDR_P1_VC15,
	INT_MEM0_ADDR_P2_VC15,
	INT_MEM1_ADDR_P0_VC15,
	INT_MEM1_ADDR_P1_VC15,
	INT_MEM1_ADDR_P2_VC15,
	INT_MEM_ADDR_DSG_VC15,
	INT_MEM_OFFSET_DSG_VC15,
	INT_MEM_STRIDE_VC15,
	INT_MEM_2D_STRIDE_Y_VC15,
	INT_MEM_2D_STRIDE_UV_VC15,
	DATA_INFO_VC15,
	DATA_CONVERT_CFG_VC15,
	QCONV_SCALE_VC15,
	QCONV_BAIS_VC15,
	ROTATE_CFG_VC15,
	PADDING_SIZE_VC15,
	PADDING_SIZE_UV_VC15,
	PADDING_DATA_INFO_VC15,
	NPUFMT_CFG_VC15,
	ENABLE_VC16,
	FLOW_CONTROL_VC16,
	INTERRUPT_MASK_VC16,
	NUM_OF_BLK_VC16,
	FRM_SIZE_XY_VC16,
	BLK_SIZE_XY_VC16,
	BLK_SIZE_Z_VC16,
	BLK_BOUNDER_XY_VC16,
	BLK_BOUNDER_Z_VC16,
	BLK_OVERLAP_XY_VC16,
	BLK_OVERLAP_Z_VC16,
	EXT_MEM_ADDR_P0_VC16,
	EXT_MEM_ADDR_P1_VC16,
	INT_MEM0_ADDR_P0_VC16,
	INT_MEM0_ADDR_P1_VC16,
	INT_MEM0_ADDR_P2_VC16,
	INT_MEM1_ADDR_P0_VC16,
	INT_MEM1_ADDR_P1_VC16,
	INT_MEM1_ADDR_P2_VC16,
	INT_MEM_ADDR_DSG_VC16,
	INT_MEM_OFFSET_DSG_VC16,
	INT_MEM_STRIDE_VC16,
	INT_MEM_2D_STRIDE_Y_VC16,
	INT_MEM_2D_STRIDE_UV_VC16,
	DATA_INFO_VC16,
	DATA_CONVERT_CFG_VC16,
	QCONV_SCALE_VC16,
	QCONV_BAIS_VC16,
	ROTATE_CFG_VC16,
	PADDING_SIZE_VC16,
	PADDING_SIZE_UV_VC16,
	PADDING_DATA_INFO_VC16,
	NPUFMT_CFG_VC16,
	ENABLE_VC17,
	FLOW_CONTROL_VC17,
	INTERRUPT_MASK_VC17,
	NUM_OF_BLK_VC17,
	FRM_SIZE_XY_VC17,
	BLK_SIZE_XY_VC17,
	BLK_SIZE_Z_VC17,
	BLK_BOUNDER_XY_VC17,
	BLK_BOUNDER_Z_VC17,
	BLK_OVERLAP_XY_VC17,
	BLK_OVERLAP_Z_VC17,
	EXT_MEM_ADDR_P0_VC17,
	EXT_MEM_ADDR_P1_VC17,
	INT_MEM0_ADDR_P0_VC17,
	INT_MEM0_ADDR_P1_VC17,
	INT_MEM0_ADDR_P2_VC17,
	INT_MEM1_ADDR_P0_VC17,
	INT_MEM1_ADDR_P1_VC17,
	INT_MEM1_ADDR_P2_VC17,
	INT_MEM_ADDR_DSG_VC17,
	INT_MEM_OFFSET_DSG_VC17,
	INT_MEM_STRIDE_VC17,
	INT_MEM_2D_STRIDE_Y_VC17,
	INT_MEM_2D_STRIDE_UV_VC17,
	DATA_INFO_VC17,
	DATA_CONVERT_CFG_VC17,
	QCONV_SCALE_VC17,
	QCONV_BAIS_VC17,
	ROTATE_CFG_VC17,
	PADDING_SIZE_VC17,
	PADDING_SIZE_UV_VC17,
	PADDING_DATA_INFO_VC17,
	NPUFMT_CFG_VC17,
	ENABLE_VC18,
	FLOW_CONTROL_VC18,
	INTERRUPT_MASK_VC18,
	NUM_OF_BLK_VC18,
	FRM_SIZE_XY_VC18,
	BLK_SIZE_XY_VC18,
	BLK_SIZE_Z_VC18,
	BLK_BOUNDER_XY_VC18,
	BLK_BOUNDER_Z_VC18,
	BLK_OVERLAP_XY_VC18,
	BLK_OVERLAP_Z_VC18,
	EXT_MEM_ADDR_P0_VC18,
	EXT_MEM_ADDR_P1_VC18,
	INT_MEM0_ADDR_P0_VC18,
	INT_MEM0_ADDR_P1_VC18,
	INT_MEM0_ADDR_P2_VC18,
	INT_MEM1_ADDR_P0_VC18,
	INT_MEM1_ADDR_P1_VC18,
	INT_MEM1_ADDR_P2_VC18,
	INT_MEM_ADDR_DSG_VC18,
	INT_MEM_OFFSET_DSG_VC18,
	INT_MEM_STRIDE_VC18,
	INT_MEM_2D_STRIDE_Y_VC18,
	INT_MEM_2D_STRIDE_UV_VC18,
	DATA_INFO_VC18,
	DATA_CONVERT_CFG_VC18,
	QCONV_SCALE_VC18,
	QCONV_BAIS_VC18,
	ROTATE_CFG_VC18,
	PADDING_SIZE_VC18,
	PADDING_SIZE_UV_VC18,
	PADDING_DATA_INFO_VC18,
	NPUFMT_CFG_VC18,
	ENABLE_VC19,
	FLOW_CONTROL_VC19,
	INTERRUPT_MASK_VC19,
	NUM_OF_BLK_VC19,
	FRM_SIZE_XY_VC19,
	BLK_SIZE_XY_VC19,
	BLK_SIZE_Z_VC19,
	BLK_BOUNDER_XY_VC19,
	BLK_BOUNDER_Z_VC19,
	BLK_OVERLAP_XY_VC19,
	BLK_OVERLAP_Z_VC19,
	EXT_MEM_ADDR_P0_VC19,
	EXT_MEM_ADDR_P1_VC19,
	INT_MEM0_ADDR_P0_VC19,
	INT_MEM0_ADDR_P1_VC19,
	INT_MEM0_ADDR_P2_VC19,
	INT_MEM1_ADDR_P0_VC19,
	INT_MEM1_ADDR_P1_VC19,
	INT_MEM1_ADDR_P2_VC19,
	INT_MEM_ADDR_DSG_VC19,
	INT_MEM_OFFSET_DSG_VC19,
	INT_MEM_STRIDE_VC19,
	INT_MEM_2D_STRIDE_Y_VC19,
	INT_MEM_2D_STRIDE_UV_VC19,
	DATA_INFO_VC19,
	DATA_CONVERT_CFG_VC19,
	QCONV_SCALE_VC19,
	QCONV_BAIS_VC19,
	ROTATE_CFG_VC19,
	PADDING_SIZE_VC19,
	PADDING_SIZE_UV_VC19,
	PADDING_DATA_INFO_VC19,
	NPUFMT_CFG_VC19,
	ENABLE_VC20,
	FLOW_CONTROL_VC20,
	INTERRUPT_MASK_VC20,
	NUM_OF_BLK_VC20,
	FRM_SIZE_XY_VC20,
	BLK_SIZE_XY_VC20,
	BLK_SIZE_Z_VC20,
	BLK_BOUNDER_XY_VC20,
	BLK_BOUNDER_Z_VC20,
	BLK_OVERLAP_XY_VC20,
	BLK_OVERLAP_Z_VC20,
	EXT_MEM_ADDR_P0_VC20,
	EXT_MEM_ADDR_P1_VC20,
	INT_MEM0_ADDR_P0_VC20,
	INT_MEM0_ADDR_P1_VC20,
	INT_MEM0_ADDR_P2_VC20,
	INT_MEM1_ADDR_P0_VC20,
	INT_MEM1_ADDR_P1_VC20,
	INT_MEM1_ADDR_P2_VC20,
	INT_MEM_ADDR_DSG_VC20,
	INT_MEM_OFFSET_DSG_VC20,
	INT_MEM_STRIDE_VC20,
	INT_MEM_2D_STRIDE_Y_VC20,
	INT_MEM_2D_STRIDE_UV_VC20,
	DATA_INFO_VC20,
	DATA_CONVERT_CFG_VC20,
	QCONV_SCALE_VC20,
	QCONV_BAIS_VC20,
	ROTATE_CFG_VC20,
	PADDING_SIZE_VC20,
	PADDING_SIZE_UV_VC20,
	PADDING_DATA_INFO_VC20,
	NPUFMT_CFG_VC20,
	ENABLE_VC21,
	FLOW_CONTROL_VC21,
	INTERRUPT_MASK_VC21,
	NUM_OF_BLK_VC21,
	FRM_SIZE_XY_VC21,
	BLK_SIZE_XY_VC21,
	BLK_SIZE_Z_VC21,
	BLK_BOUNDER_XY_VC21,
	BLK_BOUNDER_Z_VC21,
	BLK_OVERLAP_XY_VC21,
	BLK_OVERLAP_Z_VC21,
	EXT_MEM_ADDR_P0_VC21,
	EXT_MEM_ADDR_P1_VC21,
	INT_MEM0_ADDR_P0_VC21,
	INT_MEM0_ADDR_P1_VC21,
	INT_MEM0_ADDR_P2_VC21,
	INT_MEM1_ADDR_P0_VC21,
	INT_MEM1_ADDR_P1_VC21,
	INT_MEM1_ADDR_P2_VC21,
	INT_MEM_ADDR_DSG_VC21,
	INT_MEM_OFFSET_DSG_VC21,
	INT_MEM_STRIDE_VC21,
	INT_MEM_2D_STRIDE_Y_VC21,
	INT_MEM_2D_STRIDE_UV_VC21,
	DATA_INFO_VC21,
	DATA_CONVERT_CFG_VC21,
	QCONV_SCALE_VC21,
	QCONV_BAIS_VC21,
	ROTATE_CFG_VC21,
	PADDING_SIZE_VC21,
	PADDING_SIZE_UV_VC21,
	PADDING_DATA_INFO_VC21,
	NPUFMT_CFG_VC21,
	ENABLE_VC22,
	FLOW_CONTROL_VC22,
	INTERRUPT_MASK_VC22,
	NUM_OF_BLK_VC22,
	FRM_SIZE_XY_VC22,
	BLK_SIZE_XY_VC22,
	BLK_SIZE_Z_VC22,
	BLK_BOUNDER_XY_VC22,
	BLK_BOUNDER_Z_VC22,
	BLK_OVERLAP_XY_VC22,
	BLK_OVERLAP_Z_VC22,
	EXT_MEM_ADDR_P0_VC22,
	EXT_MEM_ADDR_P1_VC22,
	INT_MEM0_ADDR_P0_VC22,
	INT_MEM0_ADDR_P1_VC22,
	INT_MEM0_ADDR_P2_VC22,
	INT_MEM1_ADDR_P0_VC22,
	INT_MEM1_ADDR_P1_VC22,
	INT_MEM1_ADDR_P2_VC22,
	INT_MEM_ADDR_DSG_VC22,
	INT_MEM_OFFSET_DSG_VC22,
	INT_MEM_STRIDE_VC22,
	INT_MEM_2D_STRIDE_Y_VC22,
	INT_MEM_2D_STRIDE_UV_VC22,
	DATA_INFO_VC22,
	DATA_CONVERT_CFG_VC22,
	QCONV_SCALE_VC22,
	QCONV_BAIS_VC22,
	ROTATE_CFG_VC22,
	PADDING_SIZE_VC22,
	PADDING_SIZE_UV_VC22,
	PADDING_DATA_INFO_VC22,
	NPUFMT_CFG_VC22,
	ENABLE_VC23,
	FLOW_CONTROL_VC23,
	INTERRUPT_MASK_VC23,
	NUM_OF_BLK_VC23,
	FRM_SIZE_XY_VC23,
	BLK_SIZE_XY_VC23,
	BLK_SIZE_Z_VC23,
	BLK_BOUNDER_XY_VC23,
	BLK_BOUNDER_Z_VC23,
	BLK_OVERLAP_XY_VC23,
	BLK_OVERLAP_Z_VC23,
	EXT_MEM_ADDR_P0_VC23,
	EXT_MEM_ADDR_P1_VC23,
	INT_MEM0_ADDR_P0_VC23,
	INT_MEM0_ADDR_P1_VC23,
	INT_MEM0_ADDR_P2_VC23,
	INT_MEM1_ADDR_P0_VC23,
	INT_MEM1_ADDR_P1_VC23,
	INT_MEM1_ADDR_P2_VC23,
	INT_MEM_ADDR_DSG_VC23,
	INT_MEM_OFFSET_DSG_VC23,
	INT_MEM_STRIDE_VC23,
	INT_MEM_2D_STRIDE_Y_VC23,
	INT_MEM_2D_STRIDE_UV_VC23,
	DATA_INFO_VC23,
	DATA_CONVERT_CFG_VC23,
	QCONV_SCALE_VC23,
	QCONV_BAIS_VC23,
	ROTATE_CFG_VC23,
	PADDING_SIZE_VC23,
	PADDING_SIZE_UV_VC23,
	PADDING_DATA_INFO_VC23,
	NPUFMT_CFG_VC23,
#endif // ENABLE_REG_SDMA_SS
#ifdef ENABLE_REG_PWM
	PWM_CONFIG0,
	PWM_CONFIG1,
	PWM_CONTROL,
	PWM_CNTB0,
	PWM_CMPB0,
	PWM_OBST0,
	PWM_CNTB1,
	PWM_CMPB1,
	PWM_OBST1,
	PWM_CNTB2,
	PWM_CMPB2,
	PWM_OBST2,
	PWM_CNTB3,
	PWM_CMPB3,
	PWM_OBST3,
	PWM_CNTB4,
	PWM_OBST4,
	TINT_CSTAT,
#endif // ENABLE_REG_PWM
#ifdef ENABLE_REG_CPU_SS
	DSPC_CPU_REMAPS0_NS,
	DSPC_CPU_REMAPS1,
	DSPC_CPU_REMAPD0_NS,
	DSPC_CPU_REMAPD1,
	DSPC_CPU_RESET_RELEASE,
	DSPC_CPU_ABORTEN,
	DSPC_CPU_AWCACHE,
	DSPC_CPU_ARCACHE,
	DSPC_CPU_CKEN_ON,
	DSPC_CPU_EVENT,
	DSPC_CPU_RELEASE,
	DSPC_CPU_RELEASE_NS,
	DSPC_CPU_PERIPHBASE,
	GIC_WCPU_SEL,
	GIC_RCPU_SEL,
	DSPC_SEC_MEMORY_FLAG,
	DSPC_SEC_SLAVE_FLAG,
	DSPC_SEC_DMAVC_FLAG,
	DSPC_SEC_NPU_FLAG,
	DSPC_SEC_SLAVE_FLAG_CLR,
	DSPC_SEC_DMAVC_FLAG_CLR,
	DSPC_SEC_ISP_FLAG,
	DSPC_CPU_CP15DISABLE,
	DSPC_CPU_L1RSTDISABLE,
	DSPC_CPU_CFGDISABLE,
	DSPC_CPU_EVENT_STATUS,
	DSPC_CPU_WFI_STATUS,
	DSPC_CPU_WFE_STATUS,
	DSPC_CPU0_PC,
	DSPC_CPU1_PC,
	DSPC_CPU_RESTART,
	DSPC_WR2C_EN,
#endif // ENABLE_REG_CPU_SS
#ifdef ENABLE_REG_GIC
	GICD_CTLR,
	GICD_TYPER,
	GICD_IIDR,
	GICD_IGROUPR,
	GICD_ISENABLER,
	GICD_ICENABLER,
	GICD_ISPENDR,
	GICD_ICPENDR,
	GICD_ISACTIVER,
	GICD_ICACTIVER,
	GICD_IPRIORITYR_SGI,
	GICD_IPRIORITYR_PPI0,
	GICD_IPRIORITYR_PPI1,
	GICD_IPRIORITYR_SPI,
	GICD_ITARGETSR_SGI,
	GICD_ITARGETSR_PPI0,
	GICD_ITARGETSR_PPI1,
	GICD_ITARGETSR_SPI,
	GICD_ICFGR_SGI,
	GICD_ICFGR_PPI,
	GICD_ICFGR_SPI,
	GICD_PPISR,
	GICD_SPISRn,
	GICD_SGIR,
	GICD_CPENDSGIR,
	GICC_CTLR,
	GICC_PMR,
	GICC_BPR,
	GICC_IAR,
	GICC_EOIR,
	GICC_RPR,
	GICC_HPPIR,
	GICC_ABPR,
	GICC_AIAR,
	GICC_AEOIR,
	GICC_AHPPIR,
	GICC_APR0,
	GICC_NSAPR0,
	GICC_IIDR,
	GICC_DIR,
#endif // ENABLE_REG_GIC
#ifdef ENABLE_REG_SYSCTRL_DSP0
	DSP0_MCGEN,
	DSP0_IVP_SWRESET,
	DSP0_PERF_MON_ENABLE,
	DSP0_PERF_MON_CLEAR,
	DSP0_DBG_MON_ENABLE,
	DSP0_DBG_INTR_STATUS,
	DSP0_DBG_INTR_ENABLE,
	DSP0_DBG_INTR_CLEAR,
	DSP0_DBG_INTR_MSTATUS,
	DSP0_IVP_SFR2AXI_SGMO,
	DSP0_VTCM_STACK_START_END,
	DSP0_VTCM_MODE,
	DSP0_PERF_IVP_PC0,
	DSP0_PERF_IVP_PC1,
	DSP0_PERF_IVP_VALID_CNTL,
	DSP0_PERF_IVP_VALID_CNTH,
	DSP0_PERF_IVP_STALL_CNT,
	DSP0_PERF_IVP_IC_REQL,
	DSP0_PERF_IVP_IC_REQH,
	DSP0_PERF_IVP_IC_MISS,
	DSP0_PERF_IVP_INST_CNT,
	DSP0_DBG_IVP_ADDR_PM,
	DSP0_DBG_IVP_ADDR_DM,
	DSP0_DBG_IVP_ERROR_INFO,
	DSP0_DBG_IVP0_ERROR_PC,
	DSP0_DBG_IVP1_ERROR_PC,
	DSP0_DBG_MPU_SMONITOR,
	DSP0_DBG_MPU_EMONITOR,
	DSP0_IVP_WAKEUP,
	DSP0_IVP_INTR_STATUS_TH,
	DSP0_IVP_INTR_ENABLE_TH,
	DSP0_IVP_SWI_SET_TH,
	DSP0_IVP_SWI_CLEAR_TH,
	DSP0_IVP_MASKED_STATUS_TH,
	DSP0_IVP_IC_BASE_ADDR,
	DSP0_IVP_IC_CODE_SIZE,
	DSP0_IVP_IC_INVALID_REQ,
	DSP0_IVP_IC_INVALID_STATUS,
	DSP0_IVP_DM_STACK_START_END,
	DSP0_IVP_MAILBOX_INTR_TH0,
	DSP0_IVP_MAILBOX_TH0,
	DSP0_IVP_MAILBOX_INTR_TH1,
	DSP0_IVP_MAILBOX_TH1,
#endif // ENABLE_REG_SYSCTRL_DSP0
#ifdef ENABLE_REG_SYSCTRL_DSP1
	DSP1_MCGEN,
	DSP1_IVP_SWRESET,
	DSP1_PERF_MON_ENABLE,
	DSP1_PERF_MON_CLEAR,
	DSP1_DBG_MON_ENABLE,
	DSP1_DBG_INTR_STATUS,
	DSP1_DBG_INTR_ENABLE,
	DSP1_DBG_INTR_CLEAR,
	DSP1_DBG_INTR_MSTATUS,
	DSP1_IVP_SFR2AXI_SGMO,
	DSP1_VTCM_STACK_START_END,
	DSP1_VTCM_MODE,
	DSP1_PERF_IVP_PC0,
	DSP1_PERF_IVP_PC1,
	DSP1_PERF_IVP_VALID_CNTL,
	DSP1_PERF_IVP_VALID_CNTH,
	DSP1_PERF_IVP_STALL_CNT,
	DSP1_PERF_IVP_IC_REQL,
	DSP1_PERF_IVP_IC_REQH,
	DSP1_PERF_IVP_IC_MISS,
	DSP1_PERF_IVP_INST_CNT,
	DSP1_DBG_IVP_ADDR_PM,
	DSP1_DBG_IVP_ADDR_DM,
	DSP1_DBG_IVP_ERROR_INFO,
	DSP1_DBG_IVP0_ERROR_PC,
	DSP1_DBG_IVP1_ERROR_PC,
	DSP1_DBG_MPU_SMONITOR,
	DSP1_DBG_MPU_EMONITOR,
	DSP1_IVP_WAKEUP,
	DSP1_IVP_INTR_STATUS_TH,
	DSP1_IVP_INTR_ENABLE_TH,
	DSP1_IVP_SWI_SET_TH,
	DSP1_IVP_SWI_CLEAR_TH,
	DSP1_IVP_MASKED_STATUS_TH,
	DSP1_IVP_IC_BASE_ADDR,
	DSP1_IVP_IC_CODE_SIZE,
	DSP1_IVP_IC_INVALID_REQ,
	DSP1_IVP_IC_INVALID_STATUS,
	DSP1_IVP_DM_STACK_START_END,
	DSP1_IVP_MAILBOX_INTR_TH0,
	DSP1_IVP_MAILBOX_TH0,
	DSP1_IVP_MAILBOX_INTR_TH1,
	DSP1_IVP_MAILBOX_TH1,
#endif // ENABLE_REG_SYSCTRL_DSP1
	DSP_REG_END,
};

struct dsp_ctrl {
	phys_addr_t	sfr_pa;
	void __iomem	*sfr;
};

#endif
