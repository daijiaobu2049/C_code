#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>



//for循环的实践

//在屏幕上打印1~10的值


//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 10 ; a++)
//	{
//		printf("%d ", a);
//	}
//	return 0;
//}


//计算1~100之间3的倍数的数字之和


//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100 ; i++)
//	{
//		if (i % 3 == 0)
//		{
//			sum += i;
//		}
//	}
//	printf("%d ", sum);
//	return 0;
//}


//优化
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 3; i <= 100 ; i+=3)
//	{
//		sum += i;
//	}
//	printf("%d ", sum);
//	return 0;
//}




//do while循环的实例
//在屏幕上打印1~10的值

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}





//do while 练习
//输⼊⼀个正整数，计算这个整数是⼏位数？
//例如：
//输⼊：1234 输出：4
//输⼊：12 输出：2


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int cnt = 0;
//	do
//	{
//		cnt++;                 //最少有一位
//		n = n / 10;            //每除以10就少一位
//	} while (n);
//
//
//	printf("%d\n", cnt);
//
//	return 0;
//}





//while循环中的break和continue
//break举例

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;           //当i=5时，跳出循环，循环就终止了
//			printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

//continue举例

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		//当i等于5后，就执⾏continue，直接跳过continue的代码，去循环的判断的地方
//
//		//因为这⾥跳过了i = i + 1，所以i⼀直为5，程序陷⼊和死循环
//
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}




//for循环中的break和continue
//break 举例

//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}

//continue举例

//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;          //这⾥continue跳过了后边的打印，来到了i++的调整部分
//			printf("%d ", i);
//	}
//	return 0;
//}






// do while循环中的break和continue

//break

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i = i + 1;
//	} while (i <= 10);
//	return 0;
//}

//continue

int main()
{
	int i = 1;
	do
	{
		if (i == 5)
			continue;
		printf("%d ",i);
		i = i + 1;
	} while (i <= 10);
	return 0;
}