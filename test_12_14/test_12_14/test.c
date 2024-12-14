#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//数组名是数组首元素的地址
//但是有两个例外：
//1. sizeof(数组名)
//2. &数组名

//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%zd\n", sizeof(a));// 16
//	//数组名a单独放在sizeof内部，a表示整个数组，计算的是整个数组的大小，单位是字节
//	printf("%zd\n", sizeof(a + 0));// 4/8
//	//这里的a是数组名表示首元素地址，a+0还是首元素地址。sizeof是计算首元素地址的大小
//	printf("%zd\n", sizeof(*a));// 4
//	//这里的a，*a 就是首元素，就是a[0]。*a -- *(a+0) -- a[0]
//	printf("%zd\n", sizeof(a + 1));// 4/8
//	//这里的a是数组名表示首元素的地址，a+1是第二个元素的地址(&a[1]),计算地址的大小是4/8
//	printf("%zd\n", sizeof(a[1]));// 4
//	printf("%zd\n", sizeof(&a));// 4/8
//	//&a - 这里的数组名a表示整个数组，&a是整个数组的地址。数组的地址也是地址，是地址就是4/8个字节的长度
//	printf("%zd\n", sizeof(*&a)); //16
//	//1. *&a，这里的*和&抵消了，所以sizeof(*&a) == sizeof(a) 
//	//2. &a - 这是数组的地址，类型是：int(*)[4], *&a访问的就是这个数组
//	printf("%zd\n", sizeof(&a + 1));// 4/8
//	//&a是数组的地址，&a+1是跳过整个数组后的那个位置的地址，&a+1是地址，地址都是4/8个字节
//	printf("%zd\n", sizeof(&a[0]));// 4/8
//	printf("%zd\n", sizeof(&a[0] + 1));// 4/8
//	//第二个元素的地址
//	return 0;
//}



//字符数组



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
//	printf("%zd\n", strlen(arr));//随机值
//	printf("%zd\n", strlen(arr + 0));//随机值
//	//printf("%zd\n", strlen(*arr));//err
//	//arr是数组名表示首元素的地址
//	//*arr 是首元素  --‘a'－ 97，传递给strlen后，strlen 会认为97就是地址，然后去访问内存
//	//err -- 程序奔溃
//	//printf("%zd\n", strlen(arr[1]));//err
//	printf("%zd\n", strlen(&arr)); //随机值
//	printf("%zd\n", strlen(&arr + 1));//随机值
//	printf("%zd\n", strlen(&arr[0] + 1));//随机值
//	return 0;
//}