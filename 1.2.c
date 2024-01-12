#define _CRT_SECURE_NO_WARNINGS 1
//BC44小乐乐与欧几里得
//int main()
//{
//	long long a = 0, b = 0;
//	scanf("%lld %lld", &a, &b);
//	long long m = a, n = b;
//	long long min = 0, max = 0;
//	if (b > a)
//	{
//		int tmp = a;
//		a = b; 
//		b = tmp;
//	}
//	long long c = a % b;
//	if (c == 0)
//	{
//		max = b;
//	}
//	else
//	{
//		while (c)
//		{
//			int tmp = a;
//			a = b;
//			b = tmp % b;
//			c = a % b;
//		}
//		max = b;
//	}
//	min = m / b * n;
//	printf("%lld", min + max);
//	return 0;
//}

////BC45小乐乐改数字
//int main()
//{
//	long long n = 0;
//	scanf("%lld", &n);
//	long long a = n;
//	int s = 0, cont = 0,m = 0;
//	int arr[10] = { 0 };
//	int i = 0;
//	while (a)
//	{
//		if (a % 10 % 2 == 0)
//		{
//			s++;
//			arr[cont] = 0;
//		}
//		else
//		{
//			arr[cont] = 1;
//		}
//		a /= 10;
//		cont++;
//	}
//	if (s == cont)
//		printf("0");
//	else
//	{
//		int flag = 0;
//		for (i = cont-1; i>=0; i--)
//		{
//			if (flag)
//			{
//				printf("%d", arr[i]);
//			}
//			if (arr[i] != 0&&flag==0)
//			{
//				flag = 1;
//				printf("%d", arr[i]);
//			}
//			
//		}
//	}
//	return 0;
//}

////BC93公务考试
//int main()
//{
//	int arr[7] = { 0 };
//	int max = 0, min = 0;
//	double ave = 0.0;
//	while ((scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6])) != EOF)
//	{
//		int i = 0;
//		max = arr[0], min = arr[0];
//		int sum = 0;
//		for (i = 0; i < 7; i++)
//		{
//			if (arr[i] < min)
//				min = arr[i];
//			if (arr[i] > max)
//				max = arr[i];
//			sum += arr[i];
//		}
//		ave = (double)(sum - max - min) / (double)5;
//		printf("%.2lf", ave);
//	}
//	return 0;
//}

////BC125序数去重
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	int arr[1000] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = i + 1; j < n; j++)
//		{
//			if (arr[i] == arr[j])
//				arr[j] = 0;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i])
//			printf("%d ", arr[i]);
//	}
//}

////BC137序列重组矩阵
//int main()
//{
//	int n = 0, m = 0; 
//	int arr[11][11] = { 0 };
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////BC116计数问题
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int key = 0,cont=0;
//	scanf("%d %d", &n, &key);
//	for (i = 1; i <= n; i++)
//	{
//		int b = i;
//		while (b)
//		{
//			if (b % 10 == key)
//				cont++;
//			b /= 10;
//		}
//	}
//	printf("%d", cont);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[35][35] = { 0 };
//	arr[1][1] = 1;
//	for (i = 2; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	
//	}
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//			printf("%5d", arr[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	char s[6][6] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 6; j++)
			scanf("%c", &s[i][j]);
	}
	if (s[0][0] == s[1][2] && s[1][2] == s[2][4] && s[2][4] == 'K')
		printf("KiKi wins!\n");
	else if (s[0][0] == s[1][2] && s[1][2] == s[2][4] && s[2][4] == 'B')
		printf("BoBo wins!\n");
	else
		printf("No winner!\n");
	return 0;
}