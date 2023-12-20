#define _CRT_SECURE_NO_WARNINGS 1
////使用联合体判断大小端
//int check_sys()
//{
//	union {
//		char c;
//		int n;
//	}s;
//	s.n = 1;
//	return s.c;
//}
//int main()
//{
//	int r = check_sys();
//	if (r == 1)
//		printf("是小端");
//	else
//		printf("是大端");
//	return 0;
//}


////2046替换字母
//int main()
//{
//	char s[205] = {'A'};
//	int i = 0;
//	gets(s);
//	char ch1='A', ch2='A';
//	scanf("%c %c", &ch1, &ch2);
//	int len = strlen(s);
//	for (i = 0; i < len; i++)
//	{
//		if (s[i]==ch1) 
//			s[i] = ch2;
//	}
//	puts(s);
//	return 0;
//}


////2047过滤空格（编译错误）
//int main()
//{
//	char s[205] = { 0 };
//	gets(s);
//	int cont = 0;
//	int sz = sizeof(s);
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		if (s[i] == ' ')
//		{
//			if (s[i + 1] != ' ')
//				printf(" ");
//		}
//		else
//			printf("%c", s[i]);
//	}
//	return 0;
//}


////1129统计数字字符串的个数(编译错误)
//int main()
//{
//	char s[300] = { 0 };
//	gets(s);
//	int i = 0, cont = 0;
//	int len = sizeof(s);
//	for (i = 0; i < len - 1; i++)
//	{
//		if (isdigit(s[i]))
//		{
//			cont++;
//		}
//	}
//	printf("%d", cont);
//	return 0;
//}


////1130找到第一个只出现一次的字符(编译错误)
//int main()
//{
//	char s[100000] = { 0 };
//	gets(s);
//	int i = 0, j = 0,flag =1;
//	int sz = strlen(s);
//	for (i = 0; i < sz; i++)
//	{
//		int cont = 0;
//		for (int j = 0; j < sz ; j++)
//		{
//			if (s[i] == s[j])
//				cont++;
//		}
//		if (cont == 1)
//		{
//			printf("%c", s[i]);
//			flag = 0;
//			break;
//		}
//	}
//	if (flag == 1)
//		printf("no");
//	return 0;
//}

#include <stdio.h>
#include<ctype.h>
#include <string.h>
int main()
{
	double n = 0.0;
	scanf("%lf", &n);
	char s1[55] = { 0 }, s2[55] = { 0 };
	int i = 0, cont = 0;
	scanf("%s %s", s1, s2);
	int sz = strlen(s1);
	for (i = 0; i < sz; i++)
	{
		if (s1[i] == s2[i])
			cont++;
	}
	double ave = 0.0;
	ave = (double)cont / (double)sz;
	if (ave >= n)
		printf("yes");
	else
		printf("no");
	return 0;
}
