#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <assert.h>

//����1-������
//size_t my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//����2-ָ��-ָ��
//size_t my_strlen(const char* str)
//{
//	const char* start = str;
//	assert(str != NULL);
//
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}

//�ݹ�ķ���
size_t my_strlen(const char* str)
{
	assert(str != NULL);
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
	{
		return 0;
	}
}

int main()
{
	char arr[] = { "abcdef" };
	size_t len = my_strlen(arr);
	printf("%zd", len);
	return 0;
}