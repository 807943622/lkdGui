/**
  * @file   lkdGuiWin.c
  * @author  guoweilkd
  * @version V0.0.0
  * @date    2018/06/03
  * @brief  lkdGui���ڹ���
  */

#include "lkdGuiWin.h"
#include "lkdGuiFont.h"

/* ���ڹ���ṹ */
struct GuiWinManage winManage;

/**
  *@brief  ���ƴ���
  *@param  pWindow ����ָ��
  *@retval None
  */
void GuiWinDraw(lkdWin *pWindow)
{
	if(pWindow->x + pWindow->wide - 1 > GUIXMAX || pWindow->y + pWindow->hight - 1 > GUIYMAX ||\
		 pWindow->x < 0 || pWindow->y < 0 || pWindow->wide == 0 || pWindow->hight == 0){
		   return;
	}
	GuiFillRect(pWindow->x, pWindow->y, pWindow->x + pWindow->wide - 1,\
		pWindow->y + pWindow->hight - 1, backcolor);
	GuiRect(pWindow->x, pWindow->y, pWindow->x + pWindow->wide - 1,\
		pWindow->y + pWindow->hight - 1, forecolor);
	if(pWindow->title != NULL){
		GuiHLine(pWindow->x, pWindow->y + 15,pWindow->x + pWindow->wide - 1, forecolor);
		GuiRowText(pWindow->x + 2, pWindow->y + 2, pWindow->wide - 4,\
			FONT_MID,pWindow->title);
	}
	GuiUpdateDisplayAll();
}

/**
  *@brief  ��Ӵ���
  *@param  pWindow ����ָ��
  *@retval 0 �ɹ� -1 ʧ��
  */
int8_t GuiWinAdd(lkdWin *pWindow)
{
	GuiWinDraw(pWindow);
	if(winManage.pWin >= GUIWINMANAGE_NUM){
		return -1;
	}
	winManage.winStack[winManage.pWin] = pWindow;
	winManage.pWin ++;
	return 0;
}

/**
  *@brief  ִ�ж��㴰��
  *@param  None
  *@retval None
  */
void GuiWinDisplay(void)
{
	if(winManage.pWin == 0 || winManage.pWin > GUIWINMANAGE_NUM){
		return;
	}
	winManage.winStack[winManage.pWin - 1]->WindowFunction();
}

/**
  *@brief  ɾ����ǰ����
  *@param  None
  *@retval None
  */
void GuiWinDeleteTop(void)
{
	if(winManage.pWin <= 1 || winManage.pWin > GUIWINMANAGE_NUM){
		return;
	}
	winManage.pWin --;
	GuiWinDraw(winManage.winStack[winManage.pWin - 1]);
}
