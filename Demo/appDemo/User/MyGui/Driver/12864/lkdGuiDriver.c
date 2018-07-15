/**
  * @file   lkdGuiDriver.c
  * @author  guoweilkd
  * @version V0.0.0
  * @date    2018/04/18
  * @brief  lkdGui����
  */

#include "lkdGuiDriver.h"
/* lcd�����ļ����� */
#include "LM6029ADriver.h"

/* Gui��ʾ������ */
static uint8_t  lkdGuiBuff[GUIXMAX][GUIYMAX/8 + GUIYMAX%8];
/* ��λ��ȡ���� */
const static uint8_t colBit[] = {0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};

/**
  *@brief ��Gui������������ʾ��lcd��
  *@param  None
  *@retval None
  */
void GuiUpdateDisplayAll(void)
{
	uint32_t x,y,ymax;
	LCD_CS_LOW();
	ymax = GUI_LCM_YMAX/8 + GUI_LCM_YMAX%8;
	for(y = 0; y < ymax; y++){
		SetLcdCol(0);
		SetLcdPage(y);	
		for(x = 0;x < GUI_LCM_XMAX; x++){
			WriteLcdData(lkdGuiBuff[x][y]);
		}	
	}
	LCD_CS_HIGH();
}

/**
  *@brief ����
  *@param  x,y ����
  *@param  color ��ɫ <Ŀǰֻ�кڰ�>
  *@retval None
  */
void GuiDrawPoint(lkdCoord x, lkdCoord y, lkdColour color)
{
	if(color == CWHITLE){//��ɫ
		lkdGuiBuff[x][y >> 3] &= ~colBit[y & 0x07];
	}
	else{//��ɫ
		lkdGuiBuff[x][y >> 3] |= colBit[y & 0x07];
	}
}

/**
  *@brief ����
  *@param  x,y ����
  *@param  color ��ɫ <Ŀǰֻ�кڰ�>
  *@retval None
  */
void  GuiReadPoint(lkdCoord x, lkdCoord y, lkdColour *pColor)
{
	
}
