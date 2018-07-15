

/* ϵͳͷ�ļ� */
#include "stm32f10x.h"
#include "systemconfig.h"

/* lkdGui��������ļ� */
#include "UC1698Driver.h"
#include "lkdmyFont.h"

/* lkdGui���ļ� */
#include "lkdGuiBasic.h"
#include "lkdGuiFont.h"
#include "lkdGuiWin.h"
#include "lkdGuiControl.h"
#include "lkdGuiMenu.h"
#include "menutest.h"
#include "keyDriver.h"

int main(void)
{
	SystemconfigInit();
	
	LcdInit();/* lcd��ʼ�� */
	defaultFontInit();/* �ֿ��ʼ�� */
	GuiUpdateDisplayAll();/* ������Ļ-���� */
	userAppInit();
	KeyDriverInit();
	while(1)
	{
		userAppMain();
		ScanKeyStatus();
	}
}


/* END */
