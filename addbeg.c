#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node{
    int data;
    struct node *next;
}*head=NULL;
void addbeg(int d){
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=d;
    temp->next=head;
    head=temp;
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
    addbeg(8);
    addbeg(7);
    addbeg(4);
    travel();
}