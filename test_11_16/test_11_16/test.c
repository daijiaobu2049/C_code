#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
 
//非递归
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
//递归
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


//递归方式实现打印一个整数的每一位

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


//递归和非递归分别实现求第n个斐波那契数
//斐波那契数列是指这样一个数列：1，1，2，3，5，8，13，21，34，55，89……这个数列从第3项开始 ，每一项都等于前两项之和。

//非递归
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
////递归
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