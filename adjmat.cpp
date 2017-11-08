#include <bits/stdc++.h>
#include<map>
#include <utility>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
   
   map<int,int> edge;
   int n,v,w,k;
   cout<<"Enter the number of vertices";
   scanf("%d",&n);
   int adjmat[n][n];
   cout<<"Enter the num of edges";
   cin>>k;
   for(int i=0;i<n;i++)
   	 {
   	 	for(int j=0;j<n;j++)
   	 	{
   	 		adjmat[i][j]=0;
		}
		cout<<endl;
	}
   for(int i=0;i<n;i++)
   {
   	 cout<<"Enter v and w";
   	 cin>>v>>w;
   	 adjmat[v][w]=1;
   	 edge.insert(pair <int,int>(v,w));
   }
   
  // map<int,int>::iterator it;
  //for(it=edge.begin();it!=edge.end();++it)
  // {
  // 	    cout  <<  '\t' << it->first 
  //            <<  '\t' << it->second << '\n';
  //		adjmat[it->first][it->second]=1;
  //}
    for(int i=0;i<n;i++)
   	 {
   	 	for(int j=0;j<n;j++)
   	 	{
   	 		printf("%d",adjmat[i][j]);
		}
		cout<<endl;
	}
	for(i=0;i<n;i++)
        visited[i]=0;
 
    DFS(0);
   
}
void DFS(int node){
		
		visited[node]=1;
		int i;
		cout<<node<<" ";
			for(i=0;i<vertex;i++){
				if(a[node][i] && !visited[i]){
					DFS(i);
				}
			}
			
		}
void bfs(int node)
{
  	visited[node]=1;
    queue<int> qu;
	qu.push(node);
			
	while(!qu.empty()){
	int element=qu.front();
	int i;
	qu.pop();
	cout<<element<<" ";
	for(i=0;i<vertex;i++){
	if(a[element][i] && !visited[i]){
	qu.push(i);
	visited[i]=1;
	}
	}
