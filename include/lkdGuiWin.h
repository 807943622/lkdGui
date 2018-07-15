/**
  * @file   lkdGuiWin.h
  * @author  guoweilkd
  * @version V0.0.0
  * @date    2018/06/03
  * @brief  lkdGui���ڹ���
  */

#ifndef __LKDGUIWIN_H
#define	__LKDGUIWIN_H

#include "lkdGuiBasic.h"

/* �������Ƕ������ */
#define GUIWINMANAGE_NUM 16

/* lkd���ڶ��� */
typedef struct{
	lkdCoord x;
	lkdCoord y;
	uint16_t wide;
	uint16_t hight;
	uint8_t   *title;// ���������ָ��(NULLΪ����ʾ)
	void(*WindowFunction)(void *param);// ���ڶ�Ӧ�ķ������
	void * param;//����
}lkdWin;

/* lkd���ڹ��� */
struct GuiWinManage{
	uint8_t pWin;
	lkdWin *winStack[GUIWINMANAGE_NUM];	
};

/* ��Ӵ��� */
int8_t GuiWinAdd(lkdWin *pWindow);
/* ��ʾ���� */
void GuiWinDisplay(void);
/* ɾ�����㴰�� */
void GuiWinDeleteTop(void);

#endif /* __LKDGUIWIN_H */

/* END */
