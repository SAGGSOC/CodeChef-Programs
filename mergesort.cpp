#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
void mergesort(struct node** headR)
{
	struct node* head = *headR;
	struct node* a;
	struct node* b;
	if((head==NULL)||(head->next==NULL))
	{
		return;
	}
	frontbacksplit(head, &a, &b);
	mergesort(&a);
	mergesort(&b);
	*head = sortedmerge(a,b);
}
struct node* sortedmerge(struct node* a, struct node* b){
	struct node* result=NULL;
	if(a==NULL)
	 return b;
	else if(b==NULL)
	 return a;
	if(a->data<=b->data)
	{
		result=a;
		result->next=sortedmerge(a->next,b);
	  }
	else
	{
	  result= b;
	  result->next = SortedMerge(a,b->next);
		}
	return(result);	    
}
void frontbacksplit(struct node* source,struct node** frontR, struct node** backR)
{
	struct Node* fast;
	struct Node* slow;
	if(source==NULL||source->next==NULL)
	{
		*frontR=source;
		*backR=NULL;
	}
	else
	{
		slow=source;
		fast=source->next;
		while(fast!=NULL)
		{
			fast=fast->next;
			if(fast!=NULL)
			{
			
			slow=slow->next;
			fast=fast->next;
			}
		}
	
	*frontR = source;
	*backR = slow->next;
	slow->next=NULL;
}
void printList(struct Node *node)
{
  while(node!=NULL)
  {
   printf("%d ", node->data);
   node = node->next;
  }
}
void push(struct Node** head_ref, int new_data)
{
  struct Node* new_node =
            (struct Node*) malloc(sizeof(struct Node));
  new_node->data  = new_data;
  new_node->next = (*head_ref);    
  (*head_ref)    = new_node;
} 
