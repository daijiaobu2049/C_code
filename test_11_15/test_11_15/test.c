#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19

int DigitSum(int n)
{
	if (n < 10)
	{
		return n;
	}
	else 
	{
		return DigitSum(n / 10) + n % 10;
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", DigitSum(n));
	return 0;
}