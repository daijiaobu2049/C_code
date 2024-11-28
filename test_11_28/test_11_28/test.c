#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//指针的关系运算

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//	while (p < &arr[sz])
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


//野指针

//指针未初始化
//int main()
//{
//	int* p;//局部变量指针未初始化，默认为随机值
//	*p = 20;
//	return 0;
//}
//
////指针越界访问
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = &arr[0];
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		//当指针指向的范围超出数组arr的范围时，p就是野指针
//		*(p++) = i;
//	}
//	return 0;
//}
//
////指针指向的空间释放
//int* test()
//{
//	int n = 100;
//	return &n;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}


//#define NDEBUG
//#include <assert.h>    
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);	//断言
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}



//写一个函数，交换两个整型变量的值

//传值
//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}

//传址
void Swap2(int* pa, int* pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}

int main()
{
	int a = 5;
	int b = 3;
	printf("交换前a=%d b=%d\n", a, b);
	//Swap1(a, b);
	Swap2(&a, &b);
	printf("交换后a=%d b=%d\n", a, b);
	return 0;
}