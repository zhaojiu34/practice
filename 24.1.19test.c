#define _CRT_SECURE_NO_WARNINGS 1
#include "24.1.19.squlist.h"

void sltest1()
{
	SL sl;
	SLInit(&sl);

	//����β��
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 6);
	SLPrint(&sl);

	////����ͷ��
	//SLPushFront(&sl, 5);
	//SLPushFront(&sl, 6);
	//SLPushFront(&sl, 7);
	//SLPushFront(&sl, 8);
	//SLPrint(&sl);
	////
	////��βɾ
	//SLPopBack(&sl);
	//SLPopBack(&sl);
	//SLPopBack(&sl);
	//SLPrint(&sl);
	//
	//��ͷɾ
	//SLPopFront(&sl);
	//SLPopFront(&sl);
	//SLPopFront(&sl);
	//SLPrint(&sl);
	//
	////����ָ��λ�ò���
	//SLInsert(&sl, 1, 2);
	//SLInsert(&sl, 0, 2);
	//SLInsert(&sl, 2, 2);
	//SLPrint(&sl);
	//
	////����ָ��λ��ɾ��
	//SLErase(&sl, 1);
	//SLErase(&sl, 2);
	//SLPrint(&sl);
	////
	////���Բ���
	//SLFind(&sl, 1);
	//SLFind(&sl, 2);
	//SLFind(&sl, 5);
	//SLFind(&sl, 6);
	//SLFind(&sl, 10);

	SLDestory(&sl);
	SLPrint(&sl);

}
int main()
{
	sltest1();
	return 0;
}