#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>


//дһ�������ӡ1-100֮������3�ı���������

//int main()
//{
//	int num = 0;
//	for (num = 1; num <= 100; num++)
//	{
//		if(num % 3 == 0)
//			printf("%d\n", num);
//	}
//	return 0;
//}



//д���뽫��������������С���������
//���磺
//���룺2 3 1
//�����3 2 1

//int main()
//{
//	int a = 0;    //20
//	int b = 0;    //3
//	int c = 0;    //2
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		int m = 0;
//		m = a;
//		a = b;                     //a=3 b=20
//		b = m;
//	}//a<b            
//	if (a > c)
//	{
//		int m = 0;
//		m = a;
//		a = c;              //a=2 c=20
//		c = m;
//	}//a<c
//	if (b > c)
//	{
//		int m = 0;
//		m = b;
//		b = c;              //b=2 c=3
//		c = m;
//	}//b<c
//
//	//c>b>a
//	printf("%d %d %d", a, b, c);
//	return 0;
//}



//д���뽫��������������С���������
//���磺
//���룺2 3 1
//�����3 2 1

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a < c)
	{
		int m = 0;
		m = a;
		a = c;
		c = m;
	}//a>c
	if (b < c)
	{
		int m = 0;
		m = b;
		b = c;
		c = m;
	}//c<b
	if (b > a)          
	{
		int m = 0;
		m = a;
		a = b;
		b = m;
	}//a>b
	printf("%d %d %d", a, b, c);
	return 0;
}