#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//дһ�����ֲ��Һ���
//���ܣ���һ�����������в���ָ������ֵ���ҵ��˾ͷ����±꣬�Ҳ����ͷ��� - 1.

// arr �ǲ��ҵ�����
//left ��������±�
//right ��������±�
//key Ҫ���ҵ�����
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
//		printf("û���ҵ��±�Ϊ%d", ret);
//	}
//	else
//	{
//		printf("�ҵ����±�Ϊ%d", ret);
//	}
//	return 0;
//}


//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���

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


//ʵ�ֺ����ж�year�ǲ������ꡣ

//void years(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		printf("%d������",year);
//	}
//	else
//	{
//		printf("%d��������", year);
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


//ʵ��һ������is_prime���ж�һ�����ǲ���������
//��������ʵ�ֵ�is_prime��������ӡ100��200֮���������

//void is_prime(int num)
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	for (a; a <= b; a++)
//	{
//		int flag = 1;//�����ܱ�����
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
//			printf("%d������\n", a);
//		}
//	}
//}
//int main()
//{
//	int num = 0;
//	is_prime(num);
//	return 0;
//}



//����һ���������飬��ɶ�����Ĳ���

//1.ʵ�ֺ���init() ��ʼ������Ϊȫ0
//2.ʵ��print()  ��ӡ�����ÿ��Ԫ��
//3.ʵ��reverse()  �����������Ԫ�ص����á�
//4.Ҫ���Լ�������Ϻ����Ĳ���������ֵ��

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