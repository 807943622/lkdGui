/**
  * @file   lkdGuiPublic.c
  * @author  guoweilkd
  * @version V1.1.0
  * @date    2018/05/30
  * @brief  lkdGui����������
  */

#include "lkdGuiPublic.h"

/* lkdȫ�ִ������ */
uint32_t lkdErrorCode;

/**
  *@brief  ȫ�ִ��������¼
  *@param  fileCode �ļ�����
  *@param  funCode ��������
  *@param  errorCode �������
  *@retval None
  */
void SetlkdErrorCode(uint8_t fileCode,uint16_t funCode, uint8_t errorCode)
{
	lkdErrorCode = (fileCode << 24) + (funCode << 8) + (errorCode);
}

/**
  *@brief  ��ȡȫ�ִ��������¼
  *@param  None
  *@retval None
  */
uint32_t GetlkdErrorCode(void)
{
	return lkdErrorCode;
}

/* END */
