#include<iostream>
using namespace std;
struct node
{
	int key;
	struct node* next;
};
node* sortedmerge(node *a, node *b)
{
  if(a==NULL&&b==NULL)
   return NULL;
  Node *res=NULL;
  while(a!=NULL && b!=NULL)
  {
  	if(a->key<=b->key)
  	{
  		Node *temp = a->next;
  		a->next = res;
  		res=a;
  		a=temp;
	  }
	 else
	 {
	 	node *temp = b->next;
	 	b->next = res;
	 	res = b;
	 	b=temp;
	  } 
	   } 
	   while(a!=NULL)
	   {
	   	node 
	   	
		   }	
}
