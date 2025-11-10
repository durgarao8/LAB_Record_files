#include<stdio.h>
int main()
{
    FILE *fp=fopen("test.txt","w");
    fprintf(fp,"welcome to pspc lab");
    printf("File created successfully\n");
    fclose(fp);
}