#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//ʵ��һ�����������������ַ����е�k���ַ���

//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

//void leftRound(char* arr, int k)
//{
//	int len = strlen(arr);
//	int time = k % len;//ʵ����ת�Ĵ���
//	for (int i = 0; i < time; i++)//����
//	{
//		char tmp = arr[0];
//		for (int j = 0; j < len - 1; j++)//�±�
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


//ģ��ʵ�ֿ⺯��strlen

//size_t my_strlen(char* p)
//{
//	char* start = p;
//	char* end = p;
//	while (*end)//����\0��Ϊ�٣�ѭ������
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




//��������ʹ����ȫ����λ��ż��ǰ�档

//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

#include <stdlib.h>

void func(int arr[], int len)
{
	int i = 0;//ǰ
	int j = len - 1;//��
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
	printf("����������Ԫ�صĸ���\n");
	scanf("%d", &n);

	int* arr = (int*)malloc(n * sizeof(int));
	if (arr == NULL)
	{
		printf("�����벻Ϊ0����\n");
		return 1;
	}

	printf("���������������Ԫ�أ�");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("����ǰ�����飺");
	for (int i = 0; i < n; i++) 
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	func(arr, n);

	printf("����������飺");
	for (int i = 0; i < n; i++) 
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	free(arr);

	return 0;
}