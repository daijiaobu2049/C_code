#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
 
//�ǵݹ�
//int func1(int n)
//{
//	int ret = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//�ݹ�
//int func(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * func(n - 1);
//	}
//}
//
//int main()
//{
//	printf("%d\n", func(5));
//	printf("%d\n", func1(5));
//	return 0;
//}


//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

//void func(int n)
//{
//	if (n < 10)
//	{
//		printf("%d ", n);
//	}
//	else
//	{
//		func(n / 10);
//		printf("%d ", n % 10);
//	}
//}
//
//int main()
//{
//	func(123);
//	return 0;
//}


//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//쳲�����������ָ����һ�����У�1��1��2��3��5��8��13��21��34��55��89����������дӵ�3�ʼ ��ÿһ�����ǰ����֮�͡�

//�ǵݹ�
//int fib1(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
////�ݹ�
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = fib(n);
//	printf("%d\n", r);
//	printf("%d\n", fib1(n));
//	return 0;
//}