#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//冒泡排序

//void input(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d", arr + i);
//	}
//}
//
////void bubble_sort(int* arr, int sz)
////{
////	//确定趟数
////	for (int i = 0; i < sz - 1; i++)
////	{
////		//每一趟内部比较
////		for (int j = 0; j < sz - 1 - i; j++)
////		{
////			if (arr[j] > arr[j + 1])
////			{
////				//交换
////				int tmp = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = tmp;
////			}
////		}
////	}
////}
//
////优化
//void bubble_sort(int* arr, int sz)
//{
//	//确定趟数
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设是有序得
//		//每一趟内部比较
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
//void print_arr(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//输入
//	//4 5 6 8 2 3 7 9 1 0
//	input(arr, sz);
//	//冒泡排序--升序
//	bubble_sort(arr, sz);
//	//输出
//	print_arr(arr, sz);
//	return 0;
//}



//指针数组模拟二维数组

//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7 };
//
//	int* arr[] = { arr1,arr2,arr3 };
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);//*(*(arr+i)+j)
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//字符指针变量

//int main()
//{
//	/*char ch = 'w';
//	char* pc = &ch;
//	*pc = 'w';*/
//
//
//	const char* pstr = "hello";
//	printf("%s\n", &pstr);
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	//里str3和str4指向的是一个同一个常量字符串。C/C++会把常量字符串存储到单独的一个内存区域，
//	//当几个指针指向同一个字符串的时候，他们实际会指向同一块内存。但是用相同的常量字符串去初始
//	//化不同的数组的时候就会开辟出不同的内存块。所以str1和str2不同，str3和str4相同。
//	return 0;
//}


//数组指针变量

int main()
{
	int(*p)[10];
	int arr[10] = { 0 };
	int(*p)[10] = &arr;
	return 0;
}