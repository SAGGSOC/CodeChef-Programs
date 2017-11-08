#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct StackNode* newNode(int data)
{
	int data;
	struct StackNode* next;
}
struct StackNode* newNode(int data)
{
	struct StackNode* stacknode=(struct StackNode*)malloc(sizeof(struct StackNode));
	StackNode->data=data;
	stackNode->next=NULL;
}
int isEmpty(struct StackNode *root)
{
	return !root;	
}
void push(struct StackNode** root, int data)
{
	struct StackNode* stackNode = newnode(data);
	stackNode->next = *root;
	*root=stackNode;
}
int pop(struct StackNode** root)
{
	if(isEmpty(*root))
	  return INT_MIN;
	struct StackNode* temp = *root;
	*root = (*root)->next;
	int pop = temp->data;
	free(temp);
	return ;  
}
