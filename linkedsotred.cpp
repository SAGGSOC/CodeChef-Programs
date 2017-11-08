#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* sortedintersect(struct node* a,struct node* b)
{
	struct node* result = NULL;
	struct node** last = &result;
	while(a!=NULL && b!=NULL)
	{
		if(a->data==b->data)
		{
			push(last, a->data);
			last = &((*last->next));
			a=a->next;
			b=b->next;
		}
		else if(a->data<b->data)
		  a=a->next;
		else
		  b=b->next;  
	}
	return result;
}
