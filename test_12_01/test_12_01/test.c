#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ð������

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
////	//ȷ������
////	for (int i = 0; i < sz - 1; i++)
////	{
////		//ÿһ���ڲ��Ƚ�
////		for (int j = 0; j < sz - 1 - i; j++)
////		{
////			if (arr[j] > arr[j + 1])
////			{
////				//����
////				int tmp = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = tmp;
////			}
////		}
////	}
////}
//
////�Ż�
//void bubble_sort(int* arr, int sz)
//{
//	//ȷ������
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//�����������
//		//ÿһ���ڲ��Ƚ�
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
//	//����
//	//4 5 6 8 2 3 7 9 1 0
//	input(arr, sz);
//	//ð������--����
//	bubble_sort(arr, sz);
//	//���
//	print_arr(arr, sz);
//	return 0;
//}



//ָ������ģ���ά����

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


//�ַ�ָ�����

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
//	//��str3��str4ָ�����һ��ͬһ�������ַ�����C/C++��ѳ����ַ����洢��������һ���ڴ�����
//	//������ָ��ָ��ͬһ���ַ�����ʱ������ʵ�ʻ�ָ��ͬһ���ڴ档��������ͬ�ĳ����ַ���ȥ��ʼ
//	//����ͬ�������ʱ��ͻῪ�ٳ���ͬ���ڴ�顣����str1��str2��ͬ��str3��str4��ͬ��
//	return 0;
//}


//����ָ�����

int main()
{
	int(*p)[10];
	int arr[10] = { 0 };
	int(*p)[10] = &arr;
	return 0;
}