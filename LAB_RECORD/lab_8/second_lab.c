#include<stdio.h>
//to print fibonacci and seuence
int fib(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
int main(){
    int a;
    printf("enter the terms:");
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        printf("%d\t",fib(i));
    }
}