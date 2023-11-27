#define _CRT_SECURE_NO_WARNINGS 1

//void set_arr(int arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		arr[i] = -1;//把数组所以内容置换成-1
//	}
//}
//void print_arr(int arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	set_arr(arr,sz);
//	print_arr(arr,sz);
//	return 0;
//}
#include<stdio.h>
//判断闰年
int  is_leap_year(int y)
{
	if (((y % 4 == 0) && (y % 100 != 0)) || y % 400 == 0)
		return 1;
	else
		return 0;
}
int   get_days_of_month(int month,int y)
{
	int arr[13] = { 0,31,28,31,30,31,30,31,31,30,30,31,30 };
	int day = arr[month];
	if (is_leap_year (y)&& month == 2)
	{
		day += 1;
	}
	return day;
}

int main()
{
	int year = 0,month = 0;
	scanf("%d %d", &year, &month);
	is_leap_year(year);
	int r = get_days_of_month(month, year);
	printf("%d", r);
	return 0;
}