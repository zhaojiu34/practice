#define _CRT_SECURE_NO_WARNINGS 1
//void Print(int arr,int sz)
//{
//	int i = 0;
//	int* pa = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(pa + i));
//	}
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr,sz);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,5,4,6,9,7,3,2,10,8 };
//	int  i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			int tmp = 0;
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] % 2 == 0 && arr[j + 1] % 2 != 0)
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}
//int main() 
//{
//int  n = 0;
//scanf("%d", &n);
//int i = 0;
//for (i = 0; i < n; i++)
//{
//    printf("Happy new year!Good luck!\n");
//}
//return 0;
//}
#include<stdio.h>
//int main()
//{
//    long long n = 0;
//    scanf("%lld", &n);
//    long long i = 0;
//    long long sum = 0;
//    for (i = 1; i <= n; i++)
//    {
//        sum = sum + i;
//    }
//    printf("%lld", sum);
//    return 0;
//}
//int main()
//{
//    int i = 100;
//    int cont = 0;
//    for (i = 100; i <= 999; i++)
//    {
//        int flag = 1;
//        int j = 0;
//        for (j = 2; j < i; j++)
//        {
//            if (i % j == 0)
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (1 == flag)
//        {
//            cont++;
//        }
//    }
//    printf("%d", cont);
//    return 0;
//}
//int main()
//{
//    int i = 0, j = 0;
//    for (i = 1; i <= 9; i++)
//    {
//        for (j = 1; j <= i; j++)
//        {
//            printf("%d*%d= %2d ", j, i, i * j);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int sum = 0, sum1 = 0, sum2 = 0;
//    for (i = 0; i <= n; i += 2)
//    {
//        sum2 += -i;
//    }
//    for (i = 1; i <= n; i += 2)
//    {
//        sum1 += i;
//    }
//    sum = sum1 + sum2;
//    printf("%d", sum);
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    double sum = 0;
//    for (i = 1; i <= n; i++)
//    {
//        sum = sum + (double)1 / i;
//    }
//    printf("%.6lf", sum);
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    float sum = 0.0, sum1 = 0.0, sum2 = 0.0;
//    int i = 0;
//    for (i = 2; i <= n; i += 2)
//    {
//        sum1 += (double)-1 / i;
//    }
//    for (i = 1; i <= n; i += 2)
//    {
//        sum2 += (double)1 / i;
//    }
//    printf("%.3f", sum1 + sum2);
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int sum1 = 0, sum = 0;
//    for (i = 1; i <= n; i++)
//    {
//        sum1 += i;
//        sum += sum1;
//    }
//    printf("%d", sum);
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0, sum = 0;
//    while (n)
//    {
//        int a = 0;
//        a = n % 10;
//        n = n / 10;
//        sum += a;
//    }
//    printf("%d", sum);
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int cont = 0;
//    while (n != 1)
//    {
//        if (n % 2 == 0)
//        {
//            n = n / 2;
//        }
//        else {
//            n = n * 3 + 1;
//        }
//        cont++;
//    }
//    printf("%d", cont);
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int m = 0, c = 0, e = 0;
//    int cont = 0;
//    while (n)
//    {
//        scanf("%d %d %d", &m, &c, &e);
//        int ave = 0;
//        ave = (m + c + e) / 3;
//        if (ave < 60)
//        {
//            cont++;
//        }
//        n--;
//    }
//    printf("%d", cont);
//    return 0;
//}
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//    int m = 0, n = 0;
//    while (scanf("%d %d", &m, &n) != EOF)
//    {
//        int i = 0;
//        int cont = 0;
//        for (i = m; i <= n; i++)
//        {
//            int a = 0;
//            a = pow(i % 10, 3) + pow(i / 10 % 10, 3) + pow(i / 100, 3);
//            if (a == i)
//            {
//                printf("%d ", i);
//                cont++;
//            }
//        }
//        if (0 == cont)
//        {
//            printf("no");
//        }
//    }
//    return 0;
//}

//void print(int n)
//{
//    if (n > 5)
//    {
//        print(n / 6);
//    }
//    printf("%d", n % 6);
//}
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    print(num);
//    return 0;
//}
























