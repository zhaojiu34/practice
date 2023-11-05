#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//
//	int arr[11000] = { 0 };
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int num = 0;
//	while (scanf("%d", &num) != EOF)
//	{
//		if (num > n|| num < 1)
//		{
//			printf("OUT OF RANGE\n");
//			continue;
//		}
//		else
//			printf("%d", arr[num]);
//		printf("\n");
//		
//	}
//	return 0;
//}

	/*int main()
	{
		int n = 0;
		scanf("%d", &n);


		int arr[11000] = { 0 };
		int i = 0;
		for (i = 1; i <= n; i++)
		{
			scanf("%d", &arr[i]);
		}
		int num = 0;
		while (scanf("%d", &num) != EOF)
		{
			int flag = 0;
			for (i = 1; i <= n; i++)
			{
				if (num == arr[i])
				{
					printf("%d\n", i);
					flag = 1;
					break;
				}
			}
			if (0 == flag)
				printf("NOT FOUND\n");
		}
		return 0;
	}
	*/

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//
//	int arr[11000] = { 0 };
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int num = 0;
//	while (scanf("%d", &num) != EOF)
//	{
//		int flag = 0;
//		for (i = n; i >= 1; i--)
//		{
//			if (num == arr[i])
//			{
//				printf("%d\n", i);
//				flag = 1;
//				break;
//			}
//		}
//		if (0 == flag)
//		{
//			printf("NOT FOUND\n");
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//		int n = 0;
//	scanf("%d", &n);
//	int arr[11000] = { 0 };
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int num = 0;
//	while (scanf("%d", &num) != EOF)
//	{
//		
//		if (num > 0)
//		{
//			if (num <= n)
//				printf("%d\n", arr[num]);
//			else
//				printf("OUT OF RANGE\n");
//		}
//		if (num < 0)
//		{
//			int flag = 0;
//			for (i = n; i >= 1; i--)
//			{
//				if (-num < n)
//				{
//					printf("%d\n", arr[n+num+1]);
//					flag = 1;
//					break;
//				}
//			}
//			if (0 == flag)
//				printf("OUT OF RANGE\n");
//		}
//	}
//	return 0;
//}
//更简便的形式
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[11000] = { 0 };
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int num = 0;
//	while (scanf("%d", &num) != EOF)
//	{
//
//		if ((num >= 1 && num <= n) || (-num >= 1 && -num <= n))
//		{
//			if (num > 0)
//			{
//				printf("%d\n", arr[num]);
//			}
//			else if (num < 0)
//			{
//				printf("%d\n", arr[num + 1 + n]);
//			}
//		}
//		else
//			printf("OUT OF RANGE\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//
//	int arr[11000] = { 0 };
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int num = 0;
//	while (scanf("%d", &num) != EOF) 
//	{
//		int flag = 0;
//		for (i = 1; i <= n; i++)
//		{
//			if (num == arr[i])
//			{
//				if (flag == 0)
//				{
//					printf("%d", i);
//					flag = 1;
//				}
//				else
//				{
//					printf(" %d", i);
//					flag = 1;
//				}
//			}
//
//		}
//
//		if (0 == flag)
//		{
//			printf("NOT FOUND");
//		}
//		
//		printf("\n");
//		
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[11000] = { 0 };
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int num1 = 0, num2 =0;
//	while (scanf("%d %d", &num1, &num2) != EOF)
//	{
//		int flag = 0;
//		if (num2 > num1)
//		{
//			int j = 0;
//			j = num1;
//			num1 = num2;
//			num2 = j;
//		}
//		if (num2 >= 1 && num1 <= n)
//		{
//			for (i = num2; i <= num1; i++)
//			{
//				if (flag == 0)
//				{
//					printf("%d", arr[i]);
//					flag = 1;
//				}
//				else
//					printf(" %d", arr[i]);
//
//			}
//			printf("\n");
//		}
//		else if (num2 > n || num1 < 1)
//		{
//			printf("OUT OF RANGE\n");
//		}
//		else if (num2 <= 1 && num1 >= n)
//		{
//			for (i = 1; i <= n; i++)
//			{
//				if (flag == 0)
//				{
//					printf("%d", arr[i]);
//					flag = 1;
//				}
//				else
//					printf(" %d", arr[i]);
//
//			}
//			printf("\n");
//		}
//		else if (num2 < 1 && num1 <= n)
//		{
//			for (i = 1; i <= num1; i++)
//			{
//				if (flag == 0)
//				{
//					printf("%d", arr[i]);
//					flag = 1;
//				}
//				else
//					printf(" %d", arr[i]);
//
//			}
//			printf("\n");
//		}
//		else if (num2 >= 1 && num1 > n)
//		{
//			for (i = num2; i <= n; i++)
//			{
//				if (flag == 0)
//				{
//					printf("%d", arr[i]);
//					flag = 1;
//				}
//				else
//					printf(" %d", arr[i]);
//
//			}printf("\n");
//		}
//		
//	}
//	//更简单的思路时比出大小后赋值，例如：num1 > n,num1 = n
//	return 0;
//}
//#include <stdio.h>
//#define MAX_SIZE 200
//
////实现如下
//int main1()
//{
//	int n;
//	scanf("%d", &n);
//	int aa[10009];
//	int i, k, j, l;
//	for (i = 1; i <= n; ++i)
//	{
//		scanf("%d", &aa[i]);
//	}
//	int a, b;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		if (b < a)
//		{
//			int temp;
//			temp = b;
//			b = a;
//			a = temp;
//		}
//		if (a > n || b < 1) printf("OUT OF RANGE");
//		if (b > n) b = n;
//		if (a < 1) a = 1;
//		int flag = 0;
//		for (j = a; j <= b; ++j)
//		{
//			if (flag == 0) printf("%d", aa[j]);
//			else printf(" %d", aa[j]);
//			flag = 1;
//		}
//		puts("");
//	}
//}


#include <stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	int m = 0;
	scanf("%d", &n);
	
	
	return 0;
}







































