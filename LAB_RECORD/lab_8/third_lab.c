#include<stdio.h>
//to print sum of numbers using recursion
int sum(int n);
int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return n+(sum(n-1));
    }
}
int main(){
    int a;
    printf("enter the range");
    scanf("%d",&a);
    printf("the sum of %d numbers :%d",a,sum(a));
}