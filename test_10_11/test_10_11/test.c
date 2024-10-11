#define _CRT_SECURE_NO_WARNINGS 1

//scanf

#include <stdio.h>

//int main()
//{
//	int score = 0;
//	printf("请输入成绩：");
//	scanf("%d", &score);
//	printf("成绩是：%d\n", score);
//	return 0;
//
// }


//int main()
//{
//	int a = 0;
//	int b = 0;
//	float c = 0;
//	float d = 0;
//	scanf("%d%d%f%f", &a, &b, &c, &d);
//	printf("%d\n%d\n%.1f\n%.1f\n", a, b, c, d);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	float f = 0.0f;
//	int r = scanf("%d %d %f", &a, &b, &f);
//	printf("a=%d b=%d f=%f\n", a, b, f);
//	printf("r=%d\n", r);
//	return 0;
//}


//int main()
//{
//	char name[11];
//	scanf("%20s", name);
//	printf("%s", name);
//	return 0;
//}



int main() 
{
	int year = 0;
	int month = 0;
	int day = 0;
	scanf("%d%*c%d%*c%d", &year, &month, &day);
	printf("%d %d %d", year, month, day);
	return 0;
}