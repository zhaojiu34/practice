#define _CRT_SECURE_NO_WARNINGS 1
#/*include<stdio.h>

#include <stdio.h>
#include <string.h>

	int is_left_move(char* str1, char* str2) 
	{
		int len1 = strlen(str1);
		int len2 = strlen(str2);
		if (len1 != len2) {
			return 0;
		}
		strncat(str1, str1, len1);
		char* ret = strstr(str1, str2);
		if (ret == NULL) {
			return 0;
		}
		else {
			return 1;
		}
	}
	int main() {
		char arr1[30] = "abcdef";
		char arr2[] = "cdefaf";
		int ret = is_left_move(arr1, arr2);
		if (ret == 1) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
		return 0;
	}*/
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int cont = 0;
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				cont++;
//			}
//		}
//		if (cont == 1)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}
//#define max 3
//int find(int arr[max][max], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;//每一行的最后一个数字是最大的，先和最大的对比
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;//先找到哪一行
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;//再找在哪一列
//		}
//		else
//		{
//			 *px = x;
//			 *py = y;//如果有x和y的坐标
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[max][max] = { {1,2,3},{4,5,6},{7,8,9} };
//	int x = 3, y = 3;
//	int k = 0;
//	printf("请输入要查找的数：");
//	scanf("%d", &k);
//	int r = find(arr,k,&x,&y);
//	if (1 == r)
//	{
//		printf("找到了，坐标是%d %d\n", x, y);
//	}
//	else
//		printf("没找到\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0, fd = 0;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		if (i == 0)//假设a说的就是假话
//		{
//			a = 1; c = 1; d = 0; fd = 1;
//		}
//		if (i == 1)//假设b说的是假话
//		{
//			a = 0; c = 0; d = 0; fd = 1;
//		}
//		if (i == 2)//假设c说的是假话
//		{
//			a = 0; c = 1; d = 0; fd = 0;
//		}
//		if (i == 3)//假设d说的是假话
//		{
//			a = 0; c = 1; d = 1; fd = 0;
//		}
//		if ((a + b + c + d + fd == 1) && (fd == 0))//锁定唯一的凶手
//		{
//			printf("A是%d,B是%d,c是%d,d是%d\n", a, b, c, d);//这里结果为1的那个人就是凶手
//		}
//	}
//	return 0;
//}
#include<stdio.h>
int compar(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}
void swap(const void* p3, const void* p4, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		char* tmp = *((char *)p3+i);
		*((char*)p3+i) = *((char*)p4+i);
		*((char*)p4+i) = tmp;
		

	}
}
void P(void * base, int num, int size, int compar(const void*,const void*))
{
	int i = 0;
	for (i = 0; i < num-1; i++)
	{
		//一趟
		int j = 0;
		//一趟冒泡排序的全过程
		for (j = 0; j < num - 1; j++)
		{
			if (compar((char *) base+size*j, (char*)base+ size * (j+1)) > 0)
			{
				swap((char*)base + size * j, (char*)base + size * (j + 1), size);
			}
		}
	}

}
int main()
{
	int arr[10] = { 1,3,2,6,5,4,7,9,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	P(arr, sz, sizeof(arr[0]), compar);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;

}