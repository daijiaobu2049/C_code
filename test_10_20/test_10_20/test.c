#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>


//��10 �����������ֵ

//int main()
//{
//	int num[10] = { 1,20,38,4,65,7,88,91,10 };
//	int max = num[0];
//	for (int i = 1; i < 10; i++)
//	{
//		if (max<num[i])
//		{
//			max = num[i];
//		}
//	}
//	printf("max=%d\n",max);
//	return 0;
//}




//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����


//int main()
//{
//	double sum = 0;
//	int i = 1;
//	int flg = 1;
//	for (1; i <= 100; i++)
//	{
//		sum = sum + 1.0 / i * flg;
//		flg = -flg;
//	}
//	printf("%lf", sum);
//	return 0;
//}


//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9

//int main()
//{
//	int a = 0;
//	int sum = 0;
//	for (1; a <= 100; a++)
//	{
//		if (a % 10 == 9)
//		{
//			sum++;
//		}
//		else if(a / 10 == 9)
//		{
//			sum++;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}


//��ӡ1000�굽2000��֮�������

//һ���������ܱ�4���������ܱ�100�����������ܱ�400��������ô�����ݾ������ꡣ


//int main()
//{
//	int i = 1000;
//	for (i; i <= 2000; i++)
//	{
//		//printf("%d\n", i);
//		if ((i % 4 == 0 && i % 100 != 0)||i % 400 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//���������������������������Լ��
//���磺
//���룺20 40
//�����20


//int main()
//{
//	int a = 24;
//	int b = 18;
//	int c = a % b;
//	while (c != 0)
//	{
//		a = b;
//		b = c;
//		c = a % b;
//	}
//	printf("%d",b);
//	return 0;
//}