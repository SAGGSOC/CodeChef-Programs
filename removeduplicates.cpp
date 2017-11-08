void removeDuplicates(struct node *start)
{
	unordered_set<int> seen;
	struct node *curr = start;
	struct node *prev= NULL;
	while(curr!=NULL)
	{
		if(seen.find(curr->data!=seen.end())
		{
			prev->next=curr->next;
			delete(curr);
		}
		else
		{
			seen.insert(curr->data);
			prev=curr;
		}
		curr=prev->next;
	}
}
