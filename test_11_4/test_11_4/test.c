﻿#define _CRT_SECURE_NO_WARNINGS 1

#include  <stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	int num = 100;
//	char c = 'w';
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}



//写⼀个代码求n的阶乘
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//

//如果n分别是求出每个数的阶乘，再求和就好了
//在上⾯的代码上改造
int main()
{
	int n = 0;
	int i = 1;
	int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		int ret = 1;
		for (i = 1; i <= n; i++)
		{
			ret *= i;
		}
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}
//运⾏结果应该是错的？



int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}
	return 0;
}