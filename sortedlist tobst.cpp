#include<stdio.h>
#include<stdlib.h>
struct lnode
{
  int data;
  struct lnode* next;	
};
struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct 
int countLNodes(struct LNode *head)
{
    int count = 0;
    struct LNode *temp = head;
    while(temp)
    {
        temp = temp->next;
        count++;
    }
    return count;
}
void push(struct LNode** head_ref, int new_data)
{
    struct LNode* new_node =
        (struct LNode*) malloc(sizeof(struct LNode));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}
void printList(struct LNode *node)
{
    while(node!=NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
}
struct TNode* newNode(int data)
{
    struct TNode* node = (struct TNode*)
                         malloc(sizeof(struct TNode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
 
    return node;
}
void preOrder(struct TNode* node)
{
    if (node == NULL)
        return;
    printf("%d ", node->data);
    preOrder(node->left);
    preOrder(node->right);
}
struct node* sortedlisttobstre(struct lnode *head, int n)
{
	if(n<=0)
	 return NULL;
	struct node *left = sortedlisttobstre(*head, n/2);
	struct node *root = newnode((*head)->data);
	root->left=left;
	*head=*head->next;
	root->right = sortedlisttobstre(head_ref, n-n/2-1);
 
    return root;
}
int main()
{
    struct LNode* head = NULL;
    push(&head, 7);
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
 
    printf("\n Given Linked List ");
    printList(head);
    struct TNode *root = sortedListToBST(head);
    printf("\n PreOrder Traversal of constructed BST ");
    preOrder(root);
 
    return 0;
}

