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


//模拟实现strcpy

#include <assert.h>

//为了实现链式访问
//strcpy函数返回的是目标空间的起始地址

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
//	while (*arr2++ = *arr1++)//拷贝字符后，判断表达式的值，当\0拷贝过去后，判断为假，停止循环
//	{
//		;
//	}
//
//	*arr2 = *arr1;//\0
//	return ret;//返回目标空间的起始地址
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



//strcat  字符串追加

//要返回目标空间的起始地址
char* my_strcat(char* dest, char* src)
{
	char* ret = dest;
	assert(dest && src);
	//1.找到目标空间\0
	while (*dest != '\0')
		dest++;
	//2.拷贝
	while (*dest++ = *src++)
		;
	return ret;
}


int main()
{
	char arr1[20] = { "hello " };
	char arr2[] = { "world" };

	//strcat(arr1, arr2);
	my_strcat(arr1, arr2);//字符串追加

	printf("%s\n", arr1);
	return 0;
}