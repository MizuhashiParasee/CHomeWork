/*��������һ����Ȼ��������������3������˻��ͳ˻��и�λ������ɵ�����������磬���� 5370 ����3���Ϊ16110�������Ϊ 16110, 61110 ��
�����ʽ�� ��Ȼ�� n
�����ʽ�� ��3����ͳ˻��и�λ������ɵ����������Ӣ�Ķ��Ÿ�����
*/

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int IntToDigital(int n, int* num);
void Bubble(int* a, int n);

int main()
{
	int n;
	scanf("%d", &n);
	n = n * 3;
	printf("%d,", n);
	int num[30];
	int m = IntToDigital(n, num);
	Bubble(num, m);
	for (int i = m - 1; i >= 0; i--)
	{
		printf("%d", num[i]);
	}
	return 0;
}

int IntToDigital(int n, int* num)
{
	int i = 0;
	while (n)
	{
		num[i++] = n % 10;
		n /= 10;
	}
	return i;
}

/// <summary>
/// ð������
/// </summary>
/// <param name="a">�����������</param>
/// <param name="n">����ĸ���</param>
void Bubble(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (a[j] < a[j - 1])
			{
				int t = a[j];
				a[j] = a[j - 1];
				a[j - 1] = t;
			}
		}
	}
}