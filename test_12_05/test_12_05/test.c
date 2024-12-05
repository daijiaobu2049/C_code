#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//函数指针

//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("test: %p\n", test);
//	printf("&test: %p\n", &test);
//	return 0;
//}

//void test()
//{
//	printf("hehe\n");
//}
//void (*pf1)() = &test;
//void (*pf2)() = test;
//int Add(int x, int y)
//{
//	return x + y;
//}
//int(*pf3)(int, int) = Add;
//int(*pf3)(int x, int y) = &Add;//x和y写上或者省略都是可以的


//int (*pf3) (int x, int y)
//|     |     ------------
//|     |          |
//|     |          pf3指向函数的参数类型和个数的交代
//|     函数指针变量名
//pf3指向函数的返回类型
//int (*) (int x, int y) //pf3函数指针变量的类型


//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*pf3)(int, int) = Add;
//	printf("%d\n", (*pf3)(2, 3));
//	printf("%d\n", pf3(3, 5));
//	return 0;
//}


//int main()
//{
//
//	//代码1
//	(*(void (*)())0)();
//
//
//	//代码2
//	void (*signal(int, void(*)(int)))(int);
//	return 0;
//}


//typedef关键字

//typedef unsigned int uint;
////将unsigned int 重命名为uin
//
//
//typedef int* ptr_t;
//
//typedef int(*parr_t)[5]; //新的类型名必须在*的右边
//
//typedef void(*pfun_t)(int);//新的类型名必须在*的右边
//
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);

