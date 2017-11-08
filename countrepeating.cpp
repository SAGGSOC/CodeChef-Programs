#include <iostream>
#define max_char 256
using namespace std;
struct node{
	char a;
	struct node *next,*prev;
};
void appendnode(struct node **head, struct node **tail, char x)
{
	struct node *temp = new node;
	temp->a = x;
    temp->prev = temp->next = NULL;
	if(*head==NULL)
	{
		*head = *tail = temp;
		return;
	}
	*tail->next=temp;
	temp->prev = *tail;
	*tail = temp;
		
}
void removenode(struct node **head, struct node **tail, struct node *temp)
{
	if(*head==NULL)
	 return;
 if (*head_ref == temp)
        *head_ref = (*head_ref)->next;
    if (*tail_ref == temp)
        *tail_ref = (*tail_ref)->prev;
    if (temp->next != NULL)
        temp->next->prev = temp->prev;
    if (temp->prev != NULL)
        temp->prev->next = temp->next;
 
    delete(temp);
}
void findrepeating()
{
	struct node *inDLL[maxchar];
	bool repeated[maxchar];
	struct node *head=NULL,*tail=NULL;
	for(int i=0;i<maxchar;i++)
	{
		inDLL[i]=NULL;
		repeated[i]=false;
	}
	char stream[] = "geeksforgeeksandgeeksquizfor";
    for (int i = 0; stream[i]; i++)
    {
        char x = stream[i];
        cout << "Reading " << x << " from stream n";
 
        // We process this character only if it has not occurred
        // or occurred only once. repeated[x] is true if x is 
        // repeated twice or more.s
        if (!repeated[x])
        {
            // If the character is not in DLL, then add this at 
            // the end of DLL.
            if (inDLL[x] == NULL)
            {
                appendNode(&head, &tail, stream[i]);
                inDLL[x] = tail;
            }
            else // Otherwise remove this character from DLL
            {
                removeNode(&head, &tail, inDLL[x]);
                inDLL[x] = NULL;
                repeated[x] = true; // Also mark it as repeated
            }
        }
 
        // Print the current first non-repeating character from
        // stream
        if (head != NULL)
            cout << "First non-repeating character so far is "
                 << head->a << endl;
    }
}
 
}
int main()
{
    findFirstNonRepeating();
    return 0;
}

