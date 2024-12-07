#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//KiKi想获得某年某月有多少天，请帮他编程实现。输入年份和月份，计算这一年这个月有多少天。
//多组输入，一行有两个整数，分别表示年份和月份，用空格分隔。
//针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天。

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



//单身狗2

//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。

//例如：
//有数组的元素是：1，2，3，4，5，1，2，3，4，6
//只有5和6只出现1次，要找出5和6.


// 找出数组中只出现一次的两个数字
//void findTwoSingleNumbers(int nums[], int size, int* num1, int* num2) 
//{
//    int xor_result = 0;
//    // 对整个数组元素进行异或操作，得到两个只出现一次的数字的异或结果
//    for (int i = 0; i < size; i++) 
//    {
//        xor_result ^= nums[i];
//    }
//    // 找到异或结果中为1的最低位，用于区分两个只出现一次的数字
//    int flag = 1;
//    while ((xor_result & flag) == 0) 
//    {
//        flag <<= 1;
//    }
//    // 分组异或找出两个不同的数字
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
//    printf("两个只出现一次的数字分别是：%d和%d\n", num1, num2);
//    return 0;
//}