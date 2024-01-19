#define _CRT_SECURE_NO_WARNINGS 1
#include "24.1.19.squlist.h"

//��ʼ��
void SLInit(SL* ps)
{
	assert(ps);
	ps->arr = NULL;
	ps->capacity = ps->size = 0;
}

//��ӡ˳���
void SLPrint(SL* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}
//����
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

//β������
void SLPushBack(SL* ps,SLDatatype x)
{
	assert(ps);
	//�ռ䲻��
	//����
	SLCheckCapacity(ps);
	//�����㹻
	ps->arr[ps->size] = x;
	ps->size++;
}
//ͷ������
void SLPushFront(SL* ps, SLDatatype x)
{
	assert(ps);
	//�ռ䲻��
	SLCheckCapacity(ps);
	//�����㹻
	int i = 0;
	for (i = ps->size; i > 0; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[0] = x;
	ps->size++;
}
//βɾ
void SLPopBack(SL* ps)
{
	assert(ps);
	assert(ps->size);
	ps->size--; 
}

//ͷɾ
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

//ָ��λ��֮ǰ����ɾ��
void SLInsert(SL* ps, int pos, SLDatatype x)
{
	assert(ps);
	//posҲ�з�Χ
	assert(pos >= 0 && pos <= ps->size);
	//���ռ乻����
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

//����
int  SLFind(SL* ps, SLDatatype x)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->arr[i] == x)
		{
			printf("�ҵ��ˣ����±�Ϊ%d��λ��\n", i);
			return 1;
		}
	}
	printf("δ�ҵ�\n");
	return 0;
}

//����
void SLDestory(SL* ps)
{
	assert(ps);
	assert(ps->size);
	//��̬���ٵĿռ��ڽ���ʱҪfree
	free(ps->arr);
	ps->arr = NULL;
	ps->capacity = ps->size = 0;
	
}





