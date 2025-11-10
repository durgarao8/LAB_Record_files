#include<stdio.h>
//write a program that creates nested structures,assincing and accessing values of the structure
struct Student{
    int rollno;
    float cgpa;
    char name[20];
    struct Address{
        char vname[20];
        int pincode;
    }ads;
}; 
int main(){
    struct Student s1={1,9.7,"charan",{"RKV",516330}};
    printf("roll no:%d\n",s1.rollno);
    printf("name:%s\n",s1.name); 
    printf("cgpa:%d\n",s1.cgpa);
    printf("locationo:%s\n",s1.ads.vname);
    printf("pincode:%d\n",s1.ads.pincode);

}