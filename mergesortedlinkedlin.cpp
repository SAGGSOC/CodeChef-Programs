struct node* sortedMerge()
{
	if(head1==NULL&&head2==NULL)
	 return NULL;
	node *res=NULL;
	while(a!=NULL&&b!=NULL)
	{
		if(a->data<=b->data)
		{
			node *temp=a->next;
			a->next=res;
			res=a;
			a=temp;
		 }
		else
		{
			node *temp=b->next;
			b->next=res;
			res=b;
			b=temp
		  }  
	 } 
	 while(a!=NULL)
	 {
	 	node* temp=a->next;
	 	a->next=res;
	 	res=a;
	 	a=temp;
	 }
	 while (b != NULL)
    {
        Node *temp = b->next;
        b->next = res;
        res = b;
        b = temp;
    }
 
    return res;
}
