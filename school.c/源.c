#define _CRT_SECURE_NO_WARNINGS 1
//int sum(int n)
//{
//	int j = 0;
//	if (n == 1)
//		return 1;
//	else
//	{
//		int a = 1, b = 1, c =0;
//		for(j = 2; j<= n;j++)
//		{
//			c = a + b;
//			a = b; b = c;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int i = 0, n = 0;
//	scanf("%d", &n);
//	while (n--)
//	{
//		scanf("%d", &i);
//		printf("%d\n", sum(i));
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[1100] = { 0 };
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &arr[i]);
//		
//	}
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = i + 1; j <= n; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				int c = 0;
//				c = arr[i];
//				arr[i] = arr[j];
//				arr[j] = c;
//			}
//
//		}
//	}
//	for (i = 1; i <= n; i++)
//	{
//
//		if (1 == i)
//		{
//			printf("%d", arr[1]);
//		}
//		else
//			printf(" %d", arr[i]);
//	}
//	
//	
//	return 0;
//}
//int map[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//int  leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0, j = 0;
//	int year = 0, month = 0, day = 0;
//	int num = 0;
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d-%d-%d", &year, &month, &day);
//		if (leap_year(year))
//			map[2] = 29;
//		if (month < 1 || month > 12 || day <1 || day > map[month])
//			printf("error date!\n");
//		else
//		{
//			num = 0;
//			for (j = 1; j < month; j++)
//			{
//				num += map[j];
//			}
//			num += day;
//			printf("%d\n", num);
//		}
//		map[2] = 28;
//	}
//	
//
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//    int m, n, i, j, k = 0, flag = 0;
//    int a[500005] = { 0 };
//    int b[500005] = { 0 };
//    while (scanf("%d%d", &m, &n)!=EOF)
//    {
//        for (i = 1; i <= n - m + 1; i++)
//            a[i] = i + m - 1;
//        for (i = 1; i <= n - m + 1; i++)
//        {
//            if (a[i] % 2 == 0 && a[i] != 2)
//                a[i] = 1;
//            if (a[i] == 1)
//                continue;
//            for (j = 3; j * j <= a[i]; j += 2)
//            {
//                if (a[i] % j == 0)
//                {
//                    flag = 1;
//                    a[i] = 1;
//                    break;
//                }
//            }
//            if (flag == 1)
//            {
//                flag = 0;
//                continue;
//            }
//            k++;
//            b[k] = a[i];
//            for (j = i + 1; j <= n - m + 1; j++)
//            {
//                if (a[j] == 1)
//                    continue;
//                if (a[j] % a[i] == 0)
//                    a[j] = 1;
//            }
//        }
//        for (i = 1; i <= k; i++)
//            printf("%d\n", b[i]);
//        if (k == 0)
//            printf("\n");
//        printf("\n");
//        flag = 0;
//        k = 0;
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0, max = 0, j = 0;
//	int arr[200000] = { 0 };
//	for(i = 1; i <=n; i++)
//	{
//		scanf("%d", &j);//输入的数值
//		arr[j]++;//输入相同的数，对应下标的数加一
//		if (arr[j] > max)//初始数都一样，谁的次数多，谁的数据大
//		{
//			//且初始为零，数的大小就是出现的次数
//			max = arr[j];
//		}
//	}
//	printf("%d", max);
//	
//
//	return 0;
//}


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int i = 0;
	char c = '0';
	int big = 0, small = 0, all = 0;
	int digit = 0, space = 0, punct = 0;
	int chat[27] = { 0 };
	while ((c = getchar()) != EOF)
	{
		
		all++;
		if (islower(c))
		{
			small++;
			chat[c - 96]++;
		}
		else if (isupper(c))
		{
			big++;
			chat[c - 64]++;
		}
		else if (isdigit(c))
		{
			digit++;
		}
		else if (isspace(c))
		{
			space++;
		}
		else if (ispunct(c))
		{
			punct++;
		}
	}
	printf("All Characters : %d\n",all);
	printf("Lowers : %d\n",small);
	printf("Uppers : %d\n",big);
	printf("Digits : %d\n",digit);
	printf("Spaces : %d\n",space);
	printf("Puncts : %d\n",punct);
	for (i = 1; i <= 26; i++)
	{
		printf("%c : %d\n",i+64, chat[i]);
	}

	return 0;
}











































