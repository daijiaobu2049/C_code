﻿#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	////假设在C语言中，有两个整数变量x = 9和y = 3，表达式x ^ y的结果是什么？
//	//int x = 9;
//	//int y = 3;
//	////00000000000000000000000000001001     x
//	////00000000000000000000000000000011     y
//	////00000000000000000000000000001010    x ^ y
//	//printf("%d", x ^ y);//10
//
//
//	////假设在C语言中，有两个整数变量a = 12和b = 5，表达式a & b的结果是什么？
//	//int a = 12;
//	//int b = 5;
//	////00000000000000000000000000001100      a
//	////00000000000000000000000000000101      b
//	////00000000000000000000000000000100     a & b
//	//printf("%d", a & b);//4
//
//	return 0;
//}


//不能创建临时变量（第三个变量），实现两个整数的交换

//int main()
//{
//	int a = 10;
//	//00000000000000000000000000001010
//	int b = 20;
//	//00000000000000000000000000010100
//	a = a ^ b;
//	//00000000000000000000000000011110
//	b = a ^ b;
//	//00000000000000000000000000001010
//	a = a ^ b;
//	//00000000000000000000000000010100
//	printf("a=%d b=%d", a, b);
//	return 0;
//}



//编写代码实现：求⼀个整数存储在内存中的⼆进制中1的个数


//方法一
//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}

//方法二
//int count_bit_one(int n)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)//一个整型是32个bit
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//方法三
int count_bit_one(int n)
{
	int count = 0;
	while (n)//10
	{
		n = n & (n - 1);
		//第一次
		//00000000000000000000000000001010     n
		//00000000000000000000000000001001     n-1
		//00000000000000000000000000001000
		//第二次
		//00000000000000000000000000001000     n
		//00000000000000000000000000000111     n-1
		//00000000000000000000000000000000
		count++;
	}
	return count;
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = count_bit_one(num);
	printf("二进制中1的个数 = %d\n", ret);
	return 0;
}