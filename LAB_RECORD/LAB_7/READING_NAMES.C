#include <stdio.h>

int main() {
    char names[50][50];  // 5 strings, each up to 49 chars
    int i,n;
    printf("enter the number of names you want to enter ");
    scanf("%d",&n);                
    printf("Enter %d names:\n",n);
    for(i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    printf("\nThe names are:\n");
    for(i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
