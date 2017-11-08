#include <stdio.h>
#include <stdlib.h>
struct node* node{
	int data;
	struct node* next;
};
void reverseutil(struct node* curr,struct node* prev,struct node** head)
{
	if(curr->next==NULL)
	{
		*head=curr;
		curr->next=prev;
		return;
	}
	node *next=curr->next;
	curr->next=prev;
	reverseutil(next,curr,head);
}
void reverse(node** head)
{
	if(head!=NULL)
	reverseutil(*head,NULL,head);
}

