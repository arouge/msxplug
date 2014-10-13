/*
  KMZ80 common table(Z80/HD64180/R800)
  by Mamiya
*/

#include "kmz80i.h"

const OPT_ITEM kmz80_ot_xx[0x100] = {
/* Z80 00-3F  00?????? */
/*     INC r  00rrr100 */
/*     DEC r  00rrr101 */
/*     LD r,n 00rrr110 */
/* Z80 00-07  00000??? */
	OPTABLE(0,		0,		0,		OP_NOP),
	OPTABLE(STO_BC,	LDO_NN,	0,		OP_LD),
	OPTABLE(STO_M,	LDO_A,	ADR_BC,	OP_LD),
	OPTABLE(STO_BC,	LDO_BC,	0,		OP_INC16),
	OPTABLE(STO_B,	LDO_B,	0,		OP_INC),
	OPTABLE(STO_B,	LDO_B,	0,		OP_DEC),
	OPTABLE(STO_B,	LDO_N,	0,		OP_LD),
	OPTABLE(STO_A,	LDO_A,	0,		OP_RLCA),
/* Z80 08-0f  00001??? */
	OPTABLE(STO_AF,	LDO_AF,	0,		OP_EX_AF_AF),
	OPTABLE(STO_IX,	LDO_BC,	ADR_IX,	OP_ADD16),
	OPTABLE(STO_A,	LDO_M,	ADR_BC,	OP_LD),
	OPTABLE(STO_BC,	LDO_BC,	0,		OP_DEC16),
	OPTABLE(STO_C,	LDO_C,	0,		OP_INC),
	OPTABLE(STO_C,	LDO_C,	0,		OP_DEC),
	OPTABLE(STO_C,	LDO_N,	0,		OP_LD),
	OPTABLE(STO_A,	LDO_A,	0,		OP_RRCA),
/* Z80 10-17  00010??? */
	OPTABLE(0,		LDO_N,	0,		OP_DJNZ),
	OPTABLE(STO_DE,	LDO_NN,	0,		OP_LD),
	OPTABLE(STO_M,	LDO_A,	ADR_DE,	OP_LD),
	OPTABLE(STO_DE,	LDO_DE,	0,		OP_INC16),
	OPTABLE(STO_D,	LDO_D,	0,		OP_INC),
	OPTABLE(STO_D,	LDO_D,	0,		OP_DEC),
	OPTABLE(STO_D,	LDO_N,	0,		OP_LD),
	OPTABLE(STO_A,	LDO_A,	0,		OP_RLA),
/* Z80 18-1f  00011??? */
	OPTABLE(0,		LDO_N,	0,		OP_JR),
	OPTABLE(STO_IX,	LDO_DE,	ADR_IX,	OP_ADD16),
	OPTABLE(STO_A,	LDO_M,	ADR_DE,	OP_LD),
	OPTABLE(STO_DE,	LDO_DE,	0,		OP_DEC16),
	OPTABLE(STO_E,	LDO_E,	0,		OP_INC),
	OPTABLE(STO_E,	LDO_E,	0,		OP_DEC),
	OPTABLE(STO_E,	LDO_N,	0,		OP_LD),
	OPTABLE(STO_A,	LDO_A,	0,		OP_RRA),
/* Z80 20-27  00100??? */
	OPTABLE(0,		LDO_N,	0,		OP_JRCC),
	OPTABLE(STO_IX,	LDO_NN,	0,		OP_LD),
	OPTABLE(STO_MM,	LDO_IX,	ADR_NN,	OP_LD),
	OPTABLE(STO_IX,	LDO_IX,	0,		OP_INC16),
	OPTABLE(STO_IH,	LDO_IH,	0,		OP_INC),
	OPTABLE(STO_IH,	LDO_IH,	0,		OP_DEC),
	OPTABLE(STO_IH,	LDO_N,	0,		OP_LD),
	OPTABLE(STO_A,	LDO_A,	0,		OP_DAA),
/* Z80 28-2f  00101??? */
	OPTABLE(0,		LDO_N,	0,		OP_JRCC),
	OPTABLE(STO_IX,	LDO_IX,	ADR_IX,	OP_ADD16),
	OPTABLE(STO_IX,	LDO_MM,	ADR_NN,	OP_LD),
	OPTABLE(STO_IX,	LDO_IX,	0,		OP_DEC16),
	OPTABLE(STO_IL,	LDO_IL,	0,		OP_INC),
	OPTABLE(STO_IL,	LDO_IL,	0,		OP_DEC),
	OPTABLE(STO_IL,	LDO_N,	0,		OP_LD),
	OPTABLE(STO_A,	LDO_A,	0,		OP_CPL),
/* Z80 30-37  00110??? */
	OPTABLE(0,		LDO_N,	0,		OP_JRCC),
	OPTABLE(STO_SP,	LDO_NN,	0,		OP_LD),
	OPTABLE(STO_M,	LDO_A,	ADR_NN,	OP_LD),
	OPTABLE(STO_SP,	LDO_SP,	0,		OP_INC16),
	OPTABLE(STO_M,	LDO_M,	ADR_ID,	OP_INC),
	OPTABLE(STO_M,	LDO_M,	ADR_ID,	OP_DEC),
	OPTABLE(STO_M,	LDO_N,	ADR_ID,	OP_LD),
	OPTABLE(0,		0,		0,		OP_SCF),
/* Z80 38-3f  00111??? */
	OPTABLE(0,		LDO_N,	0,		OP_JRCC),
	OPTABLE(STO_IX,	LDO_SP,	ADR_IX,	OP_ADD16),
	OPTABLE(STO_A,	LDO_M,	ADR_NN,	OP_LD),
	OPTABLE(STO_SP,	LDO_SP,	0,		OP_DEC16),
	OPTABLE(STO_A,	LDO_A,	0,		OP_INC),
	OPTABLE(STO_A,	LDO_A,	0,		OP_DEC),
	OPTABLE(STO_A,	LDO_N,	0,		OP_LD),
	OPTABLE(0,		0,		0,		OP_CCF),

/* Z80 40-7F  01?????? */
/*     LD R,r 01RRRrrr */
/*     HALT   01110110 */
	OPTABLE(STO_B,	LDO_B,	0,		OP_LD),
	OPTABLE(STO_B,	LDO_C,	0,		OP_LD),
	OPTABLE(STO_B,	LDO_D,	0,		OP_LD),
	OPTABLE(STO_B,	LDO_E,	0,		OP_LD),
	OPTABLE(STO_B,	LDO_IH,	0,		OP_LD),
	OPTABLE(STO_B,	LDO_IL,	0,		OP_LD),
	OPTABLE(STO_B,	LDO_M,	ADR_ID,	OP_LD),
	OPTABLE(STO_B,	LDO_A,	0,		OP_LD),
	OPTABLE(STO_C,	LDO_B,	0,		OP_LD),
	OPTABLE(STO_C,	LDO_C,	0,		OP_LD),
	OPTABLE(STO_C,	LDO_D,	0,		OP_LD),
	OPTABLE(STO_C,	LDO_E,	0,		OP_LD),
	OPTABLE(STO_C,	LDO_IH,	0,		OP_LD),
	OPTABLE(STO_C,	LDO_IL,	0,		OP_LD),
	OPTABLE(STO_C,	LDO_M,	ADR_ID,	OP_LD),
	OPTABLE(STO_C,	LDO_A,	0,		OP_LD),
	OPTABLE(STO_D,	LDO_B,	0,		OP_LD),
	OPTABLE(STO_D,	LDO_C,	0,		OP_LD),
	OPTABLE(STO_D,	LDO_D,	0,		OP_LD),
	OPTABLE(STO_D,	LDO_E,	0,		OP_LD),
	OPTABLE(STO_D,	LDO_IH,	0,		OP_LD),
	OPTABLE(STO_D,	LDO_IL,	0,		OP_LD),
	OPTABLE(STO_D,	LDO_M,	ADR_ID,	OP_LD),
	OPTABLE(STO_D,	LDO_A,	0,		OP_LD),
	OPTABLE(STO_E,	LDO_B,	0,		OP_LD),
	OPTABLE(STO_E,	LDO_C,	0,		OP_LD),
	OPTABLE(STO_E,	LDO_D,	0,		OP_LD),
	OPTABLE(STO_E,	LDO_E,	0,		OP_LD),
	OPTABLE(STO_E,	LDO_IH,	0,		OP_LD),
	OPTABLE(STO_E,	LDO_IL,	0,		OP_LD),
	OPTABLE(STO_E,	LDO_M,	ADR_ID,	OP_LD),
	OPTABLE(STO_E,	LDO_A,	0,		OP_LD),
	OPTABLE(STO_IH,	LDO_B,	0,		OP_LD),
	OPTABLE(STO_IH,	LDO_C,	0,		OP_LD),
	OPTABLE(STO_IH,	LDO_D,	0,		OP_LD),
	OPTABLE(STO_IH,	LDO_E,	0,		OP_LD),
	OPTABLE(STO_IH,	LDO_IH,	0,		OP_LD),
	OPTABLE(STO_IH,	LDO_IL,	0,		OP_LD),
	OPTABLE(STO_H,	LDO_M,	ADR_ID,	OP_LD),
	OPTABLE(STO_IH,	LDO_A,	0,		OP_LD),
	OPTABLE(STO_IL,	LDO_B,	0,		OP_LD),
	OPTABLE(STO_IL,	LDO_C,	0,		OP_LD),
	OPTABLE(STO_IL,	LDO_D,	0,		OP_LD),
	OPTABLE(STO_IL,	LDO_E,	0,		OP_LD),
	OPTABLE(STO_IL,	LDO_IH,	0,		OP_LD),
	OPTABLE(STO_IL,	LDO_IL,	0,		OP_LD),
	OPTABLE(STO_L,	LDO_M,	ADR_ID,	OP_LD),
	OPTABLE(STO_IL,	LDO_A,	0,		OP_LD),
	OPTABLE(STO_M,	LDO_B,	ADR_ID,	OP_LD),
	OPTABLE(STO_M,	LDO_C,	ADR_ID,	OP_LD),
	OPTABLE(STO_M,	LDO_D,	ADR_ID,	OP_LD),
	OPTABLE(STO_M,	LDO_E,	ADR_ID,	OP_LD),
	OPTABLE(STO_M,	LDO_H,	ADR_ID,	OP_LD),
	OPTABLE(STO_M,	LDO_L,	ADR_ID,	OP_LD),
	OPTABLE(0,		0,		0,		OP_HALT),
	OPTABLE(STO_M,	LDO_A,	ADR_ID,	OP_LD),
	OPTABLE(STO_A,	LDO_B,	0,		OP_LD),
	OPTABLE(STO_A,	LDO_C,	0,		OP_LD),
	OPTABLE(STO_A,	LDO_D,	0,		OP_LD),
	OPTABLE(STO_A,	LDO_E,	0,		OP_LD),
	OPTABLE(STO_A,	LDO_IH,	0,		OP_LD),
	OPTABLE(STO_A,	LDO_IL,	0,		OP_LD),
	OPTABLE(STO_A,	LDO_M,	ADR_ID,	OP_LD),
	OPTABLE(STO_A,	LDO_A,	0,		OP_LD),

/* Z80 80-BF  10?????? */
/* Z80 80 ADD 10000rrr */
	OPTABLE(STO_A,	LDO_B,	0,		OP_ADD),
	OPTABLE(STO_A,	LDO_C,	0,		OP_ADD),
	OPTABLE(STO_A,	LDO_D,	0,		OP_ADD),
	OPTABLE(STO_A,	LDO_E,	0,		OP_ADD),
	OPTABLE(STO_A,	LDO_IH,	0,		OP_ADD),
	OPTABLE(STO_A,	LDO_IL,	0,		OP_ADD),
	OPTABLE(STO_A,	LDO_M,	ADR_ID,	OP_ADD),
	OPTABLE(STO_A,	LDO_A,	0,		OP_ADD),
/* Z80 88 ADC 10001rrr */
	OPTABLE(STO_A,	LDO_B,	0,		OP_ADC),
	OPTABLE(STO_A,	LDO_C,	0,		OP_ADC),
	OPTABLE(STO_A,	LDO_D,	0,		OP_ADC),
	OPTABLE(STO_A,	LDO_E,	0,		OP_ADC),
	OPTABLE(STO_A,	LDO_IH,	0,		OP_ADC),
	OPTABLE(STO_A,	LDO_IL,	0,		OP_ADC),
	OPTABLE(STO_A,	LDO_M,	ADR_ID,	OP_ADC),
	OPTABLE(STO_A,	LDO_A,	0,		OP_ADC),
/* Z80 90 SBB 10010rrr */
	OPTABLE(STO_A,	LDO_B,	0,		OP_SUB),
	OPTABLE(STO_A,	LDO_C,	0,		OP_SUB),
	OPTABLE(STO_A,	LDO_D,	0,		OP_SUB),
	OPTABLE(STO_A,	LDO_E,	0,		OP_SUB),
	OPTABLE(STO_A,	LDO_IH,	0,		OP_SUB),
	OPTABLE(STO_A,	LDO_IL,	0,		OP_SUB),
	OPTABLE(STO_A,	LDO_M,	ADR_ID,	OP_SUB),
	OPTABLE(STO_A,	LDO_A,	0,		OP_SUB),
/* Z80 98 SBC 10011rrr */
	OPTABLE(STO_A,	LDO_B,	0,		OP_SBC),
	OPTABLE(STO_A,	LDO_C,	0,		OP_SBC),
	OPTABLE(STO_A,	LDO_D,	0,		OP_SBC),
	OPTABLE(STO_A,	LDO_E,	0,		OP_SBC),
	OPTABLE(STO_A,	LDO_IH,	0,		OP_SBC),
	OPTABLE(STO_A,	LDO_IL,	0,		OP_SBC),
	OPTABLE(STO_A,	LDO_M,	ADR_ID,	OP_SBC),
	OPTABLE(STO_A,	LDO_A,	0,		OP_SBC),
/* Z80 A0 AND 10100rrr */
	OPTABLE(STO_A,	LDO_B,	0,		OP_AND),
	OPTABLE(STO_A,	LDO_C,	0,		OP_AND),
	OPTABLE(STO_A,	LDO_D,	0,		OP_AND),
	OPTABLE(STO_A,	LDO_E,	0,		OP_AND),
	OPTABLE(STO_A,	LDO_IH,	0,		OP_AND),
	OPTABLE(STO_A,	LDO_IL,	0,		OP_AND),
	OPTABLE(STO_A,	LDO_M,	ADR_ID,	OP_AND),
	OPTABLE(STO_A,	LDO_A,	0,		OP_AND),
/* Z80 A8 XOR 10101rrr */
	OPTABLE(STO_A,	LDO_B,	0,		OP_XOR),
	OPTABLE(STO_A,	LDO_C,	0,		OP_XOR),
	OPTABLE(STO_A,	LDO_D,	0,		OP_XOR),
	OPTABLE(STO_A,	LDO_E,	0,		OP_XOR),
	OPTABLE(STO_A,	LDO_IH,	0,		OP_XOR),
	OPTABLE(STO_A,	LDO_IL,	0,		OP_XOR),
	OPTABLE(STO_A,	LDO_M,	ADR_ID,	OP_XOR),
	OPTABLE(STO_A,	LDO_A,	0,		OP_XOR),

/* Z80 B0 OR  10110rrr */
	OPTABLE(STO_A,	LDO_B,	0,		OP_OR),
	OPTABLE(STO_A,	LDO_C,	0,		OP_OR),
	OPTABLE(STO_A,	LDO_D,	0,		OP_OR),
	OPTABLE(STO_A,	LDO_E,	0,		OP_OR),
	OPTABLE(STO_A,	LDO_IH,	0,		OP_OR),
	OPTABLE(STO_A,	LDO_IL,	0,		OP_OR),
	OPTABLE(STO_A,	LDO_M,	ADR_ID,	OP_OR),
	OPTABLE(STO_A,	LDO_A,	0,		OP_OR),
/* Z80 B8 CP  10111rrr */
	OPTABLE(0,		LDO_B,	0,		OP_CP),
	OPTABLE(0,		LDO_C,	0,		OP_CP),
	OPTABLE(0,		LDO_D,	0,		OP_CP),
	OPTABLE(0,		LDO_E,	0,		OP_CP),
	OPTABLE(0,		LDO_IH,	0,		OP_CP),
	OPTABLE(0,		LDO_IL,	0,		OP_CP),
	OPTABLE(0,		LDO_M,	ADR_ID,	OP_CP),
	OPTABLE(0,		LDO_A,	0,		OP_CP),

/* Z80 C0-FF  11?????? */
/* Z80 C0-C7  11000??? */
	OPTABLE(0,		0,		0,		OP_RETCC),
	OPTABLE(STO_BC,	LDO_ST,	0,		OP_POP),
	OPTABLE(0,		LDO_NN,	0,		OP_JPCC),
	OPTABLE(0,		LDO_NN,	0,		OP_JP),
	OPTABLE(0,		LDO_NN,	0,		OP_CALLCC),
	OPTABLE(STO_ST,	LDO_BC,	0,		OP_PUSH),
	OPTABLE(STO_A,	LDO_N,	0,		OP_ADD),
	OPTABLE(0,		0,		0,		OP_RST),
/* Z80 C8-CF  11001??? */
	OPTABLE(0,		0,		0,		OP_RETCC),
	OPTABLE(0,		LDO_ST,	0,		OP_RET),
	OPTABLE(0,		LDO_NN,	0,		OP_JPCC),
	OPTABLE(0,		0,		0,		OP_PREFIX_CB),
	OPTABLE(0,		LDO_NN,	0,		OP_CALLCC),
	OPTABLE(0,		LDO_NN,	0,		OP_CALL),
	OPTABLE(STO_A,	LDO_N,	0,		OP_ADC),
	OPTABLE(0,		0,		0,		OP_RST),
/* Z80 D0-D7  11010??? */
	OPTABLE(0,		0,		0,		OP_RETCC),
	OPTABLE(STO_DE,	LDO_ST,	0,		OP_POP),
	OPTABLE(0,		LDO_NN,	0,		OP_JPCC),
	OPTABLE(0,		LDO_A,	ADR_AN,	OP_OUT),
	OPTABLE(0,		LDO_NN,	0,		OP_CALLCC),
	OPTABLE(STO_ST,	LDO_DE,	0,		OP_PUSH),
	OPTABLE(STO_A,	LDO_N,	0,		OP_SUB),
	OPTABLE(0,		0,		0,		OP_RST),
/* Z80 D8-DF  11011??? */
	OPTABLE(0,		0,		0,		OP_RETCC),
	OPTABLE(0,		0,		0,		OP_EXX),
	OPTABLE(0,		LDO_NN,	0,		OP_JPCC),
	OPTABLE(STO_A,	0,		ADR_AN,	OP_IN),
	OPTABLE(0,		LDO_NN,	0,		OP_CALLCC),
	OPTABLE(0,		0,		0,		OP_PREFIX_DD),
	OPTABLE(STO_A,	LDO_N,	0,		OP_SBC),
	OPTABLE(0,		0,		0,		OP_RST),
/* Z80 E0-E7  11010??? */
	OPTABLE(0,		0,		0,		OP_RETCX),
	OPTABLE(STO_IX,	LDO_ST,	0,		OP_POP),
	OPTABLE(0,		LDO_NN,	0,		OP_JPCX),
	OPTABLE(STO_IX,	LDO_IX,	0,		OP_EX_MSP16_HL_),
	OPTABLE(0,		LDO_NN,	0,		OP_CALLCX),
	OPTABLE(STO_ST,	LDO_IX,	0,		OP_PUSH),
	OPTABLE(STO_A,	LDO_N,	0,		OP_AND),
	OPTABLE(0,		0,		0,		OP_RST),
/* Z80 E8-EF  11011??? */
	OPTABLE(0,		0,		0,		OP_RETCX),
	OPTABLE(0,		LDO_IX,	0,		OP_JP),
	OPTABLE(0,		LDO_NN,	0,		OP_JPCX),
	OPTABLE(0,		LDO_DE,	0,		OP_EX_DE_HL),
	OPTABLE(0,		LDO_NN,	0,		OP_CALLCX),
	OPTABLE(0,		0,		0,		OP_PREFIX_ED),
	OPTABLE(STO_A,	LDO_N,	0,		OP_XOR),
	OPTABLE(0,		0,		0,		OP_RST),
/* Z80 F0-F7  11110??? */
	OPTABLE(0,		0,		0,		OP_RETCX),
	OPTABLE(STO_AF,	LDO_ST,	0,		OP_POP),
	OPTABLE(0,		LDO_NN,	0,		OP_JPCX),
	OPTABLE(0,		0,		0,		OP_DI),
	OPTABLE(0,		LDO_NN,	0,		OP_CALLCX),
	OPTABLE(STO_ST,	LDO_AF,	0,		OP_PUSH),
	OPTABLE(STO_A,	LDO_N,	0,		OP_OR),
	OPTABLE(0,		0,		0,		OP_RST),
/* Z80 F8-FF  11111??? */
	OPTABLE(0,		0,		0,		OP_RETCX),
	OPTABLE(STO_SP,	LDO_IX,	0,		OP_LD),
	OPTABLE(0,		LDO_NN,	0,		OP_JPCX),
	OPTABLE(0,		0,		0,		OP_EI),
	OPTABLE(0,		LDO_NN,	0,		OP_CALLCX),
	OPTABLE(0,		0,		0,		OP_PREFIX_FD),
	OPTABLE(0,		LDO_N,	0,		OP_CP),
	OPTABLE(0,		0,		0,		OP_RST),
};

const Uint8 kmz80_ot_cbxx[0x20] = {
	OP_RLC, OP_RRC, OP_RL,  OP_RR,  OP_SLA, OP_SRA, OP_SLL, OP_SRL,
	OP_BIT, OP_BIT, OP_BIT, OP_BIT, OP_BIT, OP_BIT, OP_BIT, OP_BIT,
	OP_RES, OP_RES, OP_RES, OP_RES, OP_RES, OP_RES, OP_RES, OP_RES,
	OP_SET, OP_SET, OP_SET, OP_SET, OP_SET, OP_SET, OP_SET, OP_SET,
};
