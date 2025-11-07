#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++){
            scanf("%d", &A[i][j]);}

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &B[i][j]);

    // Addition
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            C[i][j] = A[i][j] + B[i][j];

    printf("Resultant Matrix (Addition):\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++){
            printf("%d ", C[i][j]);
            } 
                   printf("\n");
    }

    return 0;
}
