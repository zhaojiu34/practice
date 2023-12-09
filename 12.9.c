#define _CRT_SECURE_NO_WARNINGS 1
////2033阶乘之和
//int main()
//{
//	long long n = 0;
//	scanf("%lld", &n);
//	long long sum = 0,a = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		a = (a * i) % 1000000;
//		sum = (sum+a)%1000000;
//	}
//	printf("%lld", sum%1000000);
//
//	return 0;
//}

////1091求阶乘的和
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0,sum = 0;
//	int j = 1;
//	for (i = 1; i <= n; i++)
//	{
//		j *= i; 
//		sum += j;
//	}
//	printf("%d", sum);
//	return 0;
//}

////1092求e的值
//int main()
//{
//	double n = 0.0;
//	scanf("%lf", &n);
//	double sum = 0, j = 1.0;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		j *= i;
//		sum += 1 / j;
//	}
//	printf("%.10lf", sum+1);
//	return 0;
//}

////1093求多项式的值
//#include <math.h>
//int main()
//{
//	double  x = 0.0;
//	double n = 0.0;
//	scanf("%lf %lf",&x, &n);
//	double sum = 0.0;
//	int i = 0;
//	for (i = 0; i <= n; i++)
//	{
//		sum += pow(x, i);
//	}
//	printf("%.2lf", sum);
//	return 0;
//}

////1094与7无关的数
//int main()
//{
//	int  n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		if (i % 7 != 0&&i %10!=7&&i/10!=7)
//		{
//			sum += i * i;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}

////1095数1的个数
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0,cont = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int a = i;
//		while (a)
//		{
//			if (a % 10 == 1)
//			{
//				cont++;
//			}
//			a = a / 10;
//		}
//	}
//	printf("%d", cont);
//	return 0;
//}

////1096数字统计
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 0,cont = 0;
//	for (i = a; i <= b; i++)
//	{
//		int m = i;
//		while (m)
//		{
//			if (m % 10 == 2)
//			{
//				cont++;
//			}
//			m = m / 10;
//		}
//	}
//	printf("%d", cont);
//	return 0;
//}

////1097画矩形
//int main()
//{
//	int len = 0,wid = 0;
//	int flag = 0;
//	char ch = 0;
//	int i = 0, j = 0;
//	scanf("%d %d %c %d", &len, &wid, &ch, &flag);
//
//	if (flag == 1)
//	{
//		for (i = 0; i < len; i++)
//		{
//			for (j = 0; j < wid; j++)
//			{
//				printf("%c", ch);
//			}
//			printf("\n");
//		}
//	}
//	else
//	{
//		for (i = 0; i < len; i++)
//		{
//			for (j = 0; j < wid; j++)
//			{
//				if (i == 0 || j == 0 || i == len - 1 || j == wid - 1)
//					printf("%c", ch);
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

////1099第n小的质数
//int main()
//{
//	long long n = 0;
//	scanf("%lld", &n);
//	long long cont = 0;
//	long long i = 0;
//	for (i = 2; i <= 10000; i++)
//	{
//		long long j = 2;
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
//			cont++;
//		}
//		if (cont == n)
//		{
//			printf("%lld", i);
//			break;
//		}
//	}
//	return 0;
//}

////1100金币
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	int i = 0,cont=1, j = 0;
//	long long sum = 0,a = 0;
//	for (i = 1; i <=10000 ; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			a++;
//			sum += cont;
//			if (a == day)
//				break;
//		}
//		if (a == day)
//			break;
//		cont++;
//		
//	}
//	printf("%lld", sum);
//	return 0;
//}

////1101不定方程的解
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int x = 0;
//	int cont = 0;
//	for (x = 0; x <= 1000; x++)
//	{
//		int y = 0;
//		for (y = 0; y <= 1000; y++)
//		{
//			if(a*x + b *y == c)
//			{
//				cont++;
//			}
//		}
//	}
//	printf("%d", cont);
//	return 0;
//}

////2034反序输出
//int main()
//{
//	int arr[100] = { 0 };
//	int i = 0;
//	int cont = 0;
//	while (scanf("%d", &arr[i])!= EOF)
//	{
//		cont++;
//		i++;
//	}
//	for (i = 0; i < cont; i++)
//	{
//		printf("%d ", arr[cont - i -1]);
//	}
//	return 0;
//}

#include <stdio.h>
//2035平移数据
int main()
{
	int arr[1000] = { 0 };
	int i = 0;
	int cont = 0;
	scanf("%d", &cont);
	for (i = 0; i < cont; i++)
	{
		scanf("%d", &arr[i]);
	}
	int tmp = arr[0];
	for (i = 0; i < cont -1; i++)
	{
		arr[i] =arr[i+1];
	}

	arr[i] = tmp;

	for (i = 0; i < cont; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}