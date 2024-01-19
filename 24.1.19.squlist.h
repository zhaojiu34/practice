#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define N 100

typedef int SLDatatype;

typedef struct SeqList
{
	SLDatatype * arr;
	int capacity;//空间容量
	int size;//有效数据
}SL;

//初始化
void SLInit(SL* ps);
//销毁
void SLDestory(SL* ps);


//打印顺序表
void SLPrint(SL* ps);//对于打印来说，也可以直接传值打印，但是为了保证接口一致性，统一传地址

//扩容
void SLCheckCapacity(SL* ps);

//尾部插入
void SLPushBack(SL* ps,SLDatatype x);
//头部插入
void SLPushFront(SL* ps, SLDatatype x);
//尾删
void SLPopBack(SL* ps);
//头删
void SLPopFront(SL* ps);

//指定位置之前插入删除
void SLInsert(SL* ps,int pos,SLDatatype x);
void SLErase(SL* ps,int pos);

//查找
int  SLFind(SL* ps,SLDatatype x);

