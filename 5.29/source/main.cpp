#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int i, j,k,f,LCM;
	printf("��J��Ʀr���̤p������:");
	scanf_s("%d %d", &i, &j);

	if (i > j)
	{
		for (k = 1; k < j; k++)
		{
			if (j % k == 0)
				f = k;
		}
	}
	else
		for (k = 1; k < i; k++)
		{
			if (i % k == 0)
				f = k;
		}

	LCM = (i * j )/ f;
	printf("%d�M%d���̤p�����Ƭ�:%d", i, j, LCM);
	
}