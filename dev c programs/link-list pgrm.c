
//singly link list inserting single node,,insertion at begining ,,insertion at end and insertion at specific location ..?

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*head;
void insert_atbegin()
{
	int ele;
	struct node *ptr;
	ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("OVERLOAD\n");
	}
	else
	{
		printf("enter the element:\n");
		scanf("%d",&ele);
		ptr->data=ele;
		ptr->next=head;
		head=ptr;
		printf("element inserted succesfully\n");
	}
}

void lastinsert()
{
	int ele;
	struct node *ptr;
	struct node *temp;
	
	ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("OVERLOAD\n");
	}
	else
	{
		printf("enter the element\n:");
		scanf("%d",&ele);
		ptr->data=ele;
		if(head==NULL)
		{
			ptr->next=NULL;      //ptr->next=head
			head=ptr;
			printf("node inserted\n");
		}
		else
		{
		  temp=head;
		  while(temp->next!=NULL)
		  {
//		  	ptr->data=ele;
		  	temp=temp->next;
//		  	temp=ptr;
		  }
		  temp->next=ptr;
		  ptr->next=NULL;
		  printf("node inserted\n");
		}
	}
}

void random_insert()
{
	int i,pos,ele;
	struct node *temp,*ptr;
	ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("OVERLOAD\n");
	}
	else
	{
		printf("enter the element:\n");
		scanf("%d",&ele);
		printf("enter the postion where you want to insert the element\n");
		scanf("%d",&pos);
		ptr->data=ele;
		temp=head;
		for(i=0;i<pos;i++)
		{
			temp=temp->next;
			if(temp==NULL)
			{
				printf("node cann't be insertee\n");
			    return;
			}
		}
		ptr->next=temp->next;
		temp->next=ptr;
		printf("node inserted\n");
		
	}
}
int main()
{
	insert_atbegin();
	lastinsert();
	random_insert();
	return 0;
}
	
	 

