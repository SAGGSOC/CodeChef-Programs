#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
	struct node *left;
	int data;
	int freq;
	struct node *right;
};
struct datafreq
{
	int data;
	int freq;
};
int compare(const void *a, const void *b)
{
	return ((*(const dataFreq*)))
}
node* newnode(int data)
{
	struct node* node = new node;
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	node->freq=1;
	return node;
}
node *insert(node *root, int data)
{
    if (root == NULL)
        return newnode(data);
    if (data == root->data)
        root->freq += 1;
    else if (data < root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);
    return root;
}
void store(node *root, dataFreq count[], int *index)
{
    if (root == NULL) 
	  return;
 
    store(root->left, count, index);
 
    count[(*index)].freq = root->freq;
    count[(*index)].data = root->data;
    (*index)++;
 
    store(root->right, count, index);
}
void sortbyfrequency(int arr[], int n)
{
	struct node *root= NULL;
	  root= insert(root,arr[i]);
	 
	dataFreq count[n];
	int index = 0;
	store(root,count,&index);
	qsort(count,index,sizeof(count[0]),compare);
	int j=0;
	for(int i=0;i<index;i++)
	{
		for(int freq=count[i].freq; freq>0; freq--)
		  arr[j++]=count[i].data;
	   }   
}
void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	  cout<<arr[i]<<" ";
	cout<<endl;
}
int main()
{
    int arr[] = {2, 3, 2, 4, 5, 12, 2, 3, 3, 3, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortbyfrequency(arr, n);
    printArray(arr, n);
    return 0;
}
}
