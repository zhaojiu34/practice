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
	int capacity;//�ռ�����
	int size;//��Ч����
}SL;

//��ʼ��
void SLInit(SL* ps);
//����
void SLDestory(SL* ps);


//��ӡ˳���
void SLPrint(SL* ps);//���ڴ�ӡ��˵��Ҳ����ֱ�Ӵ�ֵ��ӡ������Ϊ�˱�֤�ӿ�һ���ԣ�ͳһ����ַ

//����
void SLCheckCapacity(SL* ps);

//β������
void SLPushBack(SL* ps,SLDatatype x);
//ͷ������
void SLPushFront(SL* ps, SLDatatype x);
//βɾ
void SLPopBack(SL* ps);
//ͷɾ
void SLPopFront(SL* ps);

//ָ��λ��֮ǰ����ɾ��
void SLInsert(SL* ps,int pos,SLDatatype x);
void SLErase(SL* ps,int pos);

//����
int  SLFind(SL* ps,SLDatatype x);

