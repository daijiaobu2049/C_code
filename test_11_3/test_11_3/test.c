#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	printf("休息");
//	return 0;
//}

#include <math.h> 
int main()
{
	float a = 0.0;
	scanf("%f",&a);
	float result = sqrt(a);

	if ((a <= 1000) || (a > 0.0))
		printf("%f", result);
	else
		printf("请重新输入");
	return 0;
}
