#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* next;
};
void rotate(struct node* head,int k)
{
	if(k==0)
	  return;
	struct node* current = *head;
	int count=1;
	while(count<k&&current!=NULL)
	{
		current=current->next;
		count++;
	  } 
	if(current==NULL)
	  return;
	struct node* knode=current;
	while(current->next!=NULL)
	  current=current->next;
	current->next=*head;
	*head=knode->next;
	knode->next=NULL;       
}
void push(struct node* head,int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->next=*head;
	*head=node;	
}
int main()
{
	
}
