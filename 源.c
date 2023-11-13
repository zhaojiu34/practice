#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 1; i <= n; i++)
//    {
//        int t = 0, num = i;
//        while (num)
//        {
//            t = t * 10 + num % 10;
//            num = num / 10;
//        }
//        if (t == i)
//        {
//            printf("%d\n", i);
//        }
//    }
//	return 0;
//}
//int main()
//{
//    int n = 0, x = 0;
//    scanf("%d", &n);
//    int arr[101] = { 0 };
//    int cont = 0, i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    scanf("%d", &x);
//    for (i = 0; i < n; i++)
//    {
//        if (x == arr[i])
//        {
//            cont++;
//        }
//    }
//    printf("%d", cont);
//    return 0;
//}
//int func(int num)
//{
//    if (num == 2)
//        return 2;
//    else if (num == 1)
//        return 1;
//    else
//        return func(num - 1) + func(num - 2);
//
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int r = func(n);
//    printf("%d", r);
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//long long factorial(int n);
//
//int main() {
//
//    int n;
//    cin >> n;
//
//    cout << factorial(n) << endl;
//
//    return 0;
//}
//
//long long factorial(int n) {
//
//    if (n == 1 || n == 0)
//        return 1;
//    else
//        return n * factorial(n - 1);
//
//
//}
//int sum(int num)
//{
//    if (num == 1)
//        return 1;
//    else
//        return num + sum(num - 1);
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int r = sum(n);
//    printf("%d", r);
//    return 0;
//}
//long long Ackmann(long long n, long long m)
//{
//    if (0 == m)
//        return n + 1;
//    else if (m > 0 && 0 == n)
//        return Ackmann(m, 1);
//    else if (m > 0 && n > 0)
//        return Ackmann(m - 1, Ackmann(m, n - 1));
//}
//int main()
//{
//    long long n = 0, m = 0;
//    scanf("%lld %lld", &n, &m);
//    long long r = Ackmann(n, m);
//    printf("%lld", r);
//    return 0;
//}
//void digit(int n, int i)
//{
//    if (n < 9)
//        printf("%d", n);
//    else
//    {
//        while (i)
//        {
//            digit(n / 10, i--);
//
//        }
//        printf("%d", n % 10);
//    }
//}
//
//int main()
//{
//    int x = 0, i = 0;
//    scanf("%d %d", &x, &i);
//    return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[3]);//4
//	printf("%d\n", arr[7]);//8
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//下标是0~9
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)//产生0~9的数字
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = {0};//先初始化
//	//下标是0~9
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);//输入9个数字，下标是0~9
//	}
//	for (i = 0; i < 10; i++)//产生0~9的数字
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for(i= 0; i< 10 ;i++)
//	printf("%p\n", &arr[i]);//p表示打印地址，在后面文章会详细讲解
//	//暂且记住，p为打印地址，&为取地址符号，此处为取数组中每个元素的地址
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%zd", sizeof(arr));//sizeof的类型是size_t
//	//用zd打印
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("\n%d", sz);
//	return 0;
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	printf("%d", arr[1][0]);
//	return 0;
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	int i = 0;
//	for (i = 0; i < 3; i++)//产生行号
//	{
//		int j = 0;//产生列号
//		for (j = 0; j < 5; j++)
//		{
//			printf("%p\n",&arr[i][j]);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	//刚开始的时候先打印arr2，然后arr1两端同时先替换arr2
//	//一个#,在同时替换两个，依此类推
//	char arr1[] = "welcome to Chian!";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	//right = sizeof(arr1)-2;
//	printf("%s\n", arr2);
//	while (left <= right)
//	{
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		system("cls");
//	}
//	printf("%s\n", arr2);
//
//
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 0;
//	int cont = 0;
//	scanf("%d", &key);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		cont++;
//		if (arr[i] == key)
//		{
//			printf("找到了，下标是%d\n", key);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//	printf("%d\n", cont);
//	return 0;
//}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	int mid = 0;
	int find = 0;
	int key = 7,cont = 0;
	while (left <= right)
	{
		cont++;
		mid = (left + right) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			find = 1;
			break;
		}
	}
	if (1 == find)
	{
		printf("找到了，是%d\n", key);
	}
	else
		printf("找不到\n");
	printf("%d\n", cont);
	return 0;
}