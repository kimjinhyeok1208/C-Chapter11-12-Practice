#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int swap_main()
{
	int a, b;

	printf("두 정수를 입력하시오:");
	scanf("%d %d", &a, &b);

	swap(&a, &b);

	printf("교환 후: %d %d", a, b);

	return 0;
}