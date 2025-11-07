#include <stdio.h>

int main() {
    int n,n1,m2[100][100];

    // Input size of square matrix
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &n,&n1);

    // Printing the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n1; j++) {
            m2[i][j]=1;
        }
        //printf("\n"); // Move to next row
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n1;j++){
            printf("%d ",m2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
