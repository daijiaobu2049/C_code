#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <limits.h>

//当遇到两个很大的数求平均值
//int main()
//{
//	
//	int a = INT_MAX;//2147483647
//	int b = INT_MAX;//2147483647
//	//int avg = (a + b) / 2;
//	int avg = a + (b - a) / 2;
//	printf("%d", avg);
//	return 0;
//}


//头文件的包含

//#include <math.h>
//int main()
//{
//	double a = 16.0;
//	double b = sqrt(a);
//	printf("%lf", b);
//	return 0;
//}


//自定义函数
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}

int add(int x, int y)
{
	return x + y;
}

int main()
{
	int a = 0;
	int b = 0;
	//输入
	scanf("%d %d", &a, &b);
	//调用函数完成a+b，并把返回值放在c中
	int c = add(a, b);
	//输出
	printf("%d",c);
	return 0;
}