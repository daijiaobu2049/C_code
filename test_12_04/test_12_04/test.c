#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// �ж��ַ���s2�Ƿ���s1��ת����ַ���
//int isRotated(char* s1, char* s2) {
//    size_t len1 = strlen(s1);
//    size_t len2 = strlen(s2);
//    // ��������ַ������Ȳ�ͬ��s2��������s1��ת�õ���
//    if (len1 != len2) return 0;
//    // ʹ�ö�̬�ڴ�����������㹻�ռ���ƴ�Ӻ���ַ���
//    char* s1s1 = (char*)malloc((2 * len1 + 1) * sizeof(char));
//    if (s1s1 == NULL) {
//        printf("�ڴ����ʧ�ܣ�\n");
//        exit(1);
//    }
//    // ��s1���Ƶ�s1s1
//    strcpy(s1s1, s1);
//    // ��s1���ӵ�s1s1����
//    strcat(s1s1, s1);
//    // ��s1s1�в���s2
//    int result = (strstr(s1s1, s2) != NULL);
//    free(s1s1);  // �ͷŶ�̬������ڴ�
//    return result;
//}
//
//int main() {
//    char s1[] = "AABCD";
//    char s2[] = "BCDAA";
//    // ���ú����жϲ�������
//    printf("%d\n", isRotated(s1, s2));
//
//    char s3[] = "abcd";
//    char s4[] = "ACBD";
//    printf("%d\n", isRotated(s3, s4));
//
//    return 0;
//}

//��ʽ����
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N);

//int func(int arr[3][3], int x, int y, int key)
//{
//	int i = 0;
//	int j = y - 1;
//	while (i < x && j >= 0)
//	{
//		if (arr[i][j] < key)
//		{
//			i++;
//		}
//		else if (arr[i][j] > key)
//		{
//			j--;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//
//	int ret = func(arr, 3, 3, 8);
//	printf("%d", ret);
//	return 0;
//}




//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����

//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�

//int main()
//{
//	char killer = 'a';
//	for (; killer < 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("������%c\n", killer);
//		}
//	}
//	return 0;
//}


//����Ļ�ϴ�ӡ������ǡ�
//1
//1 1
//1 2 1
//1 3 3 1
//����

//int main()
//{
//	int arr[6][6] = { 0 };
//	int n = 6;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (j == 0 || i == j)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//��ά���鴫�εı���

//void test(int arr[3][5], int x, int y)
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

void test(int(*arr)[5], int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			printf("%d ", *(*(arr + i) + j));
		}
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6},{3,4,5,6,7} };
	test(arr, 3, 5);
	return 0;
}