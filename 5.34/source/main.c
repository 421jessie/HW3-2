#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int qrt(int, int, int);

int main(void)
{
	int a, b, s, i;

	printf("��J���ƩM����:");
	scanf_s("%d %d", &a, &b);
	s = a;

	if (b > 1)
	{
		s = qrt(a, b, s);
	}

	system("pause");
	return 0;
}

int qrt(int a, int b, int s)
{
	int i;
	for (i = 1; i < b; i++)
	{
		s = s * a;
	}

	printf(" %d �� %d ���謰: %d \n", a, b, s);
	return s;
}