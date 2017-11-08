#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node* next;
};

void printList(struct node *node)
{
    while(node!=NULL){
        cout<<node->data<<' ';
        node = node->next;
    }
    printf("\n");
}

void push(struct node** head_ref, int new_data)
{
    struct node* new_node =	(struct node*) malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

struct node* findIntersection(struct node* head1, struct node* head2);

int main()
{
    long test;
    cin>>test;
    while(test--)
    {
        struct node* a = NULL;
        struct node* b = NULL;
        int n, m, tmp;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>tmp;
            push(&a, tmp);
        }
        cin>>m;
        for(int i=0; i<m; i++)
        {
            cin>>tmp;
            push(&b, tmp);
        }
        printList(findIntersection(a, b));
    }
    return 0;
}
/*
structure of the node is as
struct node
{
	int data;
	struct node* next;
};
*/
struct node* findIntersection(struct node* head1, struct node* head2)
{
    node * ptr1=head1;
   node *ptr2=head2;
    node *head = NULL;
    node *tail = NULL;
    int count1=0;
    int count2=0;
    int i=0, j=0;
    
    
    while(ptr1!=NULL)
    {
      count1++;
      ptr1=ptr1->next;
    }
    while(ptr2!=NULL)
    {
      count2++;
      ptr2=ptr2->next;
    }
    
    int one[count1], two[count2], three[count1+count2];
    ptr1=head1;
    ptr2=head2;
     while(ptr1!=NULL)
    {
      one[i] = ptr1->data;
      ptr1=ptr1->next;
      i++;
    }
    while(ptr2!=NULL)
    {
      two[j]=ptr2->data;
      ptr2=ptr2->next;
      j++;
    }
    int k=0;
    sort(one, one+count1);
    sort(two, two+count2);
    
   for(i=0; i<count1; i++)
   {
       for(j=0; j<count2; j++)
       {
           if(one[i] == two[j])
           {
               three[k] = one[i];
               two[j]= -1;
               k++;
               break;
           }
           
       }
       
   }
   
   for(i=0; i<k; i++)
  {
      node *naya = new node;
      naya->data = three[i];
      naya->next = NULL;
      
      if(head == NULL)
      {
          head = naya;
          tail = naya;
      }
      else
      {
          tail->next = naya;
          tail = naya;
      }
      
  }
    
   return head; 
    
}

