#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//KiKi����ĳ��ĳ���ж����죬��������ʵ�֡�������ݺ��·ݣ�������һ��������ж����졣
//�������룬һ���������������ֱ��ʾ��ݺ��·ݣ��ÿո�ָ���
//���ÿ�����룬���Ϊһ�У�һ����������ʾ��һ��������ж����졣

int main()
{
    int year = 0;
    int mouth = 0;
    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    while (scanf("%d %d", &year, &mouth) != EOF)
    {
        int day = days[mouth - 1];
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            if (mouth == 2)
            {
                day++;
            }
        }
        printf("%d\n", day);
    }
    return 0;
}



//����2

//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//��дһ�������ҳ�������ֻ����һ�ε����֡�

//���磺
//�������Ԫ���ǣ�1��2��3��4��5��1��2��3��4��6
//ֻ��5��6ֻ����1�Σ�Ҫ�ҳ�5��6.


// �ҳ�������ֻ����һ�ε���������
//void findTwoSingleNumbers(int nums[], int size, int* num1, int* num2) 
//{
//    int xor_result = 0;
//    // ����������Ԫ�ؽ������������õ�����ֻ����һ�ε����ֵ������
//    for (int i = 0; i < size; i++) 
//    {
//        xor_result ^= nums[i];
//    }
//    // �ҵ��������Ϊ1�����λ��������������ֻ����һ�ε�����
//    int flag = 1;
//    while ((xor_result & flag) == 0) 
//    {
//        flag <<= 1;
//    }
//    // ��������ҳ�������ͬ������
//    *num1 = 0;
//    *num2 = 0;
//    for (int i = 0; i < size; i++) 
//    {
//        if (nums[i] & flag) 
//        {
//            *num1 ^= nums[i];
//        }
//        else 
//        {
//            *num2 ^= nums[i];
//        }
//    }
//}
//
//int main()
//{
//    int nums[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 6 };
//    int num1, num2;
//    int size = sizeof(nums) / sizeof(nums[0]);
//    findTwoSingleNumbers(nums, size, &num1, &num2);
//    printf("����ֻ����һ�ε����ֱַ��ǣ�%d��%d\n", num1, num2);
//    return 0;
//}