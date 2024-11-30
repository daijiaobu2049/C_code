#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//实现一个函数，可以左旋字符串中的k个字符。

//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

//void leftRound(char* arr, int k)
//{
//	int len = strlen(arr);
//	int time = k % len;//实际旋转的次数
//	for (int i = 0; i < time; i++)//次数
//	{
//		char tmp = arr[0];
//		for (int j = 0; j < len - 1; j++)//下标
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	leftRound(arr, 2);
//	printf("%s", arr);
//	return 0;
//}


//模拟实现库函数strlen

//size_t my_strlen(char* p)
//{
//	char* start = p;
//	char* end = p;
//	while (*end)//遇到\0则为假，循环结束
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zd", len);
//	return 0;
//}




//调整数组使奇数全部都位于偶数前面。

//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

#include <stdlib.h>

void func(int arr[], int len)
{
	int i = 0;//前
	int j = len - 1;//后
	while (i < j)
	{
		while (i < j && arr[i] % 2 != 0)
		{
			i++;
		}
		while (i < j && arr[j] % 2 == 0)
		{
			j--;
		}
		if (i < j)
		{
			int tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	}
}

int main()
{
	int n = 0;
	printf("请输入数组元素的个数\n");
	scanf("%d", &n);

	int* arr = (int*)malloc(n * sizeof(int));
	if (arr == NULL)
	{
		printf("请输入不为0的数\n");
		return 1;
	}

	printf("请依次输入数组的元素：");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("调整前的数组：");
	for (int i = 0; i < n; i++) 
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	func(arr, n);

	printf("调整后的数组：");
	for (int i = 0; i < n; i++) 
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	free(arr);

	return 0;
}