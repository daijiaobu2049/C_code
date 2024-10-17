#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <stdlib.h>
#include <string.h>


int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑在1分钟后关机，如果输入：“我是猪”，就取消关机。\n！！！叉掉是没用的\n");
	scanf("%s", input);
	if (strcmp("我是猪", input) == 0)
	{
		system("shutdown -a");
		printf("成功取消\n");
	}
	else
	{
		goto again;
	}
	return 0;
}