#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <assert.h>

//const char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cur = str1;
//
//	//特殊情况，str2指向的是空字符串，直接返回str1
//	if (*str2 == '\0')
//	{
//		return str1;
//	}
//
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = str2;
//
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//
//
//int main()
//{
//	char arr[] = "abcdefabcdef";
//	char* p = "cdef";
//	const char* ret = my_strstr(arr, p);
//	if (ret == NULL)
//	{
//		printf("不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

#include <string.h>
#include <errno.h>

int main()
{
	FILE* pf = fopen("data.txt", "r");//"r"读，以读文件的形式，打开文件，如果这个文件不存在，就打开失败
	if (pf == NULL)
	{
		printf("打开文件失败，原因是：%s\n", strerror(errno));
		perror("打开文件失败，原因是");
		return 1;
	}
	else
	{
		printf("打开文件成功\n");
		fclose(pf);
		pf = NULL;
	}
	return 0;
}