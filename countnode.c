#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node{
    int data;
    struct node *next;
}*head=NULL;
int count(){
    struct node*temp;
    int c=0;
    temp=head;
    while(temp!=NULL)
    {
        c=c+temp->data;
        temp=temp->next;
    }
    return c;
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
int main(){
 travel();
    printf("\nsum=%d",count());
}