#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int a = 0x11223344;
//	return 0;
//}

////�ж��ֽ���
//int check_system1()
//{
//	int i = 1;
//	return *((char*)&i);
//	//ȡ��i�ĵ�ַ������ת����char*���͵ĵ�ַ���ٽ�����
//	//ȡ�͵�ַ���ĵ�һ���ֽڣ�1��16������00 00 00 01�����Դ��淽ʽ��ͬ���͵�ַ�ĵ�һ���ֽھͲ�ͬ 
//	//���ȼ���int i = 1;
//	//      (char)i;
//	//����дiһֱ��1����ʲô��û�й�ϵ
//	
//}
//int check_system2()
//{
//	union
//	{
//		int i;
//		char ch;
//	}un;
//	un.i = 1;
//	return un.ch;
//}
//int main()
//{
//	int ret = check_system2();
//	if (ret == 1)
//		printf("��С�˴洢\n");
//	else
//		printf("�Ǵ�˴洢\n");
//}

//int main()
//{
//	int num = 10;
//	int n = num << 1;
//	printf("%d\n", n);
//	printf("%d\n", num);
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	int n = num >> 1;
//	printf("%d\n", n);
//	printf("%d\n", num);
//}

#include <stdio.h>
//int main()
//{
//	int num1 = -3;
//	int num2 = 5;
//	printf("%d\n", num1 & num2);
//	printf("%d\n", num1 | num2);
//	printf("%d\n", num1 ^ num2);
//	printf("%d\n", ~0);
//	return 0;
//}

////Ҳ�����˻��뵽�����ְ취
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	return 0;
//}

//int main()
//{
//	int a = 10, b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int n = 1;
//	int i = 0, cont = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((a >> i) & n == 1)
//			cont++;
//	}
//	printf("%d\n", cont);
//	return 0;
//}

//int cont_one_bit(unsigned int n)
//{
//	int cont = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			cont++;
//		n /= 2;
//	}
//	return cont;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int r = cont_one_bit(a);
//	printf("%d", r);
//}

//int main()
//{
//	int n = 10;
//	if (n & (n - 1) == 0)
//		printf("YES\n");
//	else
//		printf("NO\n");
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int cont = 0;
//	while (n)
//	{
//		cont++;
//		n = n & (n - 1);
//	}
//	printf("%d", cont);
//	return 0;
//}

//int main()
//{
//	int a = 13;
//	a = a | (1 << 4);
//	printf("%d",1<<4); 
//	a = a & ~(1 << 4);
//	printf("a = %d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);
//	return 0;
//}

//int main()
//{
//	int a = 1, b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	//        1>2���ʽΪ�٣����ǲ�Ӱ��a��b��ֵ
//	//��Ȼ���ű��ʽ��ֵ�����һ������������ÿһ�����ʽ��Ҫ��һ�飬�����õ��ĵط���ֵ���ܺ�ǰ���й�
//	printf("%d", c);
//	return 0;
//}

//void test1()
//{
//	printf("hehe\n");
//}
//void test2(const char* s)
//{
//	printf("%s\n", s);
//}
//int main()
//{
//	test1();//()������Ϊ�������ò�����
//	test2("hello");//()���Ǻ������ò�����
//	return 0;
//}

//struct Point
//{
//	int x;
//	int y;
//}p1;//p1��ȫ�ֱ���������ṹ���ͬʱ�������
////struct  Stu
////{
////	int age;
////	char name[20];
////}s1;
//int main()
//{
//	struct Point p2;//�ֲ�������ֻ����main������ʹ��
//	struct Point p3 = { 10,20 };//�ڶ��ñ�����ͬʱ�ͳ�ʼ��
//	//struct Stu s2 = { 10,"zhangsan" };
//	//struct Stu s3 = { .name = "lisi",.age = 30 };//ָ��˳��
//}


//struct Node
//{
//	int date;
//	struct Point p;//���׽ṹ��
//	struct Node* next;
//}n1 = { 10,{10,20}, NULL};//ȫ�ֱ����ĳ�ʼ��
//int main()
//{
//	struct Node n2 = { 20,{5,6},NULL };
//}

//struct Point
//{
//	int x;
//	int y;
//}p1 = { 1,2 };
//int main()
//{
//	printf("%d %d", p1.x, p1.y);
//	return 0;
//}

//struct Point
//{
//	int x;
//	int y;
//}p1;
//int main()
//{
//	struct Point p = { 1,2 };
//	struct Point* ptr = &p;
//	ptr->x = 10;
//	ptr->y = 20;
//	printf("%d %d\n", ptr->x, ptr->y);
//	printf("%d %d\n", p.x, p.y);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//struct Stu
//{
//	int age;
//	char name[20];
//};
//void print_stu(struct Stu s)
//{
//	printf("%d %s\n", s.age, s.name);
//}
//void set_stu(struct Stu* s)
//{
//	strcpy(s->name, "lisi");
//	s->age = 30;
//}
//int main()
//{
//	struct Stu s = { .name = "zhangsan",.age = 18 };
//	print_stu(s);
//	set_stu(&s);
//	print_stu(s);
//}

int main()
{
	char c1 = 125;
	char c2 = 10;
	char c3 = c1 + c2;
	printf("%d\n", c3);
	printf("%d\n", c1 + c2);
}