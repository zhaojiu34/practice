#define _CRT_SECURE_NO_WARNINGS 1
////1090含k的三个数
//int main()
//{
//	int m = 0, k = 0;
//	scanf("%d %d", &m, &k);
//	int cont = 0,a = m;
//	while (a)
//	{
//		if (a % 10 == 3)
//			cont++;
//		a = a / 10;
//	}
//	if (cont == k && m % 19 == 0)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}

////2024末两位
//int main()
//{
//	int i = 0,a = 1;
//	int n = 0;
//	scanf("%d", &n);
//	do
//	{
//		a *= 1992;
//		a = a % 100;
//		i++;
//	} while (i < n);
//	printf("%d", a % 100);
//	return 0;
//}

////2025体操队
//int main()
//{
//	int n = 1;
//	do
//	{
//		n++;
//		if (n % 3 == 1 && n % 4 == 1 && n % 5 == 1 && n % 6 == 1 && n % 7 == 0)
//		{
//			break;
//		}
//	} while (n!=0);
//	printf("%d", n);
//	return 0;
//}

////2026n阶和
//int main()
//{
//	int  n = 0,sum =0;
//	scanf("%d", &n);
//	int i = 1;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 1;
//		int a = 1;
//		for (j = i; j >= 1; j -= 1)
//		{
//			a *= j;
//		}
//		sum += a;
//	}
//	printf("%d", sum);
//	return 0;
//}

////2027三角形
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		//打印几行
//		int j = 0;
//		for (j = 1; j <=i; j++)
//		{
//			//一行有几个
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

////2028百钱买百鸡
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	for (a = 0; a <= 20; a++)
//	{
//		for (b = 0; b <= 40; b++)
//		{
//			for (c = 0; c <= 100; c++)
//			{
//				if (5*a + 3*b + c == 100&&a+b+3*c==100)
//				{
//					    printf("%d %d %d\n", a, b, 3 * c);
//				}
//			}
//			
//		}
//		
//	}
//	return 0;
//}

////2029水仙花数
//#include <math.h>
//int main()
//{
//	int i = 100;
//	for (i = 100; i <= 999; i++)
//	{
//		int sum = 0,a=i;
//		int j = 0;
//		for(j = 0; j<3; j++)
//		{
//			sum += pow(a % 10, 3);
//			a = a / 10;
//		}
//		if (sum == i)
//			printf("%d\n", i);
//	}
//	return 0;
//}

////2030找素数
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int i = a;
//	for (i = a; i <= b; i++)
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
//			printf("%d\n", i);
//	}
//}

///2031 四位完全平方数
//#include <math.h>
//int main()
//{
//	int i = 1000;
//	for (i = 1000; i <= 9999; i++)
//	{
//		if ((int)sqrt(i) == sqrt(i))
//		{
//			if (i % 10 == i / 10 % 10 && i / 100 % 10 == i / 1000)
//				printf("%d\n", i);
//		}
//	}
//	return 0;
//}

#include <stdio.h>
//2032分解质因数
int main()
{
	long long n = 0;
	scanf("%lld", &n);
	int i = 0,cont = 0;
	printf("%lld=", n);
	for (i = 2; i <=n; i++)
	{
		while (n % i == 0)
		{
			if (cont == 0)
			{
					printf("%d", i);
			}
			else
				printf("*%d", i);
			n = n / i;
			cont++;
		}
	}
	return 0;
}