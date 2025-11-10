#include<stdio.h>
#include<string.h>
//to pass structures to the functions using pointers
struct student{
    int rollno;
    char name[20];
    float cgpa;
};
void display(struct student *p){
    printf("roll no:%d\n",p->rollno);
    printf("name:%s\n",p->name);

}
int main(){
    struct student s1;
    s1.rollno=1;
    strcpy(s1.name,"aasha");
    display(&s1);


}