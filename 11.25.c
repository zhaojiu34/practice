#define _CRT_SECURE_NO_WARNINGS 1
////strlen函数的模拟实现
////数在\0之前的字符数
//int my_strlen1(char* a)
//{
//	int cont = 0;
//	while (*a)
//	{
//		a++;
//		cont++;
//	}
//	return cont;
//}
////指针-指针==指针之间的元素个数
//int my_strlen2(char* a)
//{
//	char* s = a;
//	while (*a)
//	{
//		a++;
//	}
//	return a - s;
//}
////递归
//int my_strlen3(char* a)
//{
//	if (*a == '\0')
//	{
//		return 0;
//	}
//	else
//		return 1 + my_strlen3(a + 1);
//}
//int main()
//{
//	char arr[] = "hello";
//	int r1 = my_strlen1(arr);
//	int r2 = my_strlen2(arr);
//	int r3 = my_strlen3(arr);
//	printf("%d\n", r1);
//	printf("%d\n", r2);
//	printf("%d\n", r3);
//
//	return  0;
//}

////strcpy函数的模拟实现：拷贝字符串
//char* my_strcpy(char* dest, const char* src)
//{
//	char* r = dest;
//	while (*src)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	return r;
//}
//int main()
//{
//	char a[20] = { 0 };
//	char s[] = "hello world";
//	char* arr = my_strcpy(a,s);
//	printf("%s\n", arr);
//	return 0;
//}



////strcmp函数的模拟实现：字符串的比较
//int my_strcmp(const char* s1, const char* s2)
//{
//	while (*s1 == *s2)
//	{
//		s1++;
//		s2++;
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//	}
//	if (*s1 > *s2)
//		return 1;
//	else
//		return -1;
//}
//int main()
//{
//	char a[] = "abcdefg";
//	char s[] = "abcdefg";
//	int r = my_strcmp(a, s);
//	if (r > 0)
//		printf("大于\n");
//	else if (r < 0)
//		printf("小于\n");
//	else
//		printf("等于\n");
//	return 0;
//}

////strcat函数的模拟：字符串的追加
//char* my_strcat(char* s1, const char* s2)
//{
//	char* r = s1;
//	//找到s1中的\0
//	while (*s1)
//	{
//		s1++;
//	}
//	/*while (*s2)
//	{
//		*s1 = *s2;
//		s1++;
//		s2++;
//	}*/
//	//后置++，先使用后加加
//	while (*(s1++) = *(s2++))
//		;
//	return r;
//}
//int main()
//{
//	char s[20] = "hello ";
//	char a[] = "world";
//	char* r = my_strcat(s, a);
//	printf("%s\n", r);
//	return 0;
//}


//
////模拟实现strstr函数：在一个字符串中找到另一个字符串
//#include<stdio.h>
//char* my_strstr(const char* s1, const char* s2)
//{
//	const char* star = s1;
//	const char* a1 =NULL;
//	const char* a2 = NULL;
//	//star为两个字符串开始匹配的地方
//	while (*star)
//	{
//		if (*s2 == '\0')
//			return (char*)s1;
//		while (*star)
//		{
//			//创建变量a1,a2，便于在匹配时，如果不完全匹配，两个字符串均可以回到起始点，匹配点再加加，重新匹配		
//			a1 = star;
//			a2 = s2;
//			//a1和a2的所存地址解引用的值相等，且两个值均不为'\0'时
//			while (*a1 == *a2 && *a1 && *a2)
//			{
//				a1++;
//				a2++;
//			}
//			//跳出循环可能是匹配到一半，不行了或者找到了
//			//找到有两种情况：可能是a1和a2不相等了，或者两个字符串匹配到终止符了，再往下就越界时
//			//如果a2到了字符串终止符，则找到了，传回匹配起始点
//			if (*a2 == '\0')
//			{
//				return (char*)star;
//			}
//			//如果a2不是'\0',则该匹配起始点不对，再往后找
//			star++;
//			
//		}
//		//如果出大循环了，表示遍历s1，都没找到s2的字符串
//		return NULL;
//	}
//
//}
//int main()
//{
//	char str1[] = "abcdefg";
//	char  str2[] = "dej";
//	char* r = my_strstr(str1, str2);
//	if (r != NULL)
//	{
//		printf("找到了:%s\n",r);
//	}
//	else
//		printf("没找到\n");
//	return 0;
//	
//}

////判断大小端
//#include <stdio.h>
//int main()
//{
//	int r = 1;//0x 00 00 00 01
//	if (*(char*)&r == 1)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端 \n");
//	return 0;
//}

//
////模拟strncpy函数
//#include<stdio.h>
//char* my_strncpy(char* str1, const char* str2, int num)
//{
//	int* star = str1;
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	return star;
//}
//int main()
//{
//	char s1[20] = { 0 };
//	char s2[] = "hello world";
//	char* r = my_strncpy(s1, s2, 2);
//	printf("%s\n", r);
//}


//#include<stdio.h>
////strcat函数的模拟：字符串的追加
//char* my_strncat(char* s1, const char* s2,int num)
//{
//	char* r = s1;
//	//找到s1中的\0
//	while (*s1)
//	{
//		s1++;
//	}
//	int i = 0;
//	for (i = 0; i < num; i++) 
//	{
//		*s1 = *s2;
//		s1++;
//		s2++;
//	}
//	return r;
//}
//int main()
//{
//	char s[20] = "hello ";
//	char a[] = "world";
//	char* r = my_strncat(s, a,3);
//	printf("%s\n", r);
//	return 0;
//}

//
////模拟实现memcopy:拷贝任何形式的数据类型
//#include <stdio.h>
//void* my_memcpy(void* str1, void* str2, int n)
//{
//	void* r = str1;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		*(char*)str1 = *(char*)str2;
//		str1 = (char*)str1+1;
//		str2 = (char*)str2 + 1;
//	}
//	return r;
//}
//int main()
//{
//	char s1[50] = { 0 };
//	char s2[] = "hello world";
//	int num = sizeof(s2);
//	void* r = my_memcpy(s1, s2, num);
//	printf("%s\n", (char*)r);
//	return 0;
//}

//模拟实现mommove函数：拷贝重叠的内存
void* mommove(void* dest, void* src, int n)
{
	void* r = dest;
	if (dest <= src)
	{
		while (n--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest+1;
			src = (char*)src+1;
		}
	}
	else
	{
		dest = (char*)dest + n -1;
		src = (char*)src + n-1;
		while (n--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest - 1;
			src = (char*)src - 1;

		}
	}
	return r;
}
#include<stdio.h>
int main()
{
	int  arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	mommove(arr+2, arr, 20);
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}



