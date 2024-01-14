#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	FILE* pf = fopen("date.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	 
//	//写文件
//	int i = 0;
//	for (i = 0; i < 26; i++)
//	{
//		fputc('a' + i, pf);
//		fputc('\n', pf);
//	}
//	
//	//关闭文件
//	fclose(pf);
//	
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("date.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//读文件
//	//一次只能读一个字符
//	int i = 0;
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//关闭文件
//	fclose(pf);
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("date1.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//写文件
//	fputs("abcdef", pf);
//	fputs("abcdef", pf);
//	fputs("abcdef", pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("date1.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//读文件
//	char arr[20] = { 0 };
//	fgets(arr, 10, pf);//从pf中读9个字符
//
//	fputs(arr, stdout);//将结果打印在屏幕上
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct Stu s = { "zhangsan",20,90.5f };
//
//	//打开文件
//	FILE* pf = fopen("date2.text", "w");
//	if (pf == NULL)
//	{
//		return 1;
//	}
//
//	//写文件
//	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;



//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct Stu s = {0 };
//
//	//打开文件
//	FILE* pf = fopen("date2.text", "r");
//	if (pf == NULL)
//	{
//		return 1;
//	}
//
//	//读文件
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//	fprintf(stdout, "%s %d %f", s.name, s.age, s.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct Stu s = { "zhangsan",20,90.5f };
//	FILE* pf = fopen("date3.txt", "wb");
//	if (pf == NULL)
//	{
//		return 1;
//	}
//
//	//写文件
//	fwrite(&s, sizeof(s), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct Stu s = { 0 };
//	FILE* pf = fopen("date3.txt", "rb");
//	if (pf == NULL)
//	{
//		return 1;
//	}
//
//	//读文件
//	fread(&s, sizeof(s), 1, pf);
//	printf("%s %d %.2f", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf=fopen("date1.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen->date1");
//		return 1;
//	}
//	FILE* p = fopen("date4.txt", "w");
//	if (p == NULL)
//	{
//		perror("fopen->date4.txt");
//		fclose(pf);
//		pf = NULL;
//		return 1;
//	}
//	//数据读写，拷贝
//	char  ch = 0;
//	while ((ch == fgetc(pf))!= EOF)
//	{
//		fputc(ch, p);
//	}
//	fclose(pf);
//	fclose(p);
//	pf = NULL;
//	p = NULL;
//}

#include<stdio.h>
#include <stdlib.h>
//int main()
//{
//	FILE* pf = fopen("example.txt", "wb");
//	fputs("This is an apple.", pf);
//	fseek(pf, 9, SEEK_SET);
//	fputs("sam", pf);
//	fclose(pf);
//	pf = NULL;
//}

//int main()
//{
//	FILE* pFile;
//	long size;
//	pFile = fopen("example.txt", "rb");
//	if (pFile == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	else
//	{
//		fseek(pFile, 0, SEEK_SET);
//		size = ftell(pFile);
//		fclose(pFile);
//		printf("Size of example.txt :%ld bytes.\n", size);
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	FILE* pf;
//	char buffer[27];
//
//	pf = fopen("example.txt", "w+");
//	for (n = 'A'; n <= 'Z'; n++)
//	{
//		fputc(n, pf);
//	}
//	rewind(pf);
//
//	fread(buffer, 1, 26, pf);
//	fclose(pf);
//
//	buffer[26] = '\0';
//	printf(buffer);
//	return 0;
//}

#include <stdio.h>
#include <windows.h>
int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//先将代码放在输出缓冲区
	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
	Sleep(10000);
	printf("刷新缓冲区\n");
	fflush(pf);//刷新缓冲时才把缓冲区的内容写到文件（磁盘）
	printf("再睡眠10秒-此时打开文件test.txt,文件有内容了\n");
	Sleep(10000);
	fclose(pf);
	pf = NULL;
	return 0;
}