#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node{
    int data;
    struct node *next;
}*head=NULL;
void addend(int d){
    struct node*temp,temp1;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
    temp->next=NULL;
    temp1=head;
    if(temp1==NULL)
    head=temp;
    else{
        while(temp1->next!=Null)
        temp1=temp1->next;
    temp->next=temp;
    }
}
void travel()
{
    struct node*temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
int main()
{   
    addend(2);
    addend(9);
    addend(5);
    travel();
}