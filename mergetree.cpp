#include <stdio.h>
#include <Stdlib.h>
struct node* node{
	struct node* left;
	struct node* right;
	int data;
};
struct node* mergetrees(struct node* root1,struct node* root2,int m,int n){
	
	int *arr1 = new int[m];
	int i=0;
	storeinorder(root1,arr1,&i);
	
	int *arr2 = new int[n];
	int j=0;
	storeinorder(root2,arr2,&j);
	
	int *mergedarr = merge(arr1,arr2,m,n);
	 
	return sortedarr(mergedarr,0,m+n-1);
}
struct node* sortedarr(int arr[],int strt,int end)
{
	if(start<end)
	 return NULL;
	int mid= (start+end)/2;
	struct node* root = newnode(arr[mid]);
	root->left= sortedarr(arr,start,mid-1);
	root-right=sortedarr(arr,mid+1,end-1);
	return root; 
}
void storeinorder(struct node* node,int inorder[],int *index_ptr)
{
	if(node==NULL)
	{
		return;
	}
	
	storeinorder(node->left,inorder,index_ptr);
	inorder[*indexptr]=node->data;
	*indexptr++;
	storeinorder(node->right,inorder,index_ptr);
}
int *merge(int arr1[],int arr2[],int m,int n)
{
	int *mergedarr = new int[m+n];
	
	while(i<m&&j<n)
	{
		if(arr1[i]<arr2[j])
		{ 
		  mergedarr[k]=arr1[i];
		  i++;k++;
		}
		else 
		{
		  mergedarr[k]=arr2[j];
		  j++;k++;
		}
	}
	while(i<m)
	{
		mergedarr[k++]=arr1[i];
		i++;
	}
	while(j<n)
	{
		mergedarr[k]=arr2[j];
		k++;j++;
	}
   return mergedarr;
}
int main()
{
	struct node* root = newnode()
 } 
