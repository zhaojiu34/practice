#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int n = 0x11223344;
//	int* pn = &n;
//	printf("%p\n", pn);
//	return 0;
//}
//int main()
//{
//	int cont = 0;
//	int n = -1;
//	//scanf("%d", &n);
//	while(n--)
//	{
//		printf("%d\n", n);
//	}
//	
//	return 0;
//}

////1151素数个数
//int Func(int a)
//{
//	int i = 2;
//	int cont = 0;
//	for (i = 2; i <= a; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (1 == flag)
//		{
//			cont++;
//		}
//		
//	}
//	return cont;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Func(n);
//	printf("%d", r);
//	return 0;
//}

////1152最大数max（x，y，z）
//double Func(int a, int b, int c)
//{
//	int x = 0, y = 0, z = 0;
//	if (a >= b && a >= c)
//		x = a;
//		else if (b >= a && b >= c)
//		x = b;
//		else if (c >= b && c >= a)
//		x = c;
//	if (a+b >= b && a+b >= c)
//		y = a+b;
//		else if (b >=a+ b && b >= c)
//		y = b;
//		else if (c >=a+ b && c >= b)
//		y = c;
//	if (a >= b && a >=b+ c)
//		z = a;
//		else if (b >= a && b >= b+c)
//		z = b;
//		else if (b+c >= b && b+c >= a)
//		z = b+c;
//	double r = 0.0;
//	r = (double)x / (double)((double)y *(double)z);
//	return r;
//}
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	double r = Func(a, b, c);
//	printf("%.3lf", r);
//	return 0;
//}

////1153绝对素数
//void Func()
//{
//	int i = 10;
//	for (i =10; i <= 99; i++)
//	{
//		int n = i / 10 + i % 10 * 10;
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		for (j = 2; j < n; j++)
//		{
//			if (n % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//}
//int main()
//{
//	Func();
//	return 0;
//}

////1154亲和数
//void Func()
//{
//	int i = 1;
//	for (i = 1; i <= 1000; i++)
//	{
//		int sum = 0;
//		int s = 0;
//		int j = 0;
//		for (j = 1; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				sum += j;
//			}
//		}
//		for (j = 1; j < sum; j++)
//		{
//			if (sum % j == 0)
//			{
//				s += j;
//			}
//		}
//		if (s == i&&i !=sum)
//		{
//			printf("%d %d", i, sum);
//			break;
//		}
//
//	}
//}
//int main()
//{
//	Func();
//	return 0;
//}

////1155回文三位数
//void Func()
//{
//	int i = 0;
//	for (i = 100; i <= 999; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			int n = i / 100 + i / 10 % 10 * 10 + i % 10 * 100;
//			if (n == i)
//				printf("%d\n", i);
//		}
//	}
//}
//int main()
//{
//	Func();
//	return 0;
//}

//#include<math.h>
////1156求Π的值
//double Arctanx(double n)
//{
//	double sum = 0;
//	int flag = 1;
//	int i = 0;
//	int cont = 0;
//	for (i = 1; i <= 1000; i+=2)
//	{
//		if (cont % 2 != 0)
//			flag = -1;
//		else
//			flag = 1;
//		if ((pow(n, i) / i) < 1e-6)
//			break;
//		sum += (pow(n, i) / i )* flag;
//		
//		cont++;
//	}
//	return sum;
//}
//int main()
//{
//	double r = 6*Arctanx(1 / sqrt(3));
//	printf("%.10lf", r);
//	return 0;
//}

#include <stdio.h>
//1157哥德巴赫猜想
void Func()
{
	int i = 8;
	for (i = 8; i <= 100; i += 2)
	{

	}
}
int main()
{
	Func();
	return 0;
}