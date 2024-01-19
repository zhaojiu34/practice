#define _CRT_SECURE_NO_WARNINGS 1
#include "24.1.19.squlist.h"

void sltest1()
{
	SL sl;
	SLInit(&sl);

	//≤‚ ‘Œ≤≤Â
	SLPushBack(&sl, 1);
	SLPushBack(&sl, 2);
	SLPushBack(&sl, 3);
	SLPushBack(&sl, 4);
	SLPushBack(&sl, 5);
	SLPushBack(&sl, 6);
	SLPrint(&sl);

	////≤‚ ‘Õ∑≤Â
	//SLPushFront(&sl, 5);
	//SLPushFront(&sl, 6);
	//SLPushFront(&sl, 7);
	//SLPushFront(&sl, 8);
	//SLPrint(&sl);
	////
	////≤‚Œ≤…æ
	//SLPopBack(&sl);
	//SLPopBack(&sl);
	//SLPopBack(&sl);
	//SLPrint(&sl);
	//
	//≤‚Õ∑…æ
	//SLPopFront(&sl);
	//SLPopFront(&sl);
	//SLPopFront(&sl);
	//SLPrint(&sl);
	//
	////≤‚ ‘÷∏∂®Œª÷√≤Â»Î
	//SLInsert(&sl, 1, 2);
	//SLInsert(&sl, 0, 2);
	//SLInsert(&sl, 2, 2);
	//SLPrint(&sl);
	//
	////≤‚ ‘÷∏∂®Œª÷√…æ≥˝
	//SLErase(&sl, 1);
	//SLErase(&sl, 2);
	//SLPrint(&sl);
	////
	////≤‚ ‘≤È’“
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