#include <stdio.h>

int main() {
    int n,n1;

    // Input size of square matrix
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &n,&n1);

    // Loop through rows and columns
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n1; j++) {
            // Pattern condition
            if ((i + j) % 2 == 0)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n"); // Move to next row
    }

    return 0;
}
