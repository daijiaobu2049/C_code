#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ָ��Ĺ�ϵ����

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//	while (p < &arr[sz])
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


//Ұָ��

//ָ��δ��ʼ��
//int main()
//{
//	int* p;//�ֲ�����ָ��δ��ʼ����Ĭ��Ϊ���ֵ
//	*p = 20;
//	return 0;
//}
//
////ָ��Խ�����
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = &arr[0];
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//		*(p++) = i;
//	}
//	return 0;
//}
//
////ָ��ָ��Ŀռ��ͷ�
//int* test()
//{
//	int n = 100;
//	return &n;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}


//#define NDEBUG
//#include <assert.h>    
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);	//����
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}



//дһ�������������������ͱ�����ֵ

//��ֵ
//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}

//��ַ
void Swap2(int* pa, int* pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}

int main()
{
	int a = 5;
	int b = 3;
	printf("����ǰa=%d b=%d\n", a, b);
	//Swap1(a, b);
	Swap2(&a, &b);
	printf("������a=%d b=%d\n", a, b);
	return 0;
}