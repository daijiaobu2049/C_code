#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣

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


//ʵ��һ�������������ð������

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
//	//ȷ������
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		//ÿһ�����Ƚ�
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				flag = 0;
//				//����
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



//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����

//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC

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