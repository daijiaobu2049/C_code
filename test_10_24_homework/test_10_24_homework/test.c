#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


////KiKi��֪���Ѿ�������������a��b��c�ܷ񹹳������Σ�����ܹ��������Σ��ж������ε����ͣ��ȱ������Ρ����������λ���ͨ�����Σ���
//int main() {
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF) 
//    {
//        if ((a + b) > c) {
//            printf("�ܹ���������\n");
//            if (a == b && b == c) 
//            {
//                printf("�ǵȱ�������\n");
//                break;
//            }
//            else if (a == b || b == c || a == c)
//            {
//                printf("�ǵ���������\n");
//                break;
//            }
//            else 
//            {
//                printf("��ͨ������\n");
//                break;
//            }
//        }
//        else 
//        {
//            printf("���ܹ���������\n");
//            break;
//        }
//    }
//    return 0;
//}


//�žų˷���
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




//��ӡ100~200֮�������
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�����ܱ�����
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)//1�ͱ����ܱ���������ô�ʹ�2~����-1
//		{
//			if (i % j == 0)//�ܱ������ľͲ�������
//			{
//				//printf("\n");
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d������\n", i);
//		}
//	}
//	return 0;
//}


//��������Ϸ
#include <stdlib.h>
#include <time.h>


void game()
{
	int r = rand() % 100 + 1;
	int guess = 0;
	int count = 5;
	while (count)
	{
		printf("\n�㻹��%d�λ���\n", count);
		printf("�������>:");
		scanf("%d", &guess);
		if (guess > r)
		{
			printf("�´���\n");
		}
		else if (guess < r)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
		count--;
	}
	if (count == 0)
	{
		printf("�����ľ�����ȷ����%d\n", r);
	}
}


void menu()
{
	printf("****************************\n");
	printf("********������1~100*********\n");
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
		printf("��ѡ��;>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("��Ϸ����\n");
				break;
			default:
				printf("ѡ���������ѡ��\n");
				break;
		}
	} while (input);
	return 0;
}