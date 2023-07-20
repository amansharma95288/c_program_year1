#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head;
void insert_atbeg()
{
	struct node *new_node;
	int item;
	new_node=(struct node*)malloc(sizeof(struct node));
	if(new_node==NULL)
	{
		printf("OVERFLOW\n");
	}
	else
	{
		printf("enter the element:\n");
		scanf("%d",&item);
		new_node->data=item;
		new_node->next=head;
		head=new_node;
		printf("element inserted successfully\n");
	}
}
void insert_atend()
{
	struct node *new_node;
    struct node *temp;
	int item;
	new_node=(struct node*)malloc(sizeof(struct node));
	if(new_node==NULL)
	{
		printf("OVERFLOW\n");
	}
	else
	{
	  printf("enter the item\n");
	  scanf("%d",&item);
      new_node->data=item;
      if(head==NULL)
      {
      	new_node->next=NULL;
      	head=new_node;
      	printf("element inserted _>");
	  }
	  else
	  {
	  	temp=head;
	  	while(temp->next!=NULL)
	  	{
	  		temp=temp->next;
		}
		  temp->next=new_node;
	      new_node->next=NULL;
	      printf("the element is inserted\n");
	  }
	
	}
}
int main()
{   int i;
	for(i=0;i<4;i++)
	{
		insert_atbeg();	
	}
//	insert_atbeg();
//	insert_atbeg();
//	insert_atbeg();
//	insert_atbeg();
//	insert_atend();
	return 0;
}
