#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//��������������Ԫ�صĵ�ַ
//�������������⣺
//1. sizeof(������)
//2. &������

//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%zd\n", sizeof(a));// 16
//	//������a��������sizeof�ڲ���a��ʾ�������飬���������������Ĵ�С����λ���ֽ�
//	printf("%zd\n", sizeof(a + 0));// 4/8
//	//�����a����������ʾ��Ԫ�ص�ַ��a+0������Ԫ�ص�ַ��sizeof�Ǽ�����Ԫ�ص�ַ�Ĵ�С
//	printf("%zd\n", sizeof(*a));// 4
//	//�����a��*a ������Ԫ�أ�����a[0]��*a -- *(a+0) -- a[0]
//	printf("%zd\n", sizeof(a + 1));// 4/8
//	//�����a����������ʾ��Ԫ�صĵ�ַ��a+1�ǵڶ���Ԫ�صĵ�ַ(&a[1]),�����ַ�Ĵ�С��4/8
//	printf("%zd\n", sizeof(a[1]));// 4
//	printf("%zd\n", sizeof(&a));// 4/8
//	//&a - �����������a��ʾ�������飬&a����������ĵ�ַ������ĵ�ַҲ�ǵ�ַ���ǵ�ַ����4/8���ֽڵĳ���
//	printf("%zd\n", sizeof(*&a)); //16
//	//1. *&a�������*��&�����ˣ�����sizeof(*&a) == sizeof(a) 
//	//2. &a - ��������ĵ�ַ�������ǣ�int(*)[4], *&a���ʵľ����������
//	printf("%zd\n", sizeof(&a + 1));// 4/8
//	//&a������ĵ�ַ��&a+1�����������������Ǹ�λ�õĵ�ַ��&a+1�ǵ�ַ����ַ����4/8���ֽ�
//	printf("%zd\n", sizeof(&a[0]));// 4/8
//	printf("%zd\n", sizeof(&a[0] + 1));// 4/8
//	//�ڶ���Ԫ�صĵ�ַ
//	return 0;
//}



//�ַ�����



//int main()
//{
//	//char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%zd\n", sizeof(arr));//6
//	//printf("%zd\n", sizeof(arr + 0));//4/8
//	//printf("%zd\n", sizeof(*arr));//1
//	//printf("%zd\n", sizeof(arr[1]));//1
//	//printf("%zd\n", sizeof(&arr));//4/8
//	//printf("%zd\n", sizeof(&arr + 1));//4/8
//	//printf("%zd\n", sizeof(&arr[0] + 1));//4/8
//	return 0;
//}


//#include <string.h>
//
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%zd\n", strlen(arr));//���ֵ
//	printf("%zd\n", strlen(arr + 0));//���ֵ
//	//printf("%zd\n", strlen(*arr));//err
//	//arr����������ʾ��Ԫ�صĵ�ַ
//	//*arr ����Ԫ��  --��a'�� 97�����ݸ�strlen��strlen ����Ϊ97���ǵ�ַ��Ȼ��ȥ�����ڴ�
//	//err -- ������
//	//printf("%zd\n", strlen(arr[1]));//err
//	printf("%zd\n", strlen(&arr)); //���ֵ
//	printf("%zd\n", strlen(&arr + 1));//���ֵ
//	printf("%zd\n", strlen(&arr[0] + 1));//���ֵ
//	return 0;
//}