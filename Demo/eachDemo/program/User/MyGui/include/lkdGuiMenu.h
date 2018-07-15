/**
  * @file   lkdGuiMenu.h
  * @author  guoweilkd
  * @version V1.1.0
  * @date    2018/06/30
  * @brief  lkdGui�˵��ļ�
  */
#ifndef __LKDGUIMENU_H
#define	__LKDGUIMENU_H

#include "lkdGuiBasic.h"

/* lkd�˵��ڵ㶨�� */
typedef struct lkdMenuNode{
	uint16_t nodeId;/* �ڵ�� */
	int8_t	*name;/* �ڵ����� */
	struct lkdMenuNode *pBro;/* ��һ���ֵܽڵ�� */
	struct lkdMenuNode *pSon;/* �ӽڵ�� */
	void *user;
}lkdMenuNode;

/* lkd�˵�ջ�ṹ���� */
typedef struct {
	uint8_t	index;
	lkdCoord cy;
	lkdMenuNode *pNode;
}MenuStack;

/* lkd�˵��ṹ���� */
typedef struct{
	lkdCoord x;/* �˵���ʼ���� */
	lkdCoord y;
	uint16_t wide;
	uint16_t hight;
	uint8_t ItemsWide;/* �˵���� */
	uint8_t Itemshigh;/* �˵���� */
	uint8_t index;		/* �˵���ǰitem */
	uint8_t count;		/* �˵��������� */
	uint8_t stackNum;	/* �˵�ջ��С ��MenuStackΪ��λ */
	MenuStack *stack;	/* �˵�ջ */
	lkdMenuNode *Root;/* �˵����ڵ� */
	void (* MenuDealWithFun)(void);/* �˵������� */
	
	/* ��ǰ�ڵ�滭��ʱ���� */
	lkdCoord cx;/* ��ʼ���� */
	lkdCoord cy;
	lkdMenuNode *pDraw;/* �滭�ڵ� */
	uint8_t nodeNum;/* ��ǰ���ڵ��µĽڵ��� */
	uint8_t cNum;/* Ҫ�滭�Ľڵ��� */
}lkdMenu;

/* �˵��ֵܽڵ���� */
void GuiMenuBroNodeInsert(lkdMenuNode *bNode, lkdMenuNode *pNode);
/* �˵��ӽڵ���� */
void GuiMenuSonNodeInsert(lkdMenuNode *fNode, lkdMenuNode *pNode);
/* �˵��ڵ�ɾ�� */
uint8_t GuiMenuNodeDelete(lkdMenuNode *fbNode, lkdMenuNode *thisNode);

/* �˵���ʼ�� */
void GuiMenuInit(lkdMenu *pM);
/* �˵�ѡ�нڵ������ƶ� */
void GuiMenuItemDownMove(lkdMenu *pM);
/* �˵�ѡ�нڵ������ƶ� */
void GuiMenuItemUpMove(lkdMenu *pM);
/* �˵���ǰ�ڵ�չ�� */
uint8_t GuiMenuCurrentNodeSonUnfold(lkdMenu *pM);
/* �˵���ǰ�ڵ����� */
uint8_t GuiMenuCurrentNodeHide(lkdMenu *pM);
/* �˵��ػ� */
void GuiMenuRedrawMenu(lkdMenu *pM);
/* ��ȡ��ǰѡ�еĽڵ� */
lkdMenuNode *GuiMenuGetCurrentpNode(lkdMenu *pM);

#endif /* __LKDGUIMENU_H */

/* END */
