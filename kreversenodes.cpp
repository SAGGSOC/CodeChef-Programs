#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node* next;	
};
struct node *kAltReverse(struct node *head, int k)
{
	struct node* current = head;
	struct node* next;
	struct node* prev=NULL;
	int cnt=0;
	while(current!=NULL&&count<k)
	{
		next = current->next;
		current->next = prev;
		prev=current;
		current=next;
		count++;
	}
	if(head!=NULL)
	  head->next=current;
	count=0;
	while(count<k-1&&current!=NULL)
	  current=current->next;
	if(current!=NULL)
	  current->next=kAletReverse(current->next,k);    
	return prev;
}
