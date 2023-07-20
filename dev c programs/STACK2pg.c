#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*top =NULL;
    void push()
   {
   	int x;
    printf("enter the element:\n");
    scanf("%d",&x);
    struct node *newnode;
    newnode= (struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("stack is full\n");
    }
    else
    {
       newnode->data=x;
       newnode->next=top;
       top=newnode;
    }
   }
int pop()
{
    struct node *newnode;
    int x=-1;
    if(top==NULL)
    {
        printf("stack is empty\n");
    }
    else
    {
        newnode=top;
        top=top->next;
        x=newnode->data;
        free(newnode);
    }
    return x;
}

void display()
{
    struct node *newnode;
    newnode=top;
    while(newnode!=NULL)
    {
        printf("%d",newnode->data);
        newnode=newnode->next;
    }
    printf("/n");
}

int main ()
{
    while(1)
    {
        printf("ENTER YOUR CHOICE:\n1.push()\n1.pop()\n3.display()\n");
        int ch;
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
             push();
             break;
            }
            case 2:
            {
             pop();
             break;
            }
            case 3:
            {
             display();
             break;
            }
            default:
             printf("INVALID CHOICE!!\n");
        }
    }
    return 0;
}
