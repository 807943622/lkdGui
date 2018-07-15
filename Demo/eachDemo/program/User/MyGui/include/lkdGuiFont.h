/**
  * @file   lkdGuiFont.h
  * @author  guoweilkd
  * @version V1.1.0
  * @date    2018/03/27
  * @brief  gwGui�����ļ�
  */

#ifndef __LKDGUIFONT_H
#define	__LKDGUIFONT_H

#include "lkdGuiDriver.h"

typedef enum{
	FONT_LEFT,	/* ����� */
	FONT_MID,		/* ���� */
	FONT_RIGHT,	/* �Ҷ��� */
}FontFlag;

/* ����ṹ */
typedef struct{
	uint8_t *name;/* �������� */
	uint8_t swide;/* ASCIIȡģ�� */
	uint8_t shigh;/* ASCIIȡģ�� */
	uint8_t dwide;/* ����ȡģ�� */
	uint8_t dhigh;/* ����ȡģ�� */
	uint8_t *pZmBuff;/* ��ŵ�����ģbuff */
	/* ASCIIȡģ���� */
	uint8_t (*getSfont)(uint8_t code1, uint8_t *pBuff);
	/* ����ȡģ���� */
	uint8_t (*getDfont)(uint8_t code1, uint8_t code2,uint8_t *pBuff);
}lkdFont;

/* �ı���Ϣ */
typedef struct{
	lkdCoord x;/* ���� */
	lkdCoord y;
	uint16_t wide;
	uint16_t high;
	uint16_t beginOffset;
	uint8_t wInterval;/* ��ȼ�� */
	uint8_t hInterval;/* �߶ȼ�� */
	uint8_t flag;/* 0 ������ʾ 1���� */
}fontTextInfo;


/* ��ǰʹ������ָ�� */
extern lkdFont *thisFont;

/* ���õ�ǰ���� */
void GuiFontSet(lkdFont *pFont);
/* ��ȡ��ǰ���� */
lkdFont *GetCurrentFont(void);
/* д�ı� */
void GuiText(fontTextInfo *tInfo, uint8_t *str);
/* д�����ı� */
void GuiRowText(lkdCoord x, lkdCoord y,uint16_t wide, FontFlag flag,uint8_t *str);

#endif /* __LKDGUIFONT_H */

/* END */
