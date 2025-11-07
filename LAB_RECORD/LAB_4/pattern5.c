#include <stdio.h>

int main() {
    int rows, i, j, space, num = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print leading spaces
        for (space = i; space < rows; space++)
            printf("  ");

        // Print numbers
        for (j = 1; j <= (i - 1); j++) {
            printf(" %d ", num);
            num++;
        }

        printf("\n");
    }

    return 0;
}
