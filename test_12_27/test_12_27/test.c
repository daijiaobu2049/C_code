#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//int	chaeck_sys()
//{
//	int a = 1;
//	if (*(char*) & a == 1)//int*
//	{
//		return 1;//小端
//	}
//	else
//	{
//		return 0;//大端
//	}
//}

//int	chaeck_sys()
//{
//	int a = 1;
//	return *(char*)&a; //返回1是小端，返回0是大端
//}
//
//int main()
//{
//	if (chaeck_sys() == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}



//00000000000000000000000001111011
//00000000000000000000000001111011
//00000000000000000000000001111100     



//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}


//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}


int main()
{
	char a = 128;
	printf("%u\n", a);
	return 0;
}