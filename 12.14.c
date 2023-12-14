#define _CRT_SECURE_NO_WARNINGS 1
////2037约瑟夫问题
//int main()
//{
//	int arr[1005] = { 0 };//创建一个数组，把这几个人都放在数组中，便于排序
//	int n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//	//arr对应下标中的值是零表示还未出列，1表示已出列
//	int num = n;//每出一个人，总人数-1，知道num = 0
//	int i = 0;
//	int s = 0;//统计报数
//	while (num)
//	{
//		i++;
//		if (i > n)
//			i = 1;//人数是n个，所以下标是1~n，超过n时，从开始报数
//		if (arr[i] == 0)//表示未出列
//		{
//			s++;
//			if (s == m)
//			{
//				num--;
//				arr[i] = 1;
//				s = 0;
//				printf("%d ", i);
//			}
//		}
//	}
//	return 0;
//}

////1107校门外的树
//int main()
//{
//	int arr[10005] = { 0 };
//	int l = 0, m = 0;
//	scanf("%d %d", &l, &m);
//	int i = 0;
//	for (i = 0; i < m; i++)
//	{
//		int x = 0, y = 0;
//		scanf("%d %d", &x, &y);
//		int j = 0;
//		for (j = x; j <= y; j++)
//		{
//			arr[j] = 1;
//		}
//	}
//	int cont = 0;
//	for (i = 0; i <= l; i++)
//	{
//		if (arr[i] == 0)
//		{
//			cont++;
//		}
//	}
//	printf("%d", cont);
//	return 0;
//}

////1109开关灯
//int main()
//{
//	int arr[50008] = { 0 };
//	int  n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	for (i = 2; i <= m; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= n; j++)
//		{
//			if (j % i == 0)
//			{
//				arr[j] = !arr[j];//取反逻辑
//			}
//		}
//	}
//	int cont = 0;
//	for (i = 1; i <= n; i++)
//	{
//		if (arr[i] == 0)
//		{
//			if (cont == 0)
//			{
//				printf("%d", i);
//				cont++;
//			}
//			else
//				printf(",%d", i);
//		}
//		
//	}
//	return 0;
//}

////2036开关门
//int main()
//{
//	int arr[1005] = { 0 };//0表示开门，方法和前面2037，1107方法一样
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	//设初始的0为开门，相当于第一个服务员已经操作了，服务员直接从第二个开始就行了
//	for (i = 2; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= n; j++)
//		{
//			if(j % i==0)
//			arr[j] = !arr[j];
//		}
//	}
//	for (i = 1; i <= n; i++)
//	{
//		if (arr[i] == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////1110查找特定值
//int main()
//{
//	int arr[10005] = { 0 };
//	int n = 0, k = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &k);
//	int flag = 0;
//	for (i = 1; i <= n; i++)
//	{
//		if (arr[i] == k)
//		{
//			flag = 1;
//			printf("%d", i);
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("-1");
//	}
//	return 0;
//}

////1111不高兴的津津
//int main()
//{
//	int arr[8] = { 0 };
//	int x = 0, y = 0;
//	int i = 0;
//	while (scanf("%d %d", &x, &y)!=EOF)
//	{
//		i++;
//		arr[i] = x + y;
//	}
//	int max = 0;
//	for (i = 1; i <= 7; i++)
//	{
//		if (arr[i] > max)
//		{
			//max = arr[i];
//		}
//	}
//	if (max < 8)
//		printf("0");
//	else
//	{
//		for (i = 1; i <= 7; i++)
//		{
//			if (max == arr[i])
//			{
//				printf("%d", i);
//				break;
//			}
//		}
//	}
//	return 0;
//}

////1113不与最大数相同的数字之和
//int main()
//{
//	int arr[101] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0, max = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == max)
//		{
//			arr[i] = 0;
//		}
//		sum += arr[i];
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include <math.h>
////1114白细胞计数
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	double arr[305] = { 0.0 };
//	double max = 0.0, min = 10000;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%lf", &arr[i]);
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == max)
//			arr[i] = 0;
//		if (arr[i] == min)
//			arr[i] = 0;
//	}
//	double ave = 0.0,sum = 0.0;
//	max = 0.0, min = 10000;
//	for (i = 0; i < n; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//		if (arr[i] < min&&arr[i]!=0.0)
//			min = arr[i];
//		sum += arr[i];
//	}
//	ave = sum / (n - 2);
//	double m = (double)abs(max - ave);
//	if ((double)abs(min - ave) > m)
//		m = (double)abs(min - ave);
//	printf("%.2lf %.2lf", ave, m);
//	return 0;
//}

////1115直方图
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10005] = { 0 };
//	int i = 0,max = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	int j = 0;
//	for (j = 0; j <= max; j++)
//	{
//		int cont = 0;
//		for (i = 0; i < n; i++)
//		{
//			if (arr[i] == j)
//			{
//				cont++;
//			}
//		}
//		printf("%d\n", cont);
//	}
//	return 0;
//}

#include <stdio.h>
//1116最长平台
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d", &n);
	int arr[100000] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int cont = 0;
	int a[1000] = { 0 };
	for (i = 0; i < n-1; i++)
	{
		if (arr[i] == arr[i + 1])
			cont++;
		else
		{
			a[m] = cont;
			cont = 0;
			m++;
		}
	}
	int max = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	printf("%d", max+1);
	return 0;
}