#define _CRT_SECURE_NO_WARNINGS 1
#include "24.1.19.squlist.h"

//初始化
void SLInit(SL* ps)
{
	assert(ps);
	ps->arr = NULL;
	ps->capacity = ps->size = 0;
}

//打印顺序表
void SLPrint(SL* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}
//扩容
void SLCheckCapacity(SL* ps)
{
	assert(ps);
	if (ps->capacity == ps->size)
	{
		int newCapacity = ps->capacity== 0 ? 4 : (2 * ps->capacity);
		SLDatatype* tmp = (SLDatatype*)realloc(ps->arr, newCapacity * sizeof(SLDatatype));
		if (tmp == NULL)
		{
			perror("realloc fail!");
			return 1;
		}
		ps->arr = tmp;
		ps->capacity = newCapacity;
	}
}

//尾部插入
void SLPushBack(SL* ps,SLDatatype x)
{
	assert(ps);
	//空间不够
	//扩容
	SLCheckCapacity(ps);
	//容量足够
	ps->arr[ps->size] = x;
	ps->size++;
}
//头部插入
void SLPushFront(SL* ps, SLDatatype x)
{
	assert(ps);
	//空间不够
	SLCheckCapacity(ps);
	//容量足够
	int i = 0;
	for (i = ps->size; i > 0; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[0] = x;
	ps->size++;
}
//尾删
void SLPopBack(SL* ps)
{
	assert(ps);
	assert(ps->size);
	ps->size--; 
}

//头删
void SLPopFront(SL* ps)
{
	assert(ps);
	assert(ps->size);
	for (int i = 0; i < ps->size - 1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

//指定位置之前插入删除
void SLInsert(SL* ps, int pos, SLDatatype x)
{
	assert(ps);
	//pos也有范围
	assert(pos >= 0 && pos <= ps->size);
	//看空间够不够
	SLCheckCapacity(ps);
	int i = 0;
	for (i = ps->size; i > pos; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[pos] = x;
	ps->size++;
}
void SLErase(SL* ps, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	int i = 0;
	for (i = pos; i < ps->size-1; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

//查找
int  SLFind(SL* ps, SLDatatype x)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->arr[i] == x)
		{
			printf("找到了，在下标为%d的位置\n", i);
			return 1;
		}
	}
	printf("未找到\n");
	return 0;
}

//销毁
void SLDestory(SL* ps)
{
	assert(ps);
	assert(ps->size);
	//动态开辟的空间在结束时要free
	free(ps->arr);
	ps->arr = NULL;
	ps->capacity = ps->size = 0;
	
}





