#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19

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