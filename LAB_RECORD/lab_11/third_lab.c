#include<stdio.h>
int main()
{
    FILE *fp=fopen("test.txt","a+");
    fprintf(fp,"O23 AIML");
    fclose(fp);
}