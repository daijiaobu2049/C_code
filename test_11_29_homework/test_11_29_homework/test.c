#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	//*(pulPtr + 3) = *(pulPtr + 3) + 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}




#include <string.h>

//ai

//void printStringBackwards(char* str) {
//    int len = strlen(str);
//    char* ptr = str + len - 1;
//
//    while (ptr >= str) {
//        printf("%c", *ptr);
//        ptr--;
//    }
//    printf("\n");
//}
//
//int main() {
//    char str[100];
//
//    // 获取用户输入的字符串
//    printf("请输入一个字符串：");
//    fgets(str, sizeof(str), stdin);
//    // 去除fgets读取到的换行符（如果有的话）
//    str[strcspn(str, "\n")] = '\0';
//
//    printStringBackwards(str);
//
//    return 0;
//}


void Reverse(char* arr)
{
    int len = strlen(arr);
    char* a = arr + len - 1;
 /*   for (int i = 0; i < len; i++)
    {
        return *arr;
        a--;
    }*/
    while (a >= arr) 
    {
        printf("%c", *a);
        a--;
    }
    printf("\n");
}

int main()
{
    char arr[10000] = {0};
 /*   while (gets(arr))
    {
        Reverse(arr);
    }*/

    fgets(arr, sizeof(arr), stdin);
    arr[strcspn(arr, "\n")] = '\0';
    Reverse(arr);
    return 0;
}


//bi

//#include <string.h>
//
//void Reverse(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char str[10000] = { 0 };
//	while (gets(str))
//	{
//		Reverse(str);
//		printf("%s\n", str);
//	}
//	return 0;
//}