#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//int main()
//{
//	//完全初始化
//	int arr[5] = { 1,2,3,4,5 };
//	//不完全初始化
//	int arr2[6] = { 1 };//第一个初始化为一，剩余的元素默认初始化为0
//	//错误初始化-初始化项太多了
//	int arr3[3] = { 1, 2, 3, 4 };
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[7]);//8
//	printf("%d\n", arr[3]);//4
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}



//数组在内存中是连续存放的
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n ", i, &arr[i]);
//	}
//	return 0;
//}


//sizeof
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//计算⼀个元素的⼤⼩，单位是字节
//	return 0;
//}



//计算出数组的元素个数：
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	return 0;
//}