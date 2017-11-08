#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node *sortedIntersect(struct node *a, struct node *b)
{
	if(a==NULL||b==NULL)
	 return NULL;
	if(a->data<b->data)
	 return sortedIntersect(a->next, b); 
	if(a->data>b->data)
	 return sortedIntersect(a, b->next);
	 struct node *tmp=(struct node *)malloc(sizeof(struct node));
	 tmp->data = a->data;
	 tmp->next= sortedIntersect(a->next,b->next);
	 return tmp; 
}
