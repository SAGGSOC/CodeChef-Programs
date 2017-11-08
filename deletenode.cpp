#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node* next;
};
void push(int data)
{
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data= data;
	
}
void deletenode(int key)
{
	struct node* temp=*head,*prev;
	if(temp!=NULL&&temp->data==key)
	{
		*head = temp->next;
		free(temp);
		return;
	}
	while(temp!=NULL&&temp->data!=key)
	 {
	 	prev=temp;temp=temp->next;
	 }
	 if(temp==NULL) return;
	 prev->next=temp->next;
	 free(temp);
	 return;
	
}
