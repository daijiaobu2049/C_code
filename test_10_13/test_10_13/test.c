#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>



//条件操作符

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	if (a > 5)
//	{
//		b = 3;
//	}
//	else
//	{
//		b = -3;
//	}
//	printf("%d\n", b);
//
//	return 0;
//}


//改造以后

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	b = (a > 5 ? 3 : -3);
//	printf("%d\n", b);
//	return 0;
//}




//使⽤条件表达式实现找两个数中较⼤值

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = (a > b ? a : b);
//	printf("%d更大", m);
//	return 0;
//}


//我们有⼀个变量叫逻辑反操作flag, 如果flag为假，要做⼀个什么事情,那么我们怎么使⽤代码体现呢？
//
//int main()
//{
//	int flag = 0;
//	if (!flag)                      //0代表假，1代表真
//	{
//		printf("do something\n");
//	}
//	return 0;
//}


//如果我们说⽉份是3⽉到5⽉，是春天,那么我们怎么使⽤代码体现呢？

//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month >= 3 && month <= 5)
//	{
//		printf("是春天\n");
//	}
//
//	return 0;
//}



//我们说⼀年中⽉份是12⽉或者1⽉或者2⽉是冬天，那么我们怎么使⽤代码体现呢？


//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month == 12 || month == 1 || month == 2)
//	{
//		printf("是冬季\n");
//	}
//	return 0;
//}



//输⼊⼀个年份year，判断year是否是闰年
//闰年判断的规则：
//1. 能被4整除并且不能被100整除是闰年
//2. 能被400整除是闰年


//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0 )||( year % 400 == 0 ))
//	{
//		printf("%d是闰年\n", year);
//	}
//	else
//	{
//		printf("%d不是闰年\n", year);
//	}
//	return 0;
//}


//阅读代码，计算代码输出的结果


#include <stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;   
	i = a++||++b||d++;       
	printf("i = %d \n a = %d\n b = %d\n i = %d\nd = %d\n", i, a, b, c, d);
	return 0;
}