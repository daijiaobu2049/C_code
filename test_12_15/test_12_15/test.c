#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//��������������Ԫ�صĵ�ַ
//��������������
//1. sizeof(������)
//2. &������ --�������������ʾ�������飬ȡ����������ĵ�ַ



//int main()
//{
//	char arr[] = "abcdef";         //a b c d e f \0
//
//	printf("%zd\n", sizeof(arr));//7
//	//��������������sizeof�ڲ��������������Ĵ�С
//	printf("%zd\n", sizeof(arr + 0));//4/8
//	//arr+0��������Ԫ�صĵ�ַ����Ȼ�ǵ�ַ����С����4/8���ֽ�
//	printf("%zd\n", sizeof(*arr));//1
//	//*arr����Ԫ��
//	printf("%zd\n", sizeof(arr[1]));//1
//	printf("%zd\n", sizeof(&arr));//4/8
//	//&arr������ĵ�ַ���ǵ�ַ��С����4/8���ֽ�
//	printf("%zd\n", sizeof(&arr + 1));//4/8
//	//&arr������ĵ�ַ��&arr+1�������������飬ָ�����������Ǹ�λ�ã�����&arr+1���ǵ�ַ���ǵ�ַ��С����4/8���ֽ�
//	printf("%zd\n", sizeof(&arr[0] + 1));//4/8
//	//&arr[0]����Ԫ�ص�ַ��&arr[0]+1�ǵڶ���Ԫ�صĵ�ַ���ǵ�ַ��С����4/8���ֽ�
//	return 0;
//}


//#include <string.h>
//
//int main()
//{
//	char arr[] = "abcdef";         //a b c d e f \0
//
//	printf("%zd\n", strlen(arr));//6
//	//arr����Ԫ�ص�ַ��strlen�Ǵӵ�һ��Ԫ�ؿ�ʼͳ��\0֮ǰ������������6
//	printf("%zd\n", strlen(arr + 0));//6
//	//arr����Ԫ�ص�ַ��arr+0������Ԫ�ص�ַ
//	
//
//	//printf("%zd\n", strlen(*arr));//err
//	// arr����Ԫ�صĵ�ַ��*arr����Ԫ�� -'a'-97��97��Ϊ��ַ������strlen������97�����ַ���ܱ�����--��������
//	//printf("%zd\n", strlen(arr[1]));//err--��������
//
//
//	printf("%zd\n", strlen(&arr));//6
//	//&arr������ĵ�ַ������ĵ�ַ����Ԫ�صĵ�ַ��ָ��ͬһ��λ�õģ���ôstrlenҲ�Ǵӵ�һ��Ԫ�ص�λ�ÿ�ʼ�����ʵ�
//	printf("%zd\n", strlen(&arr + 1));//���ֵ
//	//��������������
//	printf("%zd\n", strlen(&arr[0] + 1));//5
//	//�ӵ�һ��Ԫ�ؿ�ʼ����һ��
//	return 0;
//}


int main()
{
	char* p = "abcdef";

	printf("%zd\n", sizeof(p));//4/8
	//p��ָ��������������ָ�����p�Ĵ�С
	printf("%zd\n", sizeof(p + 1));//4/8
	//p + 1�ǵڶ���Ԫ�صĵ�ַ����ַ�Ĵ�С����4/8
	printf("%zd\n", sizeof(*p));//1
	//p��������char*������*pֻ�ܷ���һ���ֽ�
	printf("%zd\n", sizeof(p[0]));//1
	//p[0] -- *(p+0) -- *p
	printf("%zd\n", sizeof(&p));//4/8
	//&p��ָ������ĵĵ�ַ��Ҳ�ǵ�ַ���ǵ�ַ����4/8���ֽ�
	//&p -- char** -- ����ָ��
	printf("%zd\n", sizeof(&p + 1));//4/8
	//&p��p�ĵ�ַ��&p+1������p������ָ����p�ĺ�ߣ�&p + 1�ǵ�ַ
	printf("%zd\n", sizeof(&p[0] + 1));//4/8
	//&p[0]+1����b�ĵ�ַ   p[0] -- *(p+0) -- *p
	return 0;
}