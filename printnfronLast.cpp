#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node* next;	
};
void printNthFromLast(struct node* head, int n)
{
	int len=0,i;
	struct node *temp=head;
	while(temp!=NULL)
	  {
	  temp=temp->next;cnt++;
      }
     if(len<n)
	   return;
	 temp=head;  
	 while(temp!=NULL&&i<len-n+1)
       temp=temp->next;
	 printf("%d",temp->data);
	 return;  	    
}
void push(struct Node** head_ref, int new_data)
{

  struct Node* new_node =
          (struct Node*) malloc(sizeof(struct Node));
  new_node->data  = new_data;
  new_node->next = (*head_ref);
  (*head_ref)    = new_node;
}
 
int main()
{
  struct Node* head = NULL;
  push(&head, 20);
  push(&head, 4);
  push(&head, 15);
  push(&head, 35);
 
  printNthFromLast(head, 5);
  return 0; 
}
