#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
 
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
 
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct node* newNode(int data)
{
  struct node* node = (struct node*)
                      malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
 
  return(node);
}
int largestbst(struct node* node)
{
	int min=INT_MAX;
	int max=INT_MIN;
	int max_size=0;
	bool is_bst = 0;
	largestBSTUtil(node, &min, &max, &max_size, &is_bst);
 
  return max_size;
}





