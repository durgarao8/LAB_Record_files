#include<stdio.h>
int main()
{
    FILE *fp=fopen("test.txt","r");
    char name[30];
    fgets(name,sizeof(name),fp);
    printf("%s",name);
    fclose(fp);
}