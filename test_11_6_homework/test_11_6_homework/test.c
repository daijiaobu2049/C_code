#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//写一个二分查找函数
//功能：在一个升序数组中查找指定的数值，找到了就返回下标，找不到就返回 - 1.

// arr 是查找的数组
//left 数组的左下标
//right 数组的右下标
//key 要查找的数字
//int bin_search(int arr[], int left, int right, int key)
//{
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if(arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int ret = bin_search(arr, 0, len - 1, 6);
//	if (ret == -1)
//	{
//		printf("没有找到下标为%d", ret);
//	}
//	else
//	{
//		printf("找到了下标为%d", ret);
//	}
//	return 0;
//}


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。

//void pithy_table(int x, int y)
//{
//	for (int i = 1; i <= x; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d  ",j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	pithy_table(x, y);
//	return 0;
//}


//实现函数判断year是不是润年。

//void years(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		printf("%d是闰年",year);
//	}
//	else
//	{
//		printf("%d不是闰年", year);
//	}
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	years(year);
//	return 0;
//}


//实现一个函数is_prime，判断一个数是不是素数。
//利用上面实现的is_prime函数，打印100到200之间的素数。

//void is_prime(int num)
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	for (a; a <= b; a++)
//	{
//		int flag = 1;//假设能被整除
//		for (int i = 2; i < a - 1; i++)
//		{
//			if (a % i == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d是素数\n", a);
//		}
//	}
//}
//int main()
//{
//	int num = 0;
//	is_prime(num);
//	return 0;
//}



//创建一个整形数组，完成对数组的操作

//1.实现函数init() 初始化数组为全0
//2.实现print()  打印数组的每个元素
//3.实现reverse()  函数完成数组元素的逆置。
//4.要求：自己设计以上函数的参数，返回值。

void Init(int arr[], int sz, int set)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = set;
	}
}

void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void Reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;


	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	int arry[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arry) / sizeof(arry[0]);
	Print(arry, sz);
	Reverse(arry, sz);
	Print(arry, sz);
	Init(arry, sz, 0);
	Print(arry, sz);
	return 0;
}