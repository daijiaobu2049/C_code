#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。

//void print_arr(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	return 0;
//}


//实现一个对整形数组的冒泡排序

//void input(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		//4 5 6 8 2 3 7 9 1 0
//		scanf("%d", arr + i);
//	}
//}
//
//void bubble_sort(int* arr, int sz)
//{
//	//确定趟数
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		//每一趟数比较
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				flag = 0;
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//void print_arr(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	input(arr, sz);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}



//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。

//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

#include <string.h>

void intput(int* s1, int* s2, int len)
{
	for (int i = 0; i < len; i++)
	{
		scanf("%c", s1 + i);
	}
	for (int i = 0; i < len; i++)
	{
		scanf("%c", s2 + i);
	}
}

void func(int* s1, int len)
{
	 
}


int main()
{
	char s1[5] = { 0 };
	char s2[5] = { 0 };
	int len = strlen(s1);
	intput(s1, s2, len);
	func(s1, len);
	return 0;
}