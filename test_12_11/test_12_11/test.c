#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void print_arr(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

//int cmp_int(const void* p1, const void* p2)
//{
//	if (*(int*)p1 > *(int*)p2)
//	{
//		return 1;
//	}
//	else if(*(int*)p1 < *(int*)p2)
//	{
//		return -1;
//	}
//	else
//	{
//		return 0;
//	}
//}

int cmp_int(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}

//测试qsort，排序整型数据
void test1()
{
	int arr[] = { 1,3,7,9,8,5,2,4,6,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}

//测试qsort，排序结构体数据

//创建一个结构体
struct stu
{
	char name[20];
	int age;
};

#include <string.h>

int cmp_stu_by_name(const void* p1, const void* p2)
{
	return strcmp(((struct stu*)p1)->name, ((struct stu*)p2)->name);
}

void test2()
{
	struct stu arr[] = { {"zhangsan",20},{"lisi",35},{"wangwu",18} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
}

int cmp_stu_by_age(const void* p1, const void* p2)
{
	return ((struct stu*)p1)->age - ((struct stu*)p2)->age;
}

void test3()
{
	struct stu arr[] = { {"zhangsan",20},{"lisi",35},{"wangwu",18} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
}


void Swap(char* buf1, char* buf2, size_t width)
{
	char tmp = 0;
	for (int i = 0; i < width; i++)
	{
		tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;

		buf1++;
		buf2++;
	}
}


void bubble_sort(void* base, size_t sz, size_t width, int (*cmp)(const void* p1, const void* p2))
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < j - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

void test4()
{
	int arr[] = { 1,3,7,9,8,5,2,4,6,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}


int main()
{
	//test1();
	//test2();
	//test3();
	test4;
	return 0;
}