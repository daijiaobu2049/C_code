#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//喝汽水问题
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）。

//int total(int money)
//{
//	int total = money;//总共可以喝的汽水
//	int empty = money;//产生的空瓶
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



//用C语言在屏幕上输出以下图案：

//void func(int line)
//{
//	//处理上半部分
//	for (int i = 0; i < line; i++)
//	{
//		//先打印空格
//		for (int j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印星号
//		for (int k = 0; k < 2 * i + 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//处理下半部分
//	for (int i = 0; i < line - 1; i++)
//	{
//		//先打印空格
//		for (int j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		//打印星号
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


//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。

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



//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
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