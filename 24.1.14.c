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
//	//д�ļ�
//	int i = 0;
//	for (i = 0; i < 26; i++)
//	{
//		fputc('a' + i, pf);
//		fputc('\n', pf);
//	}
//	
//	//�ر��ļ�
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
//	//���ļ�
//	//һ��ֻ�ܶ�һ���ַ�
//	int i = 0;
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//�ر��ļ�
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
//	//д�ļ�
//	fputs("abcdef", pf);
//	fputs("abcdef", pf);
//	fputs("abcdef", pf);
//
//	//�ر��ļ�
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
//	//���ļ�
//	char arr[20] = { 0 };
//	fgets(arr, 10, pf);//��pf�ж�9���ַ�
//
//	fputs(arr, stdout);//�������ӡ����Ļ��
//
//	//�ر��ļ�
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
//	//���ļ�
//	FILE* pf = fopen("date2.text", "w");
//	if (pf == NULL)
//	{
//		return 1;
//	}
//
//	//д�ļ�
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
//	//���ļ�
//	FILE* pf = fopen("date2.text", "r");
//	if (pf == NULL)
//	{
//		return 1;
//	}
//
//	//���ļ�
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
//	//д�ļ�
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
//	//���ļ�
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
//	//���ݶ�д������
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
	fputs("abcdef", pf);//�Ƚ�����������������
	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
	Sleep(10000);
	printf("ˢ�»�����\n");
	fflush(pf);//ˢ�»���ʱ�Űѻ�����������д���ļ������̣�
	printf("��˯��10��-��ʱ���ļ�test.txt,�ļ���������\n");
	Sleep(10000);
	fclose(pf);
	pf = NULL;
	return 0;
}