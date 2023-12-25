#define _CRT_SECURE_NO_WARNINGS 1
////1411区间内的真素数
//int Reser(int i)
//{
//	int n = 0;
//	if (i >= 1 && i <= 9)
//	{
//		n = i;
//		return n;
//	}
//	if (i >= 10 && i <= 99)
//	{
//		n = i % 10 * 10 + i / 10;
//		return n;
//	}
//	if (i >= 100 && i <= 999)
//	{
//		i = i % 10 * 100 + i / 10 % 10 * 10 + i / 100;
//			return n;
//	}
//	if (i >= 1000 && i <= 9999)
//	{
//		i = i % 10 * 1000 + i / 10 % 10 * 100 + i / 100 % 10 * 10 + i / 1000;
//		return n;
//	}
//	if (i == 100000)
//		return 1;
//}
//void Func(int m, int n)
//{
//	int cont = 0;
//	int i = 0;
//	for (i = m; i <= n; i++)
//	{
//		int j = 0; 
//		int flag = 1, s = 1;
//		int r = Reser(i);
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		for (j = 2; j < r; j++)
//		{
//			if (r % j == 0)
//			{
//				s = 0;
//				break;
//			}
//		}
//		if (flag == 1 && s == 1&&i!=1)
//		{
//			if (cont == 0)
//				printf("%d", i);
//			else
//				printf(",%d", i);
//			cont++;
//		}
//	}
//	if (cont == 0)
//		printf("No");
//}
//int main()
//{
//	int m = 0, n = 0;
//	scanf("%d %d", &m, &n);
//	Func(m, n);
//	return 0;
//}

////2047过滤字符串
//int main()
//{
//	char s[205] = { 0 };
//	while ((scanf("%s", s))!=EOF)
//	{
//		printf("%s ", s);
//	}
//	return 0;
//}


//#define N 25
//char s[N][N];
//int compar(const void* s1, const void* s2)
//{
//	return strcmp((char*)s1,(char*)s2);
//}
//int main()
//{
//	int n = 0, i = 0;
//	scanf("%d", &n);
//	getchar();
//	for (i = 0; i < n; i++)
//	{
//		gets(s[i]);
//	}
//	qsort(s, n,N*sizeof(char), compar);
//	for (i = 0; i < n; i++)
//	{
//		puts(s[i]);
//	}
//}


////2049字符串判等
//int main()
//{
//	char s1[50] = { 0 };
//	char s2[50] = { 0 };
//	char s3[50] = { 0 };
//	char s4[50] = { 0 };
//	gets(s1);
//
//	gets(s2);
//	int sz1 = strlen(s1);
//	int sz2 = strlen(s2);
//	int i = 0;
//	for (i = 0; i < sz1; i++)
//	{
//		if (s1[i] >= 'A' && s1[i] <= 'Z')
//		{
//			s1[i] += 32;
//		}
//	}
//	for (i = 0; i < sz2; i++)
//	{
//		if (s2[i] >= 'A' && s2[i] <= 'Z')
//		{
//			s2[i] += 32;
//		}
//	}
//	int j = 0;
//	for (i = 0;; i++)
//	{
//		while(j<sz1)
//		{
//			if (s1[j] != ' ')
//			{
//				s3[i] = s1[j];
//				j++;
//				break;
//			}
//			else
//				j++;
//		}
//		if (j == sz1)
//			break;
//	}
//	j = 0;
//	for (i = 0;; i++)
//	{
//		while (j < sz2)
//		{
//			if (s2[j] != ' ')
//			{
//				s4[i] = s2[j];
//				j++;
//				break;
//			}
//			else
//				j++;
//		}
//		if (j == sz2)
//			break;
//	}
//	if (strcmp(s3, s4) == 0)
//		printf("YES");
//	else
//		printf("NO");
//}

//int main()
//{
//	char s[50] = { 0 };
//	int i = 0;
//	gets(s);
//	while (s[i] != '\0')
//	{
//		if (s[i] >= 'a' && s[i] <= 'z')
//		{
//			s[i] -= 32;
//		}
//		i++;
//	}
//	printf("%s", s);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	n = n % 26;
//	char s[55] = { 0 };
//	scanf("%s", s);
//	int i = 0;
//	while (s[i] != '\0')
//	{
//		s[i] = (s[i] - 97 + n) % 26 + 97;
//		i++;
//
//	}
//	printf("%s", s);
//	return 0;
//}


//#include <algorithm>
//#include <iostream>
//int main()
//{
//	int n = 0, i = 0;
//	int x = 0, y = 0;
//	scanf("%d", &n);
//	char s[20] = { 0 };
//	char ch = 0;
//	char ss[100] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s",s);
//		if (isalpha(s[0]))
//		{
//			ch = s[0];//如果后面不再输入字母，就会保持上一个字母的算法
//			scanf("%d %d", &x, &y);
//		}
//		else
//		{
//			x = atoi(s);
//			scanf("%d", &y);
//		}
//		if (ch == 'a')
//			sprintf(ss, "%d+%d=%d", x, y, x + y);
//		else if (ch == 'b')
//			sprintf(ss, "%d-%d=%d", x, y, x - y);
//		else
//			sprintf(ss, "%d*%d=%d", x, y, x * y);
//		printf("%s\n%d\n", ss, strlen(ss));
//	}
//	return 0;
//}

//int main()
//{
//	int cont = 0;
//	char s[200] = { 0 };
//	int i = 0;
//	gets(s);
//	int sz = strlen(s);
//	for (i = 0; i < sz; i++)
//	{
//		if (s[i] == ' ' || s[i] == 'a' || s[i] == 'd' || s[i] == 'g' || s[i] == 'j' || s[i] == 'm' || s[i] == 'p' || s[i] == 't' || s[i] == 'w')
//			cont += 1;
//		else if (s[i] == 'b' || s[i] == 'e' || s[i] == 'h' || s[i] == 'k' || s[i] == 'n' || s[i] == 'q' || s[i] == 'u' || s[i] == 'x')
//			cont += 2;
//		else if (s[i] == 'c' || s[i] == 'f' || s[i] == 'i' || s[i] == 'l' || s[i] == 'o' || s[i] == 'r' || s[i] == 'v' || s[i] == 'y')
//			cont += 3;
//		else if (s[i] == 's' || s[i] == 'z')
//			cont += 4;
//	}
//	printf("%d", cont);
//}

//#include <string.h>
//#include <stdlib.h>
//#include <ctype.h>
//int main()
//{
//	int n = 0;
//	int i = 0,cont=0;
//	scanf("%d", &n);
//	char s[100] = { 0 };
//	scanf("%s", s);
//		for (i = 0; i < n-1; i++)
//		{
//			if (s[i] == 'V' && s[i + 1] == 'K')
//			{
//				cont++;
//				s[i] = 'X';
//				s[i + 1] = 'X';
//			}
//		}
//		for (i = 0; i < n-1; i++)
//		{
//			if (s[i] == 'V' && s[i + 1] == 'V')
//			{
//				cont++;
//				s[i + 1] = 'K';
//				break;
//			}
//			if (s[i] == 'K' && s[i + 1] == 'K')
//			{
//				s[i] = 'V';
//				cont++;
//				break;
//			}
//		}
//		printf("%d", cont);
//	return 0;
//}

//struct Stu
//{
//	char name[10];
//	int c;
//	int m;
//	int e;
//}s[1005];//结构体数组
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int max = 0;
//	int i = 0;
//	int m = n;
//	/*for(i =0; i<n; i++)
//	{
//		int sum = 0;
//		scanf("%s %d %d %d", s[i].name, &s[i].c, &s[i].m, &s[i].e);
//		sum = s[i].c + s[i].e + s[i].m;
//		if (sum > max)
//			max = sum;
//	}*/
//	while (n--)
//	{
//		int sum = 0;
//		scanf("%s %d %d %d", s[i].name, &s[i].c, &s[i].m, &s[i].e);
//		sum = s[i].c + s[i].e + s[i].m;
//		if (sum > max)
//			max = sum;
//		i++;
//	}
//	for (i = 0; i < m; i++)
//	{
//		if (s[i].c + s[i].e + s[i].m == max)
//		{
//			printf("%s %d %d %d", s[i].name, s[i].c, s[i].m, s[i].e);
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	/*int n = 10;
//	int* pn = &n;
//	printf("%p\n", pn);
//	printf("%p\n", &n);
//	printf("%d\n", *pn);
//	*pn = 20;
//	printf("%d\n", n);
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(char*));*/
//	/*int n = 0x11223344;
//	int m = 0x11223344;
//	int* p1 = &n;
//	char* p2 = (char*)&m;
//	*p1 = 0;
//	*p2 = 0;
//	printf("%#x\n", n);
//	printf("%#x\n", m);*/
//	//利用指针输入数据，读取数据
//	int arr[10] = { 0 };
//	char* p = (char*)&arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < 40; i++)
//	{
//		*(p+i) = 1;
//	}
//	int* pn = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(pn + i));
//	}
//	return 0;
//}

//int test1(char* s)
//{
//	int cont = 0;
//	while (*s != '\0')
//	{
//		cont++;
//		s++;
//	}
//	return cont;
//}
//int test2(char* s1)
//{
//	char* star = s1;
//	while (*s1 != '\0')
//	{
//		s1++;
//	}
//	return s1 - star;
//}
//int main()
//{
//	//指针减指针
//	//strlen函数的模拟
//	printf("%d\n", test1("abcdef"));
//	printf("%d\n", test2("abcdef"));
//	return 0;
//}

//#define NEDBUG
//#include <assert.h>
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	// ....
//	p = NULL;
//	assert(p !=NULL);
//	*p = 20;
//	//....
//	int b = 5;
//	b = 6;
//	assert(b == 5);
//}

////写一个函数调换两个整形的值
//void Func1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Func2(int* px, int* py)
//{
//	int tmp = 0;
//	tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int a = 10, b = 20;
//	int* pa = &a;
//	int* pb = &b;
//	printf("调换前：a=%d,b=%d\n", a, b);
//	//Func1(a, b);//传值调用，不可以，形参只是实参的一份拷贝，改变形参的值与实参无关联
//	Func2(pa, pb);//传址调用，形参是地址，通过地址与实参建立联系
//	printf("调换后：a=%d,b=%d\n", a, b);
//}

//int main()
//{
//	printf("  *\n");
//	printf(" ***\n");
//	printf("*****\n");
//	printf(" ***\n");
//	printf("  *\n");
//
//}

//int main()
//{
//	int min = 1005;
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[105] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	printf("%d", min);
//	return 0;
//}

//int main()
//{
//	int n = 0, k = 0;
//	scanf("%d %d", &n, &k);
//	int i = 0;
//	int sum1 = 0, sum2 = 0;
//	int cont = 0, s = 0;
//	double ave1 = 0.0, ave2 = 0.0;
//	for (i = 1; i <= n; i++)
//	{
//		if (i % k == 0)
//		{
//			sum1 += i;
//			cont++;
//		}
//		else
//		{
//			sum2 += i;
//			s++;
//		}
//	}
//	ave1 = (double)sum1 / (double)cont;
//	ave2 = (double)sum2 / (double)s;
//	printf("%.1lf %.1lf", ave1, ave2);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int cont = 0;
//	while (a != 1)
//	{
//		cont++;
//		a /= 2;
//	}
//	printf("%d", cont+1);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 1;
//	for (i = n;i>=1 ; i--)
//	{
//		int cont = 0;
//		while (cont <i)
//		{
//			printf("%02d", j);
//			j++;
//			cont++;
//		}
//		printf("\n");
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int s = 0;
	for(i = 1; i <= n; i++)
	{
		int j = 1;
		int sum = 1;
		for (j = 1; j <= i; j++)
			sum *= j;
		s += sum;
	}
	printf("%d", s);
}