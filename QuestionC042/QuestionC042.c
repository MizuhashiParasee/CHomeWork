//从键盘输入任意3个整数，然后输出这3个数的平均值。

//cuishuning 2020/11

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a, b, c;
	(void)scanf("%d%d%d", &a, &b, &c);
	printf("%g", (float)(a + b + c) / 3);
	return 0;
}