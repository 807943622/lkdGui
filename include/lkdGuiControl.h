/**
  * @file   lkdGuiControl.h
  * @author  guoweilkd
  * @version V1.1.0
  * @date    2018/06/03
  * @brief  lkdGui�ؼ���
  */

#ifndef __LKDGUICONTROL_H
#define	__LKDGUICONTROL_H

#include "lkdGuiBasic.h"

/* ������ */
typedef struct{
	int16_t x;
	int16_t y;
	uint16_t hight;
	int16_t max;
	int16_t lump;
}lkdScroll;

/* ��ť */
typedef struct{
	lkdCoord x;		/* ���� */
	lkdCoord y;
	uint8_t wide;
	uint8_t high;
	uint8_t flag; /* 0 ̧��״̬ 1 ����״̬ */
	uint8_t *name;/* �������� */
}lkdButton;
enum ButtonState{
	BUTTON_UP,
	BUTTON_DOWN,
};

/* ������ */
typedef struct{
	lkdCoord x;		/* ���� */
	lkdCoord y;
	uint8_t wide;
	uint8_t high;
	uint8_t ratio; /* ��ǰ���� 0~100 */
}lkdProgress;

/* ��ֱ������ */
void GuiVScroll(lkdScroll *pScroll);
/* ˮƽ������ */
void GuiHScroll(lkdScroll *pScroll);
/* ��ť */
void GuiButton(lkdButton *pButton);
/* ������ */
void GuiProGress(lkdProgress *pProg);

#endif /* __LKDGUICONTROL_H */

/* END */
