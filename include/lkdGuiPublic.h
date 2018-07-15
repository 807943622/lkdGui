/**
  * @file   lkdGuiPublic.h
  * @author  guoweilkd
  * @version V1.1.0
  * @date    2018/05/30
  * @brief  lkdGui����������
  */

#ifndef __LKDGUIPUBLIC_H
#define	__LKDGUIPUBLIC_H

#include "stdint.h"

/* ȫ�ִ��������¼ */
void SetlkdErrorCode(uint8_t fileCode,uint16_t funCode, uint8_t errorCode);
/* ��ȡȫ�ִ��������¼ */
uint32_t GetlkdErrorCode(void);

#endif /* __LKDGUIPUBLIC_H */

/* END */
