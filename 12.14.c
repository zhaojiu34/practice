#define _CRT_SECURE_NO_WARNINGS 1
////2037Լɪ������
//int main()
//{
//	int arr[1005] = { 0 };//����һ�����飬���⼸���˶����������У���������
//	int n = 0, m = 0;
//	scanf("%d %d", &n, &m);
//	//arr��Ӧ�±��е�ֵ�����ʾ��δ���У�1��ʾ�ѳ���
//	int num = n;//ÿ��һ���ˣ�������-1��֪��num = 0
//	int i = 0;
//	int s = 0;//ͳ�Ʊ���
//	while (num)
//	{
//		i++;
//		if (i > n)
//			i = 1;//������n���������±���1~n������nʱ���ӿ�ʼ����
//		if (arr[i] == 0)//��ʾδ����
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

////1107У�������
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

////1109���ص�
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
//				arr[j] = !arr[j];//ȡ���߼�
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

////2036������
//int main()
//{
//	int arr[1005] = { 0 };//0��ʾ���ţ�������ǰ��2037��1107����һ��
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	//���ʼ��0Ϊ���ţ��൱�ڵ�һ������Ա�Ѿ������ˣ�����Աֱ�Ӵӵڶ�����ʼ������
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

////1110�����ض�ֵ
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

////1111�����˵Ľ��
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

////1113�����������ͬ������֮��
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
////1114��ϸ������
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

////1115ֱ��ͼ
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
//1116�ƽ̨
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