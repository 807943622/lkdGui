/**
  * @file   lkdGuiBasic.h
  * @author  guoweilkd
  * @version V1.1.0
  * @date    2018/03/19
  * @brief
  */

#ifndef __LKDGUIBASIC_H
#define	__LKDGUIBASIC_H

#include "lkdGuiDriver.h"

#ifndef NULL
#define NULL 0
#endif


/* ����λͼ�ṹ�� */
typedef struct{
	uint8_t *bitmap;/* λͼ���� */
	uint16_t wide;/* λͼ�� */
	uint16_t high;/* λͼ�� */
	uint16_t beginx;/* λͼ��ʼ���� */
	uint16_t beginy;/* λͼ��ʼ���� */
}lkdBitmap;

/* ���� */
void GuiPoint(lkdCoord x, lkdCoord y, lkdColour color);
/* ��б�� */
void GuiBiasLine(lkdCoord x0, lkdCoord y0,lkdCoord x1, lkdCoord y1, lkdColour color);
/* ��ˮƽ�� */
void GuiHLine(lkdCoord x0, lkdCoord y0, lkdCoord x1, lkdColour color);
/* ����ֱ�� */
void GuiRLine(lkdCoord x0, lkdCoord y0, lkdCoord y1, lkdColour color);
/* ��ˮƽ���� */
void GuiHPointLine(lkdCoord x0, lkdCoord y0, lkdCoord x1, uint8_t interval, lkdColour color);
/* ����ֱ���� */
void GuiRPointLine(lkdCoord x0, lkdCoord y0, lkdCoord y1, uint8_t interval, lkdColour color);
/* ������ */
void GuiRect(lkdCoord x0, lkdCoord y0, lkdCoord x1,lkdCoord y1, lkdColour color);
/* �������� */
void GuiFillRect(lkdCoord x0, lkdCoord y0, lkdCoord x1,lkdCoord y1, lkdColour color);
/* ��λͼ */
void GuiBitMap(uint8_t *bitMap,lkdCoord x0, lkdCoord y0,uint32_t xlen,uint32_t ylen,uint8_t flag);
/* ���Զ���λͼ */
void GuiAreaBitMap(lkdBitmap *bitMap,lkdCoord x0, lkdCoord y0, lkdCoord endx, lkdCoord endy, uint8_t flag);


#endif /* __LKDGUIBASIC_H */

/* END */
