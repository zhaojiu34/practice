#define _CRT_SECURE_NO_WARNINGS 1
//#include <math.h>
////2036开关门
//int main()
//{
//	int arr[101] = {0};
//	int i = 0,n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int k = (int)sqrt(i);
//		if (k * k == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	
//	return 0;
//}

////2039冒泡排序
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[21] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		int cont=0;
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				cont++;
//			}
//		}
//		if (cont == 0)
//			break;
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

////2040筛选法找质数
//int main()
//{
//	int arr[200] = {2,3,5,7,11,13,17,19,23,29,
//31,37,41,43,47,53,59,61,67,71,
//73,79,83,89,97,101,103,107,109,113,
//127,131,137,139,149,151,157,163,167,173,
//179,181,191,193,197,199,211,223,227,229,
//233,239,241,251,257,263,269,271,277,281,
//283,293,307,311,313,317,331,337,347,349,
//353,359,367,373,379,383,389,397,401,409,
//419,421,431,433,439,443,449,457,461,463,
//467,479,487,491,499,503,509,521,523,541,
//547,557,563,569,571,577,587,593,599,601,
//607,613,617,619,631,641,643,647,653,659,
//661,673,677,683,691,701,709,719,727,733,
//739,743,751,757,761,769,773,787,797,809,
//811,821,823,827,829,839,853,857,859,863,
//877,881,883,887,907,911,919,929,937,941,
//947,953,967,971,977,983,991,997};
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; ; i++)
//	{
//		if (arr[i] <= n)
//		{
//			printf("%d\n", arr[i]);
//		}
//		else
//			break;
//	}
//	return 0;
//}

//1107校门外的树
//int main()
//{
//	int arr[200] = { 0 };
//	int l = 0,m = 0;
//	scanf("%d %d", &l, &m);
//	int i = 0;
//	int  n = m;
//	for (i = 0; i < (2*m); i+=2)
//	{
//		scanf("%d %d", &arr[i], &arr[i+1]);
//	}
//	for (i = 0; i < 2 * m; i += 2)
//	{
//		int j = 0;
//		for (j = i + 2; j < 2 * m; j += 2)
//		{
//			if (arr[i] < arr[j] && arr[j] < arr[i + 1] && arr[i + 1] < arr[j + 1])
//			{
//				arr[j] = 0;
//				arr[i + 1] = 0;
//				n--;
//			}
//			if (arr[j] < arr[i] && arr[i] < arr[j + 1] && arr[j + 1] < arr[i+1])
//			{
//				arr[i] = 0;
//				arr[j + 1] = 0;
//				n--;
//			}
//			if (arr[i] < arr[j] && arr[j] < arr[j + 1] && arr[j + 1] < arr[i+1])
//			{
//				arr[j] = 0;
//				arr[j + 1] = 0;
//				n--;
//			}
//			if (arr[j] < arr[i] && arr[i] < arr[i + 1] && arr[i + 1] < arr[j + 1])
//			{
//				arr[i] = 0;
//				arr[i + 1] = 0;
//				n--;
//			}
//		}
//	}
//	for (i = 0; i < 2 * m; i++)
//	{
//		int flag = 1;
//		if (i % 2 != 0)
//			flag= -1;
//		l += flag * arr[i];
//	}
//	printf("%d", l - n+1);
//	return 0;
//}

////1108向量点积计算
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a[1002] = { 0 };
//	int b[1002] = { 0 };
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &b[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		sum +=a[i]*b[i];
//	}
//	printf("%d", sum);
//
//	return 0;
//}

#include <stdio.h>
#include <math.h>
//1109开关灯
int main()
{
	int n = 0, m =0;
	scanf("%d %d", &n, &m);
	int i = 0,cont = 0;
	int arr[1000] = { 0 };
	if (m == n)
	{
		for (i = 1; i <= n; i++)
		{
			int k = (int)sqrt(i);
			if (k * k == i)
			{
				arr[i] = 0;
			}
		}
	}
	else
	{
		for (i = 2; i <=m; i++)
		{
			int j = 0;
			for (j = 1; j <=n ; j++)
			{
				if (j % i == 0)
				{
					if (arr[j] == 1)
						arr[j] = 0;
					else
						arr[j] = 1;
				}
			}
		}
	}
	int c= 0;
	for (i = 1; i <=n; i++)
	{
		if (arr[i] == 0)
		{
			if (c == 0)
			{
				printf("%d", i);
				c++;
			}
			else
				printf(",%d", i);
		}
	}
	return 0;
}