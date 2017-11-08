#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	node* node next;
};
struct node* head;
void push(int data)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	node* temp=head;
	node->data=data;
	node->next=NULL;
	if(*head==NULL)
	{
		*head = newnode;	  
    } 
    
    while(temp->next!=NULL)
      temp=temp->next;
      
    temp->next=newnode;
	return;  
}
void insertafter(struct node* prev_node,int new_data)
{
	if(prev_node==NULL)
	{
		printf("The given previous node cannot be NULL");
		return;
	}
	struct node *newnode=(struct node*)malloc(sizeof(struct Node));
	newnode->data=data;
	newnode->next=prevnode->next;
	prevnode->next=newnode;
}
void push(int data)
{
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=*head;
	*head=newnode;
	
}
int main()
{
  search();	
}
