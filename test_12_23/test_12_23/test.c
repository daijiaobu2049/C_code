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
//	//���������str2ָ����ǿ��ַ�����ֱ�ӷ���str1
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
//		printf("������\n");
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
	FILE* pf = fopen("data.txt", "r");//"r"�����Զ��ļ�����ʽ�����ļ����������ļ������ڣ��ʹ�ʧ��
	if (pf == NULL)
	{
		printf("���ļ�ʧ�ܣ�ԭ���ǣ�%s\n", strerror(errno));
		perror("���ļ�ʧ�ܣ�ԭ����");
		return 1;
	}
	else
	{
		printf("���ļ��ɹ�\n");
		fclose(pf);
		pf = NULL;
	}
	return 0;
}