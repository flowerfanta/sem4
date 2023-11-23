//   Q 2. Write a C program that accepts the vertices and edges of a graph and store it as an adjacency matrix. Implement function to traverse the graph using Depth First Search (DFS)
//traversal

/// take it as an example
/*
      {
        0 1 1
        0 0 1
        0 0 0
      }
*/


#include<stdio.h>
#include "C:\Users\iamgh\OneDrive\Desktop\4th sem DSA\queue.h"

void dfs(int m[10][10],int n,int v)
{
    int w;

    static int visited[20]={0};

    visited[v]=1;

    printf("\tv%d",v+1);

    for(w=0;w<n;w++)
    {
        if((m[v][w]==1) && (visited[w]==0))
           dfs(m,n,w);
    }
}




void main()
{
   int i,m[10][10],n,j;

   printf("\n How many vertices:");
   scanf("%d",&n);

   for(i=0;i<n;i++)
      for(j=0;j<n;j++)
      {
         if(i!=j)
         {
             printf("\n is there edge between %d and %d(1/0):",i+1,j+1);
             scanf("%d",&m[i][j]);                       // storing as an adjacency matrix!!!!
         }

       }

   printf("\n The depth first search----->");
   dfs(m,n,0);
}
