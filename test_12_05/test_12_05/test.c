#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����ָ��

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
//int(*pf3)(int x, int y) = &Add;//x��yд�ϻ���ʡ�Զ��ǿ��Ե�


//int (*pf3) (int x, int y)
//|     |     ------------
//|     |          |
//|     |          pf3ָ�����Ĳ������ͺ͸����Ľ���
//|     ����ָ�������
//pf3ָ�����ķ�������
//int (*) (int x, int y) //pf3����ָ�����������


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
//	//����1
//	(*(void (*)())0)();
//
//
//	//����2
//	void (*signal(int, void(*)(int)))(int);
//	return 0;
//}


//typedef�ؼ���

//typedef unsigned int uint;
////��unsigned int ������Ϊuin
//
//
//typedef int* ptr_t;
//
//typedef int(*parr_t)[5]; //�µ�������������*���ұ�
//
//typedef void(*pfun_t)(int);//�µ�������������*���ұ�
//
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);

