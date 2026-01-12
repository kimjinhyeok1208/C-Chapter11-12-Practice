#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int mystrlen(char* str)
{
	int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}

	return count;
}

int strlen_main()
{
	char c[100];

	printf("문자열을 입력하시오:");
	gets_s(c, 100);

	printf("문자열 길이는 %d입니다.", mystrlen(c));

	return 0;
}