#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct Node* next;	
};
void deleteList(struct node** head)
{
	struct node* current = *head;
	struct node* next;
	while(current!=NULL)
	{
		next=current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
