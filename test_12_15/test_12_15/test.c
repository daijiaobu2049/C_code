#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//数组名是数组首元素的地址
//但是有两个例外
//1. sizeof(数组名)
//2. &数组名 --这里的数组名表示整个数组，取出的是数组的地址



//int main()
//{
//	char arr[] = "abcdef";         //a b c d e f \0
//
//	printf("%zd\n", sizeof(arr));//7
//	//数组名单独放在sizeof内部，计算的是数组的大小
//	printf("%zd\n", sizeof(arr + 0));//4/8
//	//arr+0是数组首元素的地址，既然是地址，大小就是4/8个字节
//	printf("%zd\n", sizeof(*arr));//1
//	//*arr是首元素
//	printf("%zd\n", sizeof(arr[1]));//1
//	printf("%zd\n", sizeof(&arr));//4/8
//	//&arr是数组的地址，是地址大小就是4/8个字节
//	printf("%zd\n", sizeof(&arr + 1));//4/8
//	//&arr是数组的地址，&arr+1跳过的整个数组，指向了数组后的那个位置，但是&arr+1还是地址，是地址大小就是4/8个字节
//	printf("%zd\n", sizeof(&arr[0] + 1));//4/8
//	//&arr[0]是首元素地址，&arr[0]+1是第二个元素的地址。是地址大小就是4/8个字节
//	return 0;
//}


//#include <string.h>
//
//int main()
//{
//	char arr[] = "abcdef";         //a b c d e f \0
//
//	printf("%zd\n", strlen(arr));//6
//	//arr是首元素地址，strlen是从第一个元素开始统计\0之前的字数个数是6
//	printf("%zd\n", strlen(arr + 0));//6
//	//arr是首元素地址，arr+0还是首元素地址
//	
//
//	//printf("%zd\n", strlen(*arr));//err
//	// arr是首元素的地址，*arr是首元素 -'a'-97，97作为地址传给了strlen，但是97这个地址不能被访问--程序会崩溃
//	//printf("%zd\n", strlen(arr[1]));//err--程序会崩溃
//
//
//	printf("%zd\n", strlen(&arr));//6
//	//&arr是数组的地址，数组的地址和首元素的地址是指向同一个位置的，那么strlen也是从第一个元素的位置开始向后访问的
//	printf("%zd\n", strlen(&arr + 1));//随机值
//	//跳过了整个数组
//	printf("%zd\n", strlen(&arr[0] + 1));//5
//	//从第一个元素开始，加一个
//	return 0;
//}


int main()
{
	char* p = "abcdef";

	printf("%zd\n", sizeof(p));//4/8
	//p是指针变量，计算的是指针变量p的大小
	printf("%zd\n", sizeof(p + 1));//4/8
	//p + 1是第二个元素的地址，地址的大小就是4/8
	printf("%zd\n", sizeof(*p));//1
	//p的类型是char*，所以*p只能访问一个字节
	printf("%zd\n", sizeof(p[0]));//1
	//p[0] -- *(p+0) -- *p
	printf("%zd\n", sizeof(&p));//4/8
	//&p是指针变量的的地址，也是地址，是地址就是4/8个字节
	//&p -- char** -- 二级指针
	printf("%zd\n", sizeof(&p + 1));//4/8
	//&p是p的地址，&p+1是跳过p变量，指向了p的后边，&p + 1是地址
	printf("%zd\n", sizeof(&p[0] + 1));//4/8
	//&p[0]+1就是b的地址   p[0] -- *(p+0) -- *p
	return 0;
}