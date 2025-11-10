#include<stdio.h>
//to print value of input by pointer and its address,and its value by pointer to pointer
int main(){
    int a=10;
    int *p=&a;
    int **q=&p;
    printf("the address of a = %p\n",&a);
    printf("the address of a = %p\n",p);
    printf("the address of a = %p\n",q);
    printf("the address of a = %p\n",*q);
    printf("the address of a = %d\n",a);
    printf("the address of a = %d\n",*p);
    printf("the address of a = %d\n",**q);

}