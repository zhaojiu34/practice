#define _CRT_SECURE_NO_WARNINGS 1
////strlen������ģ��ʵ��
////����\0֮ǰ���ַ���
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
////ָ��-ָ��==ָ��֮���Ԫ�ظ���
//int my_strlen2(char* a)
//{
//	char* s = a;
//	while (*a)
//	{
//		a++;
//	}
//	return a - s;
//}
////�ݹ�
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

////strcpy������ģ��ʵ�֣������ַ���
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



////strcmp������ģ��ʵ�֣��ַ����ıȽ�
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
//		printf("����\n");
//	else if (r < 0)
//		printf("С��\n");
//	else
//		printf("����\n");
//	return 0;
//}

////strcat������ģ�⣺�ַ�����׷��
//char* my_strcat(char* s1, const char* s2)
//{
//	char* r = s1;
//	//�ҵ�s1�е�\0
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
//	//����++����ʹ�ú�Ӽ�
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
////ģ��ʵ��strstr��������һ���ַ������ҵ���һ���ַ���
//#include<stdio.h>
//char* my_strstr(const char* s1, const char* s2)
//{
//	const char* star = s1;
//	const char* a1 =NULL;
//	const char* a2 = NULL;
//	//starΪ�����ַ�����ʼƥ��ĵط�
//	while (*star)
//	{
//		if (*s2 == '\0')
//			return (char*)s1;
//		while (*star)
//		{
//			//��������a1,a2��������ƥ��ʱ���������ȫƥ�䣬�����ַ��������Իص���ʼ�㣬ƥ����ټӼӣ�����ƥ��		
//			a1 = star;
//			a2 = s2;
//			//a1��a2�������ַ�����õ�ֵ��ȣ�������ֵ����Ϊ'\0'ʱ
//			while (*a1 == *a2 && *a1 && *a2)
//			{
//				a1++;
//				a2++;
//			}
//			//����ѭ��������ƥ�䵽һ�룬�����˻����ҵ���
//			//�ҵ������������������a1��a2������ˣ����������ַ���ƥ�䵽��ֹ���ˣ������¾�Խ��ʱ
//			//���a2�����ַ�����ֹ�������ҵ��ˣ�����ƥ����ʼ��
//			if (*a2 == '\0')
//			{
//				return (char*)star;
//			}
//			//���a2����'\0',���ƥ����ʼ�㲻�ԣ���������
//			star++;
//			
//		}
//		//�������ѭ���ˣ���ʾ����s1����û�ҵ�s2���ַ���
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
//		printf("�ҵ���:%s\n",r);
//	}
//	else
//		printf("û�ҵ�\n");
//	return 0;
//	
//}

////�жϴ�С��
//#include <stdio.h>
//int main()
//{
//	int r = 1;//0x 00 00 00 01
//	if (*(char*)&r == 1)
//	{
//		printf("С��\n");
//	}
//	else
//		printf("��� \n");
//	return 0;
//}

//
////ģ��strncpy����
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
////strcat������ģ�⣺�ַ�����׷��
//char* my_strncat(char* s1, const char* s2,int num)
//{
//	char* r = s1;
//	//�ҵ�s1�е�\0
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
////ģ��ʵ��memcopy:�����κ���ʽ����������
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

//ģ��ʵ��mommove�����������ص����ڴ�
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



