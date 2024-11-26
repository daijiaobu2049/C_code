#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////代码1 - 测试无const修饰的情况
//void test1()
//{
//	int n = 10;
//	int m = 20;
//	int* p = &n;
//	*p = 20;//ok?
//	p = &m; //ok?
//}
//
////代码2 - 测试const放在*的左边情况
//void test2()
//{
//	int n = 10;
//	int m = 20;
//	const int* p = &n;
//	*p = 20;//ok?
//	p = &m; //ok?
//}
//
//
////代码3 - 测试const放在*的右边情况
//void test3()
//{
//	int n = 10;
//	int m = 20;
//	int* const p = &n;
//	*p = 20; //ok?
//	p = &m; //ok?
//}
//
//
////代码4 - 测试*的左右两边都有const
//void test4()
//{
//	int n = 10;
//	int m = 20;
//	int const* const p = &n;
//	*p = 20; //ok?
//	p = &m; //ok?
//}
//
//int main()
//{
//	//测试无const修饰的情况
//	test1();
//	//测试const放在*的左边情况
//	test2();
//	//测试const放在*的右边情况
//	test3();
//	//测试*的左右两边都有const
//	test4();
//	return 0;
//}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//            0 1 2 3 4 5 6 7 8 9
	int sz = sizeof(arr) / sizeof(arr[0]);

	//int* p = &arr[0];

	int* p = &arr[sz - 1];

	for (int i = 0; i < sz; i++)
	{
		/*printf("%d ", *p);
		p++;*/

		//printf("%d ", *(p + i));


		printf("%d ", *p);
		p--;
	}
	return 0;
}