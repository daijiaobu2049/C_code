#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 判断字符串s2是否是s1旋转后的字符串
//int isRotated(char* s1, char* s2) {
//    size_t len1 = strlen(s1);
//    size_t len2 = strlen(s2);
//    // 如果两个字符串长度不同，s2不可能是s1旋转得到的
//    if (len1 != len2) return 0;
//    // 使用动态内存分配来创建足够空间存放拼接后的字符串
//    char* s1s1 = (char*)malloc((2 * len1 + 1) * sizeof(char));
//    if (s1s1 == NULL) {
//        printf("内存分配失败！\n");
//        exit(1);
//    }
//    // 将s1复制到s1s1
//    strcpy(s1s1, s1);
//    // 将s1连接到s1s1后面
//    strcat(s1s1, s1);
//    // 在s1s1中查找s2
//    int result = (strstr(s1s1, s2) != NULL);
//    free(s1s1);  // 释放动态分配的内存
//    return result;
//}
//
//int main() {
//    char s1[] = "AABCD";
//    char s2[] = "BCDAA";
//    // 调用函数判断并输出结果
//    printf("%d\n", isRotated(s1, s2));
//
//    char s3[] = "abcd";
//    char s4[] = "ACBD";
//    printf("%d\n", isRotated(s3, s4));
//
//    return 0;
//}

//杨式矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);

//int func(int arr[3][3], int x, int y, int key)
//{
//	int i = 0;
//	int j = y - 1;
//	while (i < x && j >= 0)
//	{
//		if (arr[i][j] < key)
//		{
//			i++;
//		}
//		else if (arr[i][j] > key)
//		{
//			j--;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//
//	int ret = func(arr, 3, 3, 8);
//	printf("%d", ret);
//	return 0;
//}




//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。

//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

//int main()
//{
//	char killer = 'a';
//	for (; killer < 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("凶手是%c\n", killer);
//		}
//	}
//	return 0;
//}


//在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1
//……

//int main()
//{
//	int arr[6][6] = { 0 };
//	int n = 6;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (j == 0 || i == j)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//二维数组传参的本质

//void test(int arr[3][5], int x, int y)
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

void test(int(*arr)[5], int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			printf("%d ", *(*(arr + i) + j));
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6},{3,4,5,6,7} };
	test(arr, 3, 5);
	return 0;
}