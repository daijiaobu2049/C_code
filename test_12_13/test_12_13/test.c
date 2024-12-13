#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//sizeof只关注占用内存空间的大小，不在乎内存中存放什么数据。它是一个操作符
//int main()
//{
//	int a = 10;
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof a);
//	printf("%zd\n", sizeof(int));
//	return 0;
//}


//strlen 是C语言库函数，功能是求字符串长度。函数原型如下：
//size_t strlen(const char* str);

//#include <string.h>
//
//int main()
//{
//	char arr1[3] = { 'a', 'b', 'c' };
//	char arr2[] = "abc";
//	printf("%zd\n", strlen(arr1));
//	printf("%zd\n", strlen(arr2));
//
//	//统计的是从strlen 函数的参数str 中这个地址开始向后， \0 之前字符串中字符的个数。
//	//strlen 函数会一直向后找\0 字符，直到找到为止，所以可能存在越界查找。
//
//	printf("%zd\n", sizeof(arr1));
//	printf("%zd\n", sizeof(arr2));
//	return 0;
//}



