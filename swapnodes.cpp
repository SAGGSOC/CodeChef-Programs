#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};
void push(struct node** head,int new_data)
{
	struct node* newnode=(struct node*)malloc(sizeof(node));
	newnode->data=newnode;
	newnode->next=*head;
	*head=newnode;
}
void swapnodes(struct node *head, int x, int y)
{
	if(x==y)
	 return;
	struct node *prevX=NULL,*currX = *head_ref;
	while(currX&&currX->data!=x)
	{
		prevX = currX;
       currX = currX->next;
	 } 
}
