#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//递归与迭代
//求第n个斐波那契数

//int count = 0;
//
//int Fib(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}

//int Fib(int n)
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

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	printf("count = %d\n", count);
//	return 0;
//}


//递归实现n的k次方

int Func(int n, int k)            //n的k次方
{
	if (k == 1)
	{
		return n;
	}
	return n * Func(n, k - 1);
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	int r = Func(n, k);
	printf("%d", r);
	return 0;
}