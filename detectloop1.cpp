bool detectloop(struct node *h)
{
	unordered_set<Node *> s;
	if(h!=NULL)
	{
		if(s.find(h)!=s.end())
		{
			return true;
		}
		s.insert(h);
		h=h->next;
	}
}
