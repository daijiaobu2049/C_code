#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <string.h>

//strcpy

//int main()
//{
//	char arr1[] = { "abcdef" };
//	char arr2[20] = { 0 };
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//ģ��ʵ��strcpy

#include <assert.h>

//Ϊ��ʵ����ʽ����
//strcpy�������ص���Ŀ��ռ����ʼ��ַ

//char* my_strcpy(char* arr2, const char* arr1)
//{
//	assert(arr1 != NULL);
//	assert(arr2 != NULL);
//
//	assert(arr1 && arr2);
//
//	char* ret = arr2;
//	//while (*arr1 != '\0')
//	//{
//	//	*arr2 = *arr1;
//	//	arr1++;
//	//	arr2++;
//	//}
//
//	while (*arr2++ = *arr1++)//�����ַ����жϱ��ʽ��ֵ����\0������ȥ���ж�Ϊ�٣�ֹͣѭ��
//	{
//		;
//	}
//
//	*arr2 = *arr1;//\0
//	return ret;//����Ŀ��ռ����ʼ��ַ
//}
//
//
//
//int main()
//{
//	char arr1[] = { "abcdefg" };
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}



//strcat  �ַ���׷��

//Ҫ����Ŀ��ռ����ʼ��ַ
char* my_strcat(char* dest, char* src)
{
	char* ret = dest;
	assert(dest && src);
	//1.�ҵ�Ŀ��ռ�\0
	while (*dest != '\0')
		dest++;
	//2.����
	while (*dest++ = *src++)
		;
	return ret;
}


int main()
{
	char arr1[20] = { "hello " };
	char arr2[] = { "world" };

	//strcat(arr1, arr2);
	my_strcat(arr1, arr2);//�ַ���׷��

	printf("%s\n", arr1);
	return 0;
}