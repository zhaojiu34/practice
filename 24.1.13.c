#define _CRT_SECURE_NO_WARNINGS 1

//struct Stu
//{
//	int age;
//	char name[20];
//}s1;
//int main()
//{
//	//˳���ʼ��
//	struct Stu s2 = { 10,"zhangsan" };
//	printf("%d\n%s\n", s2.age, s2.name);
//	//ָ��˳���ʼ��
//	struct Stu s3 = { .name = "lisi",.age = 20 };
//	printf("%d\n%s\n", s3.age, s3.name);
//	return 0;
//}

//struct
//{
//	int a;
//	int b;
//	int c;
//}x;
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20],*p;
//typedef struct
//{
//	int a;
//	int b;
//	int c;
//}S;

//typedef struct S
//{
//	int a;
//	int b;
//	int c;
//}s1;
//int main()
//{
//	struct S s = { 10,20,30 };
//	struct S s2;
//
//
//	return 0;
//}

//struct S1
//{
//    char c1;
//    int i;
//    char c2;
//};

//struct S
//{
//    double d;
//    char c;
//    int i;
//};
//struct S1
//{
//    char c1;
//    struct S s1;
//    double d;
//};
//int main()
//{
//    //printf("%d\n", sizeof(struct S1));
//    printf("%d\n%d", sizeof(struct S), sizeof(struct S1));
//    return 0;
//}

//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//struct S3
//{
//	int i;
//	char c1;
//	char c2;
//};
//int main()
//{
//	printf("S1�Ĵ�С��%d\n", sizeof(struct S1));
//	printf("S2�Ĵ�С��%d\n", sizeof(struct S2));
//	printf("S3�Ĵ�С��%d\n", sizeof(struct S3));
//	return 0;
//
//}

//#pragma pack(1)
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//#pragma pack()//ȡ�����õĶ�����
//int main()
//{
//	printf("%d", sizeof(struct S));
//}

//#include <stdio.h>
//struct S
//{
//	int data[1000];
//	int num;
//};
//struct S s = { {1},10 };
//void print1(struct S s1)
//{
//	printf("%d\n", s.num);
//}
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s);
//	print2(&s);
//	return 0;
//}

//struct A
//{
//    int _a : 2;
//    int _b : 5;
//    int _c : 10;
//    int _d : 30;
//};
//int main()
//{
//    printf("%d", sizeof(struct A));
//    return 0;
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//}

//struct A
//{
//    int _a : 2;
//    int _b : 5;
//    int _c : 10;
//    int _d : 30;
//};
//int main()
//{
//    struct A s = { 0 };
//    //scanf("%d", &s.b);//error
//    //��ȷ����
//    int b = 0;
//    scanf("%d", &b);
//    s.b = b;
//    return 0;
//}

#include <stdio.h>
////�����������
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u = { 0 };
//	printf("%d", sizeof(u));
//}


//int main()
//{
//	union Un u = { 0 };
//	printf("%p\n", &u.c);
//	printf("%p\n", &u.i);
//	printf("%p\n", &u);
//	return 0;
//}

//union Un
//{
//	int i;
//	char c;
//};
//struct S
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u = { 0 };
//	u.i = 0x11223344;
//	u.c = 0x55;
//	printf("%#x", u.i);
//}

//union Un1
//{
//	char c[5];
//	int i;
//};
//union Un2
//{
//	short c[7];
//	int i;
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un1));
//	printf("%d\n", sizeof(union Un2));
//	return 0;
//}

//struct S
//{
//	//��������
//	int stock_number;//�����
//	double price;//����
//	int tem_type;//��Ʒ����
//
//	//��������
//	char title[20];//����
//	char author[20];//����
//	int num_page;//ҳ��
//
//	char design[30];//���
//	int colors;//��ɫ
//	int sizes;//�ߴ�
//};

//struct gift_list
//{
//	int stock_number;//�����
//	double price;//����
//	int tem_type;//��Ʒ����
//	union
//	{
//		struct
//		{
//			char title[20];//����
//			char author[20];//����
//			int num_page;//ҳ��
//		}book;
//		struct
//		{
//			char design[30];//���
//		}mug;
//		struct
//		{
//			char design[30];//���
//			int colors;//��ɫ
//			int sizes;//�ߴ�
//		}shirt;
//	}item;
//	
//};

//union Un
//{
//	int i;
//	char c;
//};
//int main()
//{
//	union Un u = { 0 };
//	u.i = 1;
//	if (u.c == 1)
//		printf("��С��\n");
//	else
//		printf("�Ǵ��\n");
//	return 0;
//}

//enum Day
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//enum Color
//{
//	RED=2,
//	GREEN=4,
//	BLUE=8
//};
//enum Color clr = GREEN;


//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = i;
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int arr[num] = { 0 };
//	int* ptr = (int*)malloc(sizeof(int) * num);
//	if (ptr != NULL)
//	{
//		int i = 0;
//		for (i = 0; i < num; i++)
//		{
//			*(ptr + i) = 0;
//		}
//	}
//	free(ptr);//��ptrָ��Ŀռ仹������ϵͳ
//	ptr = NULL;//����ptr���Ǽ�ס�����ַ�������ʱ����������ַ���ǷǷ����ʣ�ptr����Ұָ��
//	return 0;
// }


//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p != NULL)
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* p = (int*)malloc(40);
	if (p != NULL)
	{
		//ҵ����
	}
	else
	{
		return 1;//���ִ����return����Ĵ��뽫����ִ��
	}

	//p = (int*)relloc(p, 10000);//����ֱ��д���������ʧ�ܣ���ԭ���ĵ�ַҲ�Ҳ�����
	
	//��ȷд��
	int* ptr = NULL;
	ptr = (int*)relloc(p, 10000);
	if (ptr != NULL)
	{
		//ҵ����
	}
	free(p);
	free(ptr);
	p = NULL;
	ptr = NULL;
	return 0;
}

//void test()
//{
//	int i = 0;
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;//��i=10ʱ������Խ�������
//	}
//}

//void test()
//{
//	int* p = (int*)malloc(40);
//	if (p != NULL)
//	{
//		return 1;
//	}
//	free(p);
//	p = NULL;
//	//���p�ǿ�ָ�룬����ֱ�Ӿͽ�����������free���ɿ�ռ��һֱ��ռ����
//}
//int main()
//{
//	test();
//	while (1);
//	//����һֱʱ��ѭ�������û��free�����ͷţ����ռ�ͻ�һֱ��ռ�ã������ڴ�й¶
//	//�����ᵼ���ڴ�Խ��ԽС������Ч���½�
//}

//typedef struct st_type
//{
//	int i;
//	int a[0];
//}type_a;
//int main()
//{
//	printf("%d", sizeof(type_a));
//	return 0;
//}


//typedef struct st_type
//{
//	int i;
//	int a[0];
//}type_a;
//int main()
//{
//	int i = 0;
//	type_a* p = (type_a*)malloc(sizeof(type_a) + 100 * sizeof(int));
//	p->i = 100;
//	for (i = 0; i < 100; i++)
//	{
//		p->a[i] = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//typedef struct st_type
//{
//	int i;
//	int* p_a;
//}type_a;
//int main()
//{
//	type_a* p = (type_a*)malloc(sizeof(type_a));
//	p->i = 100;
//	p->p_a = (int*)malloc(p->i * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		p->p_a[i] = i;
//	}
//	free(p->p_a);
//	p->p_a = NULL;
//	free(p);
//	p = NULL;
//	return 0;
//}