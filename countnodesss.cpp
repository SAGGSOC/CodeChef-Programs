#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct Node *newNode(int key)
{
    struct Node *temp =
        (struct Node*)malloc(sizeof(struct Node));
    temp->data = key;
    temp->next = NULL;
    return temp;
}
int countNodesinLoop(struct node *list)
{
	struct node *sl_p=list,*f_p=list;
	while(sl_p&&f_p&&f_p->next)
	{
		slow_p=slow_p->next;
		fast_p=fast_p->next->next;
		if (slow_p == fast_p)
            return countNodes(slow_p);
	}
}
int countNodes(struct Node *n)
{
   int res = 1;
   struct Node *temp = n;
   while (temp->next != n)
   {
      res++;
      temp = temp->next;
   }
   return res;
}
int main()
{
    struct Node *head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);
 
    head->next->next->next->next->next = head->next;
 
    printf("%d \n", countNodesinLoop(head));
 
    return 0;
}
