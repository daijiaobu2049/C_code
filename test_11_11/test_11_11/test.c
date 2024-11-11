#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//计算n的阶乘（不考虑溢出），n的阶乘就是1~n的数字累积相乘
//⼀个正整数的阶乘（factorial）是所有⼩于及等于该数的正整数的积，并且0的阶乘为1。
//⾃然数n的阶乘写作n!。

//int fact(int a)
//{
//	if (a == 0)
//	{
//		return 1;
//	}
//	else if (a >0)
//	{
//		return a * fact(a - 1);
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int r = fact(a);
//	printf("%d", r);
//	return 0;
//}


//输⼊⼀个整数m，按照顺序打印整数的每⼀位。
//输⼊：1234 输出：1234

int Print(int n)
{
	if (n > 9)
	{
		Print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	Print(n);
	return 0;
}