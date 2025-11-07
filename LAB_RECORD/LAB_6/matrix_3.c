#include <stdio.h>

int main() {
    int n,n1, m3[100][100];

    
    printf("Enter the number of rows and coloumns : ");
    scanf("%d%d", &n,&n1);

        for (int i = 0; i < n; i++) {
        for (int j = 0; j < n1; j++) {
    
            if (i == 0 || i == n - 1 || j == 0 || j == n1 - 1)
                m3[i][j]=1;
            else
                m3[i][j]=0;
        }
        }
         for(int i=0;i<n;i++){
        for(int j=0;j<n1;j++){
            printf("%d ",m3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
