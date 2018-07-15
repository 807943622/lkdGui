/**
  * @file   lkdmyFont.c
  * @author  guoweilkd
  * @version V1.1.0
  * @date    2018/06/07
  * @brief  lkd�����
  */

#include "lkdmyFont.h"
#include "lkdGuiFont.h"
#include "GT21L16S2W.h"
#include "zikuSpi.h"

/* lkdĬ������ */
lkdFont defaultFont;

/**
  *@brief ��ȡ������ģ
  *@param  code1,code2 ���ֱ��� �� ��
  *@param  pBuff ��ģbuff
  *@retval 0
  */
static uint8_t f12GetDataD(uint8_t code1, uint8_t code2,uint8_t *pBuff)
{
	gt_12_GetData(code1,code2,pBuff);
	return 0;
}

/**
  *@brief ��ȡASCII��ģ
  *@param  code1, ���� 
  *@param  pBuff ��ģbuff
  *@retval 0
  */
static uint8_t f12GetDataS(uint8_t code1,uint8_t *pBuff)
{
	ASCII_GetData(code1,ASCII_6X12,pBuff);
	return 0;
}

/**
  *@brief �����ʼ��
  *@param  None
  *@retval None
  */
void defaultFontInit(void)
{
	static uint8_t f12Buff[24];
	
	ZiKuInit();
	
	defaultFont.name = "lkdTestFont";
	defaultFont.dhigh = 12;
	defaultFont.dwide = 12;
	defaultFont.pZmBuff = f12Buff;
	defaultFont.shigh = 12;
	defaultFont.swide = 6;
	defaultFont.getDfont = f12GetDataD;
	defaultFont.getSfont = f12GetDataS;
	GuiFontSet(&defaultFont);
}

/* END */
