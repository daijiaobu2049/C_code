#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>

//演⽰多个字符从两端移动，向中间汇聚
//int main()
//{
//	//创建两个数组
//	char arr1[] = "hello world!!!!!";
//	char arr2[] = "################";
//	//a b c
//	//0 1 2
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{	
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//休眠1000ms
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//⼆分查找
//在⼀个升序的数组中查找指定的数字n，很容易想到的⽅法就是遍历数组，但是这种⽅法效率⽐较低。
//⽐如我买了⼀双鞋，你好奇问我多少钱，我说不超过300元。你还是好奇，你想知道到底多少，我就让
//你猜，你会怎么猜？你会1，2，3，4...这样猜吗？显然很慢；⼀般你都会猜中间数字，⽐如：150，然
//后看⼤了还是⼩了，这就是⼆分查找，也叫折半查找

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	scanf("%d", &k);//输入要查找的数，假设是7
	int left = 0;//左下标
	int right = sizeof(arr) / sizeof(arr[0]) - 1;   //总长除以第一个的长的-1=最后一个的长度-----右下标
	int flag = 0;//假设没找到

	while (left <= right)
	{
		int mid = (left + right) / 2;//下标总长除2
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到下标了是%d\n", mid);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		printf("找不到\n");
	}
	return 0;
}