#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int a = 10;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//&���������������Ǳ�ʾ��λ�룺1&2
//	//ֻ��һ���������Ǳ�ʾȡ��ַ
//	&a;//ȡ��a�ĵ�ַ
//	//%p��ӡ��ַ����ӡ�ĵ�ַ��16���Ƶ�
//	printf("%p", &a);
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	//0x��ͷ��ʾ16�������֣�һ��16����������Ҫ�ĸ�������
//	//11223344�պ����ĸ��ֽ�
//	printf("%p", &a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int * pa = &a;//ȡ��a�ĵ�ַ��������ַ�洢��ָ�����pa��
//	//pa��ָ���������ŵ�ַ������ַ����ָ�룬����ָ��������Ǵ��ָ��ı���
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
//	//*pa��ָͨ��pa�д���ĵ�ַ�ҵ�paָ��Ķ���
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
//	char* pc = (char*)&n;//&nȡ���ĵ�ַ������int*�ͣ�ǿ������ת����char*
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

////ʹ��ָ��������������ݣ���ӡ����
//int main()
//{
//	int arr[10] = { 0 };
//	//һ������4���ֽڣ�������40���ֽ�
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
//	pc++;//������ָ��Ӽ����㣬Ҳ������
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


////������const���ε������
//void tese1()
//{
//	int n = 10;
//	int m = 20;
//	int* pn = &n;
//	*pn = 20;
//	pn = &m;
//	
//}
////����const����*��ߵ������
//void test2()
//{
//	int n = 10;
//	int m = 20;
//	const int * pn = &n;
//	*pn = 20;
//	pn = &m;
//}
////����const����*�ұߵ������
//void test3()
//{
//	int n = 10;
//	int m = 20;
//	int*const  pn = &n;
//	*pn = 20;
//	pn = &m;
//}
////����const����*���ߵ������
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
//	//������const���ε������
//	tese1();
//	//����const����*��ߵ������
//	test2();
//	//����const����*�ұߵ������
//	test3();
//	//����const����*���ߵ������
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
//		//               pa+i��pa�ӵ���i*sizeof��int�����ֽ�
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


////ָ�뷽ʽһ
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
////ָ��-ָ��
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
//	while (p < arr + sz)//ָ��Ƚϴ�С��arr�����������ٴ˴���ʾ��Ԫ�ص�ַ������ԭ����ƪ����ϸ��
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
//		//��p��������arr�ķ�Χʱ��p����Ұָ��
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
//	//����֮��pָ��Ŀռ��Ѿ�Խ���ˣ����԰�p��Ϊ��NULL
//	p = NULL;
//	//�´���ʹ��ʱ���ж�p��ΪNULL����ʹ��
//	//����
//	if (p != NULL)
//	{
//		//����
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
	printf("����ǰ��a=%d b=%d\n", a, b);
	Swap2(&a, &b);
	printf("������a=%d b=%d\n", a, b);
	return 0;
}