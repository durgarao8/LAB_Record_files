#include<stdio.h>
//to print sum of elements in array using pointers
int main(){
    int a[100],b;
    printf("enter the number of elements in a array=\n");
    scanf("%d",&b);
    for(int i=0;i<b;i++){
        printf("enter the elements %d=",i+1);
        scanf("%d",&a[i]);
    }
    printf("the array elements are \n");
    for(int i=0;i<b;i++){
        printf("%d\n",a[i]);
    }
    int *p=a,c=0;
    for(int i=0;i<b;i++){
        c=c+*(p+i);
    }
    printf("the sum of elements of arrays is %d\n",c);

}