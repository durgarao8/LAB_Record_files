#include<stdio.h>
//to find factorial of given number
int factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
   int a;
   printf("enter the number to find factorial:");
   scanf("%d",&a);
   printf("factorial of %d: %d",a,factorial(a)); 

}