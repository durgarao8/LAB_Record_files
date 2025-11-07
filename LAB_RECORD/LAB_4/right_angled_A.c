#include <stdio.h>

int main() {
    int i, j, rows;
    char ch = 'A';  // starting character

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;  // move to next letter
            if (ch > 'Z')  // reset after Z if needed
                ch = 'A';
        }
        printf("\n");
    }

    return 0;
}
