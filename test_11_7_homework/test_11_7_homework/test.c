#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//����ˮ����
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ�����ʵ�֣���

//int total(int money)
//{
//	int total = money;//�ܹ����Ժȵ���ˮ
//	int empty = money;//�����Ŀ�ƿ
//	while (empty > 1)
//	{
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	return total;
//}
//
//int total2(int money)
//{
//	return 2 * money - 1;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", total(a));
//	printf("%d", total2(a));
//	
//	return 0;
//}



//��C��������Ļ���������ͼ����

//void func(int line)
//{
//	//�����ϰ벿��
//	for (int i = 0; i < line; i++)
//	{
//		//�ȴ�ӡ�ո�
//		for (int j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ�Ǻ�
//		for (int k = 0; k < 2 * i + 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//�����°벿��
//	for (int i = 0; i < line - 1; i++)
//	{
//		//�ȴ�ӡ�ո�
//		for (int j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ�Ǻ�
//		for (int k = 0; k < (line - 1 - i) * 2 - 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	func(7);
//	return 0;
//}


//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������

//#include <math.h>
//
//void func()
//{
//	for (int i = 0; i < 1000000; i++)
//	{
//		int count = 0;
//		int tmp = i;
//		while (tmp != 0)
//		{
//			count++;
//			tmp /= 10;
//		}
//		tmp = i;
//		int sum = 0;
//		while (tmp != 0)
//		{
//			sum += pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//}
//int main()
//{
//	func();
//	return 0;
//}



//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
//int fun(int n, int a)
//{
//	int sum = 0;
//	int tmp = 0;
//	for (int i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum += tmp;
//	}
//	return sum;
//}
//
//int main()
//{
//	printf("%d\n", fun(1, 2));
//	printf("%d\n", fun(2, 2));
//	printf("%d\n", fun(3, 2));
//	printf("%d\n", fun(5, 2));
//	return 0;
//}