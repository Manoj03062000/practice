#include <stdio.h>

int main() {
    int row, coloum;

    printf("Enter rows & column: ");
    scanf("%d %d", &row, &coloum);

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < coloum-i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}