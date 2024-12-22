#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <string.h>

////strcmp
//int main()
//{
//	char arr1[] = "abq";
//	char arr2[] = "abcdef";
//	int ret = strcmp(arr1, arr2);
//	//printf("%d\n", ret);
//
//	if (ret > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	return 0;
//}


//my_strcmp

//int my_strcmp(char* str1, char* str2)
//{
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//	//if (*str1 > *str2)
//	//{
//	//	return 1;
//	//}
//	//else
//	//{
//	//	return -1;
//	//}
//}

//int main()
//{
//	char arr1[] = "abq";
//	char arr2[] = "abcdef";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n", ret);
//
//	/*if (ret > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}*/
//	return 0;
//}


int main()
{
	char arr[] = "192.168.6.111";
	char* sep = ".";
	char* str = NULL;
	for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
	{
		printf("%s\n", str);
	}
	return 0;
}