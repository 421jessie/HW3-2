#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int qrt(int, int, int, int);

int main(void)
{
	int a, b, s, c;
	a = 0;
	c = 1;
	s = 0;
	printf("輸入顯示幾項:");
	scanf_s(" %d ", &b);

	s = qrt(a, b, s, c);

	system("pause");
}

int qrt(int a, int b, int s, int c)
{
	int i;
	if(b == 1)
	printf(" 0 ");

	if (b == 2)
	printf(" 1 ");

	if (b >= 3)
	{
		for (i = 1; i < (b-1); i++)
		{
			s = a + c;
			a = c;
			c = s;
		}
	}
	

	printf(" %d 的 %d 次方為: %d \n", a, b, s);
	return s;
}