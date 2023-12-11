#define _CRT_SECURE_NO_WARNINGS 1
//#include <math.h>
////1099第n小的质数
//int main()
//{
//	long long n = 0;
//	scanf("%lld", &n);
//	long long cont = 0;
//	long long i = 0;
//	for (i = 2; ; i++)
//	{
//		long long j = 2;
//		int flag = 1;
//		for (j = 2; j <= (int)sqrt(i); j++)
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

////1102与指定数字相同的数的个数
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[101] = {0};
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int key = 0,cont = 0;
//	scanf("%d", &key);
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == key)
//		{
//			cont++;
//		}
//	}
//	printf("%d", cont);
//}

////2038最大数的位置
//int main()
//{
//	int n = 0, max = 0;
//	scanf("%d", &n);
//	int arr[10001] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == max)
//		{
//			printf("%d", i + 1);
//			break;
//		}
//	}
//	return 0;
//}

////1103陶陶摘苹果
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int h = 0,cont = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &h);
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] <= (h+30))
//		{
//			cont++;
//		}
//	}
//	printf("%d", cont);
//	return 0;
//}

////1104计算书费
//int main()
//{
//	double arr1[10] = {28.9,32.7,45.6,78.0,35.0,86.2,27.8,43.0,56.0,65.0};
//	int arr2[10] = {0};
//	int i = 0;
//	double sum = 0.0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr2[i]);
//		sum += arr2[i]*arr1[i];
//	}
//	printf("%.1lf", sum);
//	return 0;
//}

////1105数组逆序重存放
//int main()
//{
//	int n = 0, i =0;
//	scanf("%d", &n);
//	int arr[101] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i<n / 2;i++)
//	{
//		int tmp = arr[i];
//		arr[i] = arr[n -1- i];
//		arr[n -1- i] = tmp;
//	}
//	for (i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

////1106年龄与疾病
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num = 0;
//	int a = 0, b = 0, c = 0, d = 0;
//	while ((scanf("%d", &num) )!= EOF)
//	{
//		if (num >= 0 && num <= 18)
//			a++;
//		else if (num <= 35)
//			b++;
//		else if (num <= 60)
//			c++;
//		else
//			d++;
//	}
//	int arr[4] = { 0 };
//	arr[0] = a;
//	arr[1] = b;
//	arr[2] = c;
//	arr[3] = d;
//	double m = 0;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		m = (double)arr[i] /(double) n*100.0;
//		printf("%.2lf%%\n", m);
//	}
//	return 0;
//}

#include <stdio.h>
//1112最大值和最小值的差
int main()
{
	int n = 0;
	scanf("%d", &n);
	int min = 0, max = 0;
	int arr[10000] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	min = arr[0];
	max = arr[0];
	for (i = 0; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	printf("%d", max - min);
	return 0;
}