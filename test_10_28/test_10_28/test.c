#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdbool.h>


//int add(int x, int y)//形参
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
////形参是实参的一份临时拷贝
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int r = add(a, b);//实参
//	printf("%d\n", r);
//	return 0;
//}


//数组做函数参数
//写⼀个函数将⼀个整型数组的内容，全部置为-1，再写⼀个函数打印数组的内容。
 
//void set_arr(int arr[], int sz);
//void print_arr(int arr[], int sz);
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	set_arr(arr, sz);//设置数组内容为-1
//	print_arr(arr, sz);//打印数组内容
//	return 0;
//}
//
//void set_arr(int arr[], int sz)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = -1;
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}



//假设我们计算某年某⽉有多少天？如果要函数实现，可以设计2个函数:
//is_leap_year()：根据年份确定是否是闰年
//get_days_of_month()：调⽤is_leap_year确定是否是闰年后，再根据⽉计算这个⽉的天数

//#include <stdbool.h>
//
//bool is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 ==0))
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//int get_days_of_month(int y, int m)
//{
//	int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int day = days[m];
//	if (is_leap_year(y) && m == 2)
//	{
//		day++;
//	}
//	return day;
//}
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d %d", &year, &month);
//	int r = get_days_of_month(year,month);
//	printf("%d", r);
//	return 0;
//}


//链式访问

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));  //printf函数返回的是打印在屏幕上的字符的个数。
//	//                                  43   第三个printf打印43，在屏幕上打印2个字符，再返回2
//	//                    2  第⼆个printf打印2，在屏幕上打印1个字符，再放回1
//	//       1  第⼀个printf打印1
//	//所以屏幕上最终打印：4321
//	//空格也算一个字符
//	return 0;
//}


//如果想把函数的定义写在main函数后面，而且main函数能正常调用这些函数，那就必须在main函数的前面进行函数的声明

//bool is_leap_year(int y);//函数的声明
//
//int main()
//{
//	int y = 0;
//	scanf("%d", &y);
//	int r = is_leap_year(y);
//	if (is_leap_year(y))
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//	return 0;
//}
//
//bool is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 ==0))
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}

//多个文件
//⼀般情况下，函数的声明、类型的声明放在头⽂件（.h）中，函数的实现是放在源⽂件（.c）⽂件中


//自己创建的库函数用""
#include "add.h"


//导入静态库
#pragma comment(lib,"test_10_28_add_lib.lib")

int main()
{
	int a = 10;
	int b = 50;
	int c = add(a, b);
	printf("%d", c);
	return 0;
}