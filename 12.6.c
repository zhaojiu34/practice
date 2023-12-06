#define _CRT_SECURE_NO_WARNINGS 1
////1084幂的末尾
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 0;
//	int m = a;
//	for (i = 0; i < b-1; i++)
//	{
//		a *= m;
//		a = a % 1000;
//	}
//	printf("%03d", a);
//	return 0;
//}

////2021最大公约数
//int main()
//{
//	long long m = 0, n = 0;
//	long long r = 0;
//	scanf("%lld %lld", &m, &n);
//	if (m < n)
//	{
//		long long tmp = m;
//		m = n;
//		n = tmp;
//	}
//	//辗转相除法
//	r = m % n;
//	while (r != 0)
//	{
//			m = n;
//			n = r;
//			r = m % n;
//	}
//		printf("%lld", n);
//	
//	return 0;
//}

////2023数据统计
//int main()
//{
//	int n = 0;
//	int max = 0, min = 10001;
//	int cont = 0,sum = 0;
//	double ave = 0.0;
//	while (scanf("%d", &n) != EOF)
//	{
//		cont++;
//		sum += n;
//		if (max < n)
//			max = n;
//		if (min > n)
//			min = n;
//	}
//	ave = (double)sum / (double)cont;
//	printf("%d %d %.3lf", min, max, ave);
//	return 0;
//}

////1085球弹跳高度的计算
//int main()
//{
//	double h = 0.0;
//	scanf("%lf", &h);
//	double m = h;
//	int i = 0;
//	double sum = 0.0;
//	for (i = 0; i < 10; i++)
//	{
//		sum += h;
//		h = h / 2;
//	}
//	sum = m + (sum - m) * 2.0;
//	printf("%g\n%g", sum,h);
//	return 0;
//}

////1086角谷猜想
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n != 1)
//	{
//		if (n % 2 == 0)
//		{
//			n = n / 2;
//			printf("%d/2=%d\n", n * 2, n);
//		}
//		else
//		{
//			n = n * 3 + 1;
//			printf("%d*3+1=%d\n", (n-1)/3, n);
//		}
//	}
//	printf("End");
//	return 0;
//}

////1087级数求和
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	double sum = 0.0, i = 1.0;
//	while (sum < k)
//	{
//		sum += 1 / i;
//		i++;
//	}
//	if ((int)i == 2)
//		printf("%d",(int)i);
//	else
//		printf("%d", (int)(i-1));
//	return 0;
//}

////1088分离整数的各位数
//int main()
//{
//	long long n = 0;
//	scanf("%lld", &n);
//	int cont = 0;
//	int i = 10,a = 0,b = n;
//	while (b)
//	{
//		cont++;
//		b = b / 10;
//	}
//	for (i = 0; i< cont; i++)
//	{
//		a = n % 10;
//		n = n / 10;
//		printf("%d ", a);
//	}
//	return 0;
//}

#include<stdio.h>
#include <math.h>
//1089数字反转
int main()
{
	long long n = 0;
	scanf("%lld", &n);
	long long cont = 0, m =n;
	while (m)
	{
		m = abs(m) / 10;
		cont++;
	}
	int b = cont;
	if (n == 0)
		printf("0");
	if (n < 0)
		printf("-");
	int i = 0, a = n %10;
	while (a == 0)
	{
		cont--;
		a = abs(n) % 10;
		n = abs(n) / 10;
	}
	if (b != cont)
	{
		printf("%d", a);

	}
	
	while (cont)
	{
			a = abs(n)% 10;
			n = abs(n) / 10;
			cont--;
			printf("%d", a);

			
	}
	return 0;
}