/*��������a��b��
*��a* a + b * b���ڵ���100��
*�����a * a + b * b��λ�����ϵ����֣�
�������a * a + b * b��
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a, b;
	(void)scanf("%d %d", &a, &b);
	int c = a * a + b * b;
	printf("%d", c >= 100 ? c / 100 : c);
	return 0;
}