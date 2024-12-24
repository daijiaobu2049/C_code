#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <string.h>
#include <assert.h>

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(src && dest);
//	for (int i = 0; i < num; i++)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}


void* my_memmove(void* dest, const char* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	if (dest < src)//前->后
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else//后->前
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[20] = { 0 };
	//memcpy(arr2, arr1+2, 20);
	//my_memcpy(arr2, arr1 + 2, 20);
	my_memmove(arr1, arr1 + 2, 20);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
}