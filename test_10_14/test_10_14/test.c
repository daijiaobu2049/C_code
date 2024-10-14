#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>


//输⼊任意⼀个整数值，计算除3之后的余数

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 3 == 0)
//	{
//		printf("整除，余数为0\n");
//	}
//	else if (a % 3 == 1)
//	{
//		printf("余数是1\n");
//	}
//	else
//	{
//		printf("余数是2\n");
//	}
//	return 0;
//}


//如果使⽤switch语句改写，就可以是这样的：



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n % 3)
//	{
//	case 0:
//		printf("整除，余数为0\n");
//		break;
//	case 1:
//		printf("余数是1\n");
//		break;
//	case 2:
//		printf("余数是2\n");
//		break;
//	}
//	return 0;
//}



//输⼊⼀个1~7的数字，打印对应的星期⼏

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	switch(num )
//	{
//		case 1:
//			printf("星期一\n");
//			break;
//		case 2:
//			printf("星期二\n");
//			break;
//		case 3:
//			printf("星期三\n");
//			break;
//		case 4:
//			printf("星期四\n");
//			break;
//		case 5:
//			printf("星期五\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break;
//		case 7:
//			printf("星期天\n");
//			break;
//	}
//	return 0;
//}



//如果需求发⽣变化，变为：
//1.输⼊1~5，输出的是“⼯作⽇”;
//2.输⼊6~7，输出“休息⽇”

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	switch (num)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//
////前面做的打印星期的练习，如果day的输⼊不是1~7的值，如果我们要提⽰：输⼊错误，则可以这样完成代码
// 
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}


//while 循环的实践
//在屏幕上打印1~10的值

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}



//练习
//输⼊⼀个正的整数，逆序打印这个整数的每⼀位
//例如：
//输⼊：1234，输出：4321
//输⼊：521，输出：125


int main()
{
	int n = 0;
	scanf("%d", &n);
	//1.要想得到n的最低位，可以使⽤n%10的运算，得到的余数就是最低位，如：1234%10得到4.
	//2.要想去掉n的最低位，找出倒数第⼆位，则使⽤n = n / 10操作就可以去掉最低位的，
	// 如：n = 1234 / 10得到123，123相较于1234就去掉了最低位，123 % 10就得到倒数第⼆位3.
	//3.循环1和2两个步骤，在n变成0之前，就能到所有的位.
	while (n)
	{
		printf("%d", n % 10);
		n /= 10;

	}
	return 0;
}