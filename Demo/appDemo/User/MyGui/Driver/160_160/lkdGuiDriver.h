/**
  * @file   lkdGuiDriver.h
  * @author  guoweilkd
  * @version V0.0.0
  * @date    2018/04/18
  * @brief  lkdGui����
  */

#ifndef __LKDGUIDRIVER_H
#define	__LKDGUIDRIVER_H

#include "lkdGuiColour.h"

/* ������������ */
typedef int32_t lkdCoord;

/* ������y ������ x */
#define  GUI_LCM_XMAX	160
#define  GUI_LCM_YMAX	160
#define  GUIXMAX	GUI_LCM_XMAX
#define  GUIYMAX	GUI_LCM_YMAX

/* ���� */
void GuiUpdateDisplayAll(void);
/* ����ָ����Χ */
void GuiRangeUpdateDisplay(lkdCoord beginx, lkdCoord beginy,lkdCoord endx, lkdCoord endy);
/* ���� */
void GuiDrawPoint(lkdCoord x, lkdCoord y, lkdColour color);
/* ���� */
void  GuiReadPoint(lkdCoord x, lkdCoord y, lkdColour *pColor);

#endif /* __LKDGUIDRIVER_H */

/* END */
