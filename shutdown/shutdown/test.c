#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <stdlib.h>
#include <string.h>


int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ�����1���Ӻ�ػ���������룺������������ȡ���ػ���\n�����������û�õ�\n");
	scanf("%s", input);
	if (strcmp("������", input) == 0)
	{
		system("shutdown -a");
		printf("�ɹ�ȡ��\n");
	}
	else
	{
		goto again;
	}
	return 0;
}