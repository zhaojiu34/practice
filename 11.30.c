#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
// long long��Χ�����9*10^18
// ��a<100��b < 1000,����a^b�����ֵ��100^1000,long long�治��
//	long long a = 0, b = 0;
//	scanf("%lld %lld", &a, &b);
//	int i = 0;
//	long long  r = pow(a, b);//3��2000�η�̫���ˣ��޷�����
//	r = r % 7;//��Χ��0~6
//	switch (r)
//	{
//	case 1:
//		printf("Monday\n");
//		break; 
//	case 2:
//			printf("Tuseday\n");
//			break;
//	case 3:
//		printf("Wednesday\n");
//		break;
//	case 4:
//		printf("Thursday\n");
//		break;
//	case 5:
//		printf("Friday\n");
//		break;
//	case 6:
//		printf("Saturday\n");
//		break;
//	case 0:
//		printf("Sunday\n");
//		break;
//	}
//	return 0;
//}


#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	int s = 1;//��������aÿ��*3%7��ֵ,��ʾ�ܼ�
	//����Ŀ����������˵��
	//3��2000�η�����̫�࣬��long longҲ�治�£�������һ��˼·
	//�����ʾ3������2000��
	//���ڱ�ʾ���ڣ��϶�С��7������η������Դ��£�һ���ѡ�ý��%7���õ��������������ڼ�
	//���ڴ治�£���Ȼÿ��*3��%7����ÿ�ν������֤����������С��7������ѭ��2000�ν��Ҳ��7���ڵ��������ᳬ����Χ
	scanf("%d %d", &a, &b);
	int i = 0;
	for (i = 0; i < b; i++)
	{
		s = (s * a) % 7;//%7�����Χ��0~6֮��
	}
	//��Ŀ�м�����������գ����Ϊ��ͱ�ʾ��������
	switch (s)
	{
	case 1:
		printf("Monday\n");
		break;
	case 2:
		printf("Tuesday\n");
		break;
	case 3:
		printf("Wednesday\n");
		break;
	case 4:
		printf("Thursday\n");
		break;
	case 5:
		printf("Friday\n");
		break;
	case 6:
		printf("Saturday\n");
		break;
	case 0:
		printf("Sunday\n");
		break;
	}
	return 0;
}