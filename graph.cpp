#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct AdjListNode{
	int dest;
	struct AdjListNode* next;
};
struct AdjList
{
	struct AdjListNode * head;
};
struct Graph
{
  int V;
  struct AdjList* array;	
};
struct AdjListNode* newAdjListNode(int dest)
{
	 struct AdjListNode* newnode = (struct AdjListNode*)malloc(sizeof(struct AdjListNode));
	 newnode->dest = dest;
	 newnode->next = NULL;
	 return newnode;
}
struct Graph* createGraph(int V)
{
	struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
	graph->V = V;
	graph->array = (struct AdjList*)malloc(V*sizeof(struct AdjList));
	int i;
	for(i=0;i<V;++i)
	  graph->array[i].head = NULL;
	
	return graph;  
}
void addedge(struct Graph* graph,int src, int dest)
{
	struct AdjListNode* newnode = newAdjListNode(dest);
	newnode->next = graph->array[src].head;
	graph->array[src].head=newnode;
	newnode = newAdjListNode(src);
	newnode->next = graph->array[dest].head;
	graph->array[dest].head=newnode;
}
void printGraph(struct Graph* graph)
{
	int v;
	for(v=0;v<graph->V;++v)
	{
		struct AdjListNode* pcrawl = graph->array[v].head;
		printf("\n Adjacency Lsit of vertex %d\n head ", v);
		while(pcrawl)
		{
			printf("-> %d", pcrawl->dest);
			pcrawl = pcrawl->next;
		}
		printf("\n");
	}
}
void DFSUtil(int v, bool visited[])
{
    visited[v] = true;
    cout << v << " ";
 
 
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}
 
void DFS(int v)
{
 
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
    DFSUtil(v, visited);
}
int main()
{
    
    int V = 5;
    struct Graph* graph = createGraph(V);
    addedge(graph, 0, 1);
    addedge(graph, 0, 4);
    addedge(graph, 1, 2);
    addedge(graph, 1, 3);
    addedge(graph, 1, 4);
    addedge(graph, 2, 3);
    addedge(graph, 3, 4);
 
    printGraph(graph);
    DFS(2);
    return 0;
}
	

