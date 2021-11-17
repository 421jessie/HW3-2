#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char word;
	char WORD;
	printf("輸入一英文大寫字母: ");
	scanf_s("%c",&word);

	WORD = word + 32;

	printf("%c的小寫字母為:%c",word, WORD);

	return 0;
}