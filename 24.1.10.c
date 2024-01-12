#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int a = 10;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//&在有两个操作符是表示按位与：1&2
//	//只有一个操作符是表示取地址
//	&a;//取出a的地址
//	//%p打印地址，打印的地址是16进制的
//	printf("%p", &a);
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	//0x开头表示16进制数字，一个16进制数字需要四个二进制
//	//11223344刚好是四个字节
//	printf("%p", &a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int * pa = &a;//取出a的地址，并将地址存储到指针变量pa中
//	//pa是指针变量，存放地址，而地址就是指针，所以指针变量就是存放指针的变量
//	int* pa = &a;
//	int *pa = &a;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 0;
//	//*pa是指通过pa中储存的地址找到pa指向的对象
//	return 0;
//}

//int main()
//{
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(float*));
//	printf("%zd\n", sizeof(double*));
//	printf("%zd\n", sizeof(short*));
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	char* pc =(char *) &a;
//	*pc = 0;
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;//&n取出的地址本质是int*型，强制类型转换成char*
//	int* pi = &n;
//
//	printf("%p\n", &n);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	printf("%p\n",pi);
//	printf("%p\n",pi+1);
//
//	return 0;
//}

////使用指针对数组输入数据，打印数据
//int main()
//{
//	int arr[10] = { 0 };
//	//一个整型4个字节，申请了40个字节
//	int* p = &arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = 1;
//		p++;
//	}
//	p = &arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int* pa = &a;
//	//char* pc = &a;
//	char ch = 'w';
//	void* pa = &a;
//	void* pc = &ch;
//	*pa = 10;
//	*pc = 'a';
//	pc++;//本质是指针加减运算，也不可以
//	return 0;
//}

#include <stdio.h>
//int main()
//{
//	const int a = 10;
//	int* pa = &a;
//	printf("%d\n", a);
//	*pa = 20;
//	printf("%d\n",a);
//	return 0;
//}


////测试无const修饰的情况下
//void tese1()
//{
//	int n = 10;
//	int m = 20;
//	int* pn = &n;
//	*pn = 20;
//	pn = &m;
//	
//}
////测试const放在*左边的情况下
//void test2()
//{
//	int n = 10;
//	int m = 20;
//	const int * pn = &n;
//	*pn = 20;
//	pn = &m;
//}
////测试const放在*右边的情况下
//void test3()
//{
//	int n = 10;
//	int m = 20;
//	int*const  pn = &n;
//	*pn = 20;
//	pn = &m;
//}
////测试const放在*两边的情况下
//void test4()
//{
//	int n = 10;
//	int m = 20;
//	int const * const  pn = &n;
//	*pn = 20;
//	pn = &m;
//}
//int main()
//{
//	//测试无const修饰的情况下
//	tese1();
//	//测试const放在*左边的情况下
//	test2();
//	//测试const放在*右边的情况下
//	test3();
//	//测试const放在*两边的情况下
//	test4();
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* pa = &arr[0];
//	int i = 0;
//	int sz = sizeof(arr);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(pa + i));
//		//               pa+i：pa加的是i*sizeof（int）个字节
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d", &arr[0] - &arr[9]);
//
//	return 0;
//}

#include <string.h>
//int main()
//{
//	char ch[] = "abc";
//	int s = strlen(ch);
//	printf("%d", s);
//}


////指针方式一
//int my_strlen1(char* s)
//{
//	int cont = 0;
//	while (*s != '\0')
//	{
//		cont++;
//		s++;
//	}
//	return cont;
//}
////指针-指针
//int my_strlen2(char* s)
//{
//	char* star = s;
//	while (*s!= '\0')
//	{
//		s++;
//	}
//	return (s - star);
//}
//int main()
//{
//	char s[] = "abc";
//	int s1 = my_strlen1(s);
//	int s2 = my_strlen2(s);
//	printf("%d\n%d", s1, s2);
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = &arr[0];
//	int i = 0;
//	int sz = sizeof(arr)/ sizeof(arr[0]);
//	while (p < arr + sz)//指针比较大小，arr是数组名，再此处表示首元素地址，具体原因下篇文章细讲
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = &arr[0];
//	int  i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		*(p + i) = i;
//		//当p超过数组arr的范围时，p就是野指针
//	}
//	return 0;
//}


//int* test()
//{
//	int n = 100;
//	return &n;
//}
//int main()
//{
//	int* p = test();
//	int a = 10;
//	printf("%d\n", a);
//	printf("%d", *p);
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	int* p1 = &num;
//	int* p2 = NULL;
//	*p1 = 200;
//	*p2 = 10;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = &arr[0];
//	for (i = 0 ;i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	//出来之后p指向的空间已经越界了，可以把p置为空NULL
//	p = NULL;
//	//下次在使用时，判断p不为NULL，再使用
//	//……
//	if (p != NULL)
//	{
//		//……
//	}
//	return 0;
//}

#include <stdio.h>
void Swap2(int* px, int* py)
{
	int tmp = 0;
	tmp = *px;
	*px = *py;
	*py = tmp;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("交换前：a=%d b=%d\n", a, b);
	Swap2(&a, &b);
	printf("交换后：a=%d b=%d\n", a, b);
	return 0;
}