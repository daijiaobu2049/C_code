#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <limits.h>

//�����������ܴ������ƽ��ֵ
//int main()
//{
//	
//	int a = INT_MAX;//2147483647
//	int b = INT_MAX;//2147483647
//	//int avg = (a + b) / 2;
//	int avg = a + (b - a) / 2;
//	printf("%d", avg);
//	return 0;
//}


//ͷ�ļ��İ���

//#include <math.h>
//int main()
//{
//	double a = 16.0;
//	double b = sqrt(a);
//	printf("%lf", b);
//	return 0;
//}


//�Զ��庯��
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}

int add(int x, int y)
{
	return x + y;
}

int main()
{
	int a = 0;
	int b = 0;
	//����
	scanf("%d %d", &a, &b);
	//���ú������a+b�����ѷ���ֵ����c��
	int c = add(a, b);
	//���
	printf("%d",c);
	return 0;
}