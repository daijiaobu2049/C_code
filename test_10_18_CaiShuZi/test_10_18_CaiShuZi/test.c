#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
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
		if (guess < r)
		{
			printf("��С��\n");
		}
		else if(guess > r)
		{
			printf("�´���\n");
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
		printf("�˵ķ�������ȷ����%d\n", r);
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("��Ϸ�˳�\n");
				break;
			default:
				printf("ѡ���������ѡ��\n");
				break;
		}
	} while (input);
	return 0;
}