//   Q 2. Write a C program that accepts the vertices and edges of a graph and store it as an adjacency
//   matrix. Implement function to traverse the graph using Breadth First Search (BFS) traversal.


#include<stdio.h>
#include "queue.h"


void bfs(int m[10][10],int n)
{
    int v=0,w;

    int visited[20]={0};

    initq(&q);

    visited[v]=1;

    addq(&q,v);

    while(!isempty(&q))
    {

        v=removeq(&q);

        printf("\tv%d",v+1);

        for(w=0;w<n;w++)
          if((m[v][w]==1) && (visited[w]==0))
          {
              addq(&q,w);

              visited[w]=1;
          }
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
             scanf("%d",&m[i][j]);
         }

       }

   printf("\n The Breadth First Search ---->");
   bfs(m,n);

}
