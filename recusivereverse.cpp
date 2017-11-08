void recursiveReverse(struct Node** head)
{
	struct Node* first;
	struct Node* rest;
	if(*head==NULL)
	 return;
	first = *head;
	rest=first->next;
	if(rest==NULL)
	  return;
	recursiveReverse(&rest);
	first->next->next=first;
	first->next=NULL;
	*head=rest;   
}
