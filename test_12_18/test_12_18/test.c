#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <ctype.h>


//дһ�����룬���ַ����е�Сд��ĸת��д�������ַ����䡣

int main()
{
	char arr[] = "I am a Student.";
	int i = 0;
	while (arr[i] != '\0')
	{
		if (islower(arr[i]))//if(arr[i] >= 'a' && arr[i] <= 'z')
		{
			//arr[i] = arr[i] - 32;
			arr[i] = toupper(arr[i]);
		}
		i++;
	}
	printf("%s\n", arr);
	return 0;
}


