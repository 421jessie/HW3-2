#include <stdio.h>
#include <stdlib.h>
int hanoi(int, char, char, char);

int moved = 0;

int main(void) {
    int n;
    printf("Please key-in number of sheet¡G");
    scanf_s("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    printf("\nTotal moved %d steps\n\n", moved);

    return 0;
}

int hanoi(int n, char A, char B, char C) {
    
    if (n == 1) {
        printf("Move sheet from %c to %c\n", A, C);
        moved++;
    }
    else {
        hanoi(n - 1, A, C, B);
        hanoi(1, A, B, C);
        hanoi(n - 1, B, A, C);
    }
}