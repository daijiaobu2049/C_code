#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//找出100~200之间的素数，并打印在屏幕上。
//注：素数⼜称质数，只能被1和本⾝整除的数字。

//int main()
//{
//	int i = 0;
//	//循环产生100~200的数字
//	for (i = 100; i <= 200; i++)
//	{
//		//判断是否为素数
//		int j = 0;
//		int flag = 1;  //假设i是素数
//		//在C语言中，flag通常用作一个标记变量，用于标记某种状态或条件是否满足。
//		// flag变量通常被定义为布尔型或整型，其值为0或1，表示某种状态或条件的真假。
//		for (j = 2; j <= i - 1; j++)    //产生2~i-1之间的数字去试除
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



int main()
{
	printf("hehe\n");
	goto next;
	printf("haha\n");
next:
	printf("跳过了haha的打印\n"); 
	return 0;
}