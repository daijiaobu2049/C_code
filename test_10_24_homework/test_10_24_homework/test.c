#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


////KiKi想知道已经给出的三条边a，b，c能否构成三角形，如果能构成三角形，判断三角形的类型（等边三角形、等腰三角形或普通三角形）。
//int main() {
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF) 
//    {
//        if ((a + b) > c) {
//            printf("能构成三角形\n");
//            if (a == b && b == c) 
//            {
//                printf("是等边三角形\n");
//                break;
//            }
//            else if (a == b || b == c || a == c)
//            {
//                printf("是等腰三角形\n");
//                break;
//            }
//            else 
//            {
//                printf("普通三角形\n");
//                break;
//            }
//        }
//        else 
//        {
//            printf("不能构成三角形\n");
//            break;
//        }
//    }
//    return 0;
//}


//九九乘法表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}




//打印100~200之间的素数
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//假设能被整除
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)//1和本身能被整除，那么就从2~本身-1
//		{
//			if (i % j == 0)//能被整除的就不是素数
//			{
//				//printf("\n");
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d是素数\n", i);
//		}
//	}
//	return 0;
//}


//猜数字游戏
#include <stdlib.h>
#include <time.h>


void game()
{
	int r = rand() % 100 + 1;
	int guess = 0;
	int count = 5;
	while (count)
	{
		printf("\n你还有%d次机会\n", count);
		printf("请猜数字>:");
		scanf("%d", &guess);
		if (guess > r)
		{
			printf("猜大了\n");
		}
		else if (guess < r)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
		count--;
	}
	if (count == 0)
	{
		printf("次数耗尽，正确的是%d\n", r);
	}
}


void menu()
{
	printf("****************************\n");
	printf("********猜数字1~100*********\n");
	printf("*********  1.play  *********\n");
	printf("*********  0.exit  *********\n");
	printf("****************************\n");
	printf("****************************\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择;>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("游戏结束\n");
				break;
			default:
				printf("选择错误，重新选择！\n");
				break;
		}
	} while (input);
	return 0;
}