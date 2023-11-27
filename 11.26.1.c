#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int i = 0;
//	int sum = 0;
//	while (sum < m)
//	{
//		sum += i;
//		i++;
//	}
//	printf("%d", i-1);
//	return  0;
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int i = 1;
//	double sum = 0.0;
//	while (sum < m)
//	{
//		sum += (double)1 / i;
//		i++;
//	}
//	printf("%d", i-1);
//	return 0;
//}

//#include <string.h>
//int main()
//{
////	int len = strlen("abcdef");//1.strlen求一个字符串的长度
////	printf("%d", len);//2.打印长度
//	printf("%d", strlen("abcdef"));
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d",43)));
//	return 0;
//}

//int is_leap_year(int y);//函数声明
//int main()
//{
//	int y = 0; 
//	scanf("%d", &y);
//	int r = is_leap_year(y);
//	if (r == 1)
//		printf("是闰年\n");
//	else
//		printf("不是闰年\n");
//	return 0;
//}
//int is_leap_year(int year)
//{
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//#include "add.h"//引用自己定义的头文件用双引号
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数调用
//	int r = Add(a, b);
//	printf("%d", r);
//	return 0;
//
//}

//#include <stdio.h>
////代码二
//void test()
//{
//	//static修饰局部变量
//	static int i = 1;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		test();
//	}
//	return 0;
//}

//extern int m;
//int main()
//{
//	printf("%d", m);
//	return 0;
//}
//#include <stdio.h>
//extern int Add(int x, int y);
//int  main()
//{
//	printf("%d", Add(2, 3));
//}


//int main()
//{
//	int i = 0;
//	char s[] = "I am a student";
//	char ch = 0;
//	while (s[i])
//	{
//		ch = s[i];
//		if (islower(ch))
//			ch -= 32;//把小写转为大写
//		putchar(ch);//打印字符
//		i++;
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <ctype.h>
//int main()
//{
//	int i = 0;
//	char s[] = "I am a student";
//	char ch = 0;
//	while (s[i])
//	{
//		ch = s[i];
//		if (islower(ch))
//			ch = toupper(ch);//把小写转为大写
//		putchar(ch);//打印字符
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	const char* str1 = "abcdef";
//	const char* str2 = "bbb";
//	if ((int)strlen(str2) - (int)strlen(str1) > 0)
//		printf("str2 > str1");
//	else
//		printf("str2 < str1");
//	return 0;
//}

//int main()
//{
//	char s[] = "hehe";
//	char s1[20] = { 0 };
//	strcpy(s1, s);
//	printf("%s\n", s1);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char s[50] = "hello ";
//	char s1[] = "world";
//	strcat(s, s1);
//	printf("%s\n", s);
//	return 0;
//}

//int main()
//{
//	char s[] = "hello ";
//	char s1[] = "world";
//	int r =	strcmp(s, s1);
//	if (r > 0)
//		printf("s大于s1");
//	else if (r < 0)
//		printf("s小于s1");
//	else
//		printf("s等于s1");
//	printf("\n%d", r);
//	return 0;
//}

/*int main()
{
	char s1[] = "hello world";
	char s2[20] = { 0 };
	strncpy(s2, s1, 5);
	printf("%s\n", s2);
	return 0;
}*/


//int  main()
//{
//	char s1[50] = "hello ";
//	char s2[] = "world";
//	strncat(s1, s2, 2);
//	printf("%s\n", s1);
//	return 0;
//}


//int main()
//{
//	char s1[] = "abcdefg";
//	char s2[] = "bcd";
//	char* r = strstr(s1, s2);
//	printf("%s\n", r);
//	return 0;
//}

//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = "zhangsan@163.com";
//	char arr2[50] = { 0 };
//	strcpy(arr2, arr);
//	const char* p = "@.";
//	char* s = NULL;
//	for (s = strtok(arr2, p); s != NULL; s = strtok(NULL, p))
//	{
//		printf("%s\n", s);
//	}
//	return 0;
//}

//#include <errno.h>
//#include <string.h>
//#include <stdio.h>
////我们打印⼀下0~10这些错误码对应的信息
//int main()
//{
//    int i = 0;
//    for (i = 0; i <= 10; i++)
//    {
//        printf("%s\n", strerror(i));
//    }
//    return 0;
//}
