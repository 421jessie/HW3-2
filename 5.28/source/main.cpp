#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char word;
	char WORD;
	printf("��J�@�^��j�g�r��: ");
	scanf_s("%c",&word);

	WORD = word + 32;

	printf("%c���p�g�r����:%c",word, WORD);

	return 0;
}