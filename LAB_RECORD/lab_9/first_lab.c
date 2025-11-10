#include<stdio.h>
// to swap two numbers by using pointers 
int main(){
    int a,b,c,*p,*q;
    printf("enter the input a and b =");
    scanf("%d %d",&a,&b);
    printf("the value of a is %d and b is %d \n",a,b);
    p=&a;
    q=&b;
    c=*p;
    *p=*q;
    *q=c;
    printf("the value of a is %d and b is %d\n",a,b);

    
}
