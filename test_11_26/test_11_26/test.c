#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////����1 - ������const���ε����
//void test1()
//{
//	int n = 10;
//	int m = 20;
//	int* p = &n;
//	*p = 20;//ok?
//	p = &m; //ok?
//}
//
////����2 - ����const����*��������
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
////����3 - ����const����*���ұ����
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
////����4 - ����*���������߶���const
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
//	//������const���ε����
//	test1();
//	//����const����*��������
//	test2();
//	//����const����*���ұ����
//	test3();
//	//����*���������߶���const
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