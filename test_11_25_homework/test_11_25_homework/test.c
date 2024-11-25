#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



//在一个整型数组中，只有一个数字出现一次，其他数组都是成对出现的，请找出那个只出现一次的数字。
//例如：数组中有：1 2 3 4 5 1 2 3 4，只有5出现一次，其他数字都出现2次，找出5

//int func(int arr[], int len)
//{
//	int ret = 0;
//	for (int i = 0; i < len; i++)
//	{
//		ret ^= arr[i];
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,4,3,2,1 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int r = func(arr, len);
//	printf("%d",r);
//	return 0;
//}


//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

//void func(int n)
//{
//	for (int i = 30; i >= 0; i -=2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//}
//
//int main()
//{
//	func(7);
//	return 0;
//}


//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 
//输入例子:1999 2299
//输出例子 : 7
//int func(int m, int n)
//{
//	int ret = m ^ n;
//	int count = 0;
//	while (ret != 0)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int r = func(m, n);
//	printf("%d", r);
//	return 0;
//}





//指针变量的⼤⼩取决于地址的⼤⼩
//32位平台下地址是32个bit位（即4个字节）
//64位平台下地址是64个bit位（即8个字节）

//int main()
//{
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(short*));
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(double*));
//	return 0;
//}


//int main()
//{
//	int n = 0x11223344;
//	int* pi = &n;
//	*pi = 0;
//	return 0;
//}


//int main()
//{
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	*pc = 0;
//	return 0;
//}


//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	return  0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = &a;
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	void* pa = &a;
//	void* pc = &a;
//	*pa = 10;
//	*pc = 0;
//	return 0;
//}