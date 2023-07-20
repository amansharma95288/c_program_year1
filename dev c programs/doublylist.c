//program to insert value at the beginig in doubly link list..?

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void insert_atbegin()
{
    int item;
    struct node *head,*ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("OVERLOAD\n");
    }
    else
    printf("enter the element\n");
    scanf("%d",&item);
    ptr->data=item;
    if(head==NULL)
    {
        ptr->next=NULL;
        ptr->prev=NULL;
        head=ptr;
    }
    else
    {
    	ptr->prev=NULL;
    	ptr->next=head;
    	head->prev=ptr;
    	head=ptr;
	}
	 printf("element inserted succesfully\n");
}
void insert_atend()
{
    int item;
    struct node *head,*ptr,*temp;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("OVERLOAD\n");
    }
    else
    printf("enter the element\n");
    scanf("%d",&item);
    ptr->data=item;
    if(head==NULL)
    {
        ptr->next=NULL;
        ptr->prev=NULL;
        head=ptr;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->prev=temp;
        ptr->next=NULL;
    }
    printf("element inserted succesfully\n");
}
void insert_atrandom()
{
    int item,i,loc;
    struct node *head,*ptr,*temp;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("OVERLOAD\n");
    }
    else
	{
	
    printf("enter the position where u want to insrt an element\n");
    scanf("%d",&loc);
    for(i=0;i<loc;i++)
    {
        temp=temp->next;
        if(temp==NULL)
        {
            printf("their are less then %d elements",loc);
            return;
        }
        printf("enter the element:\n");
        scanf("%d",&item);
        ptr->data=item; //data insertion 
        ptr->next=temp->next;
        ptr->prev=temp;
        temp->next=ptr;
        temp->next->prev=ptr;
        printf("node iserted\n");
    }
    }
}
int main ()
{
    insert_atbegin();
    insert_atend();
    return 0;
}
