#include<stdio.h>
//to create self referencial structure
struct Node{
    int data;
    struct Node *next;
};
int main(){
    struct Node node1,node2,node3;
    node1.data=10;
    node1.next=&node2;
    node2.data=20;
    node2.next=&node3;
    node3.data=30;
    node3.next=NULL;
    printf("data of node1:%d\n",node1.data);
     printf("data of node2:%d\n",node1.next->data);
      printf("data of node3:%d\n",node1.next->next->data);
}