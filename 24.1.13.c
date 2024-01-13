#define _CRT_SECURE_NO_WARNINGS 1

//struct Stu
//{
//	int age;
//	char name[20];
//}s1;
//int main()
//{
//	//顺序初始化
//	struct Stu s2 = { 10,"zhangsan" };
//	printf("%d\n%s\n", s2.age, s2.name);
//	//指定顺序初始化
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
//	printf("S1的大小：%d\n", sizeof(struct S1));
//	printf("S2的大小：%d\n", sizeof(struct S2));
//	printf("S3的大小：%d\n", sizeof(struct S3));
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
//#pragma pack()//取消设置的对齐数
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
//    //正确做法
//    int b = 0;
//    scanf("%d", &b);
//    s.b = b;
//    return 0;
//}

#include <stdio.h>
////联合体的声明
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
//	//公共属性
//	int stock_number;//库存量
//	double price;//定价
//	int tem_type;//商品类型
//
//	//特殊属性
//	char title[20];//书名
//	char author[20];//作者
//	int num_page;//页数
//
//	char design[30];//设计
//	int colors;//颜色
//	int sizes;//尺寸
//};

//struct gift_list
//{
//	int stock_number;//库存量
//	double price;//定价
//	int tem_type;//商品类型
//	union
//	{
//		struct
//		{
//			char title[20];//书名
//			char author[20];//作者
//			int num_page;//页数
//		}book;
//		struct
//		{
//			char design[30];//设计
//		}mug;
//		struct
//		{
//			char design[30];//设计
//			int colors;//颜色
//			int sizes;//尺寸
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
//		printf("是小端\n");
//	else
//		printf("是大端\n");
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
//	free(ptr);//把ptr指向的空间还给操作系统
//	ptr = NULL;//但是ptr还是记住这个地址，如果这时候访问这个地址就是非法访问，ptr就是野指针
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
		//业务处理
	}
	else
	{
		return 1;//如果执行了return后面的代码将不再执行
	}

	//p = (int*)relloc(p, 10000);//这样直接写，如果开辟失败，连原来的地址也找不到了
	
	//正确写法
	int* ptr = NULL;
	ptr = (int*)relloc(p, 10000);
	if (ptr != NULL)
	{
		//业务处理
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
//		*(p + i) = i;//当i=10时，就是越界访问了
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
//	//如果p是空指针，程序直接就结束，不会再free，可块空间就一直被占用着
//}
//int main()
//{
//	test();
//	while (1);
//	//程序一直时死循环，如果没有free主动释放，这块空间就会一直被占用，发生内存泄露
//	//这样会导致内存越用越小，程序效率下降
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