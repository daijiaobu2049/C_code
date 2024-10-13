#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18) 
//	{
//		printf("少年\n");
//	}
//	else if (age <= 44)
//	{
//		printf("青年\n");
//	}
//	else if (age <= 59)
//	{
//		printf("中老年\n");
//	}
//	else if (age <= 89)
//	{
//		printf("老年\n");
//	}
//	else
//	{
//		printf("老寿星\n");
//	}
//	return 0;
//}




//输⼊⼀个整数，判断是否为奇数

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//	{
//		printf("%d是奇数\n", a);
//	}
//	return 0;
//}



//输⼊⼀个整数，判断是否为奇数，如果是奇数打印是奇数，否则打印偶数

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//	{
//		printf("%d是奇数\n", num);
//	}
//	else
//	{
//		printf("%d是偶数\n", num);
//	}
//	return 0;
//}


//输⼊⼀个年龄， >= 18岁就输出：成年，否则就输出：未成年

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("成年\n");
//	}
//	else
//	{
//		printf("未成年\n");
//	}
//	return 0;
//}



//要求输⼊⼀个整数，判断输⼊的整数是0，还是正数或者负数。

int main()
{
	int num = 0;
	scanf("%d", &num);
	if (num == 0)
	{
		printf("数字是0\n");
	}
	else if(num > 0)
	{
		printf("是正数\n");
	}
	else
	{
		printf("是负数\n");
	}
	return 0;
}