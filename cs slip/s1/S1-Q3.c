//  Q 2. Write a C program for the Implementation of Prim’s Minimum spanning tree algorithm.


#include<stdio.h>
#include<stdlib.h>

#define max 20


void main()
{
    int i , j , a , b , u , v , n , ne=1;
    int cost[max][max] , visited[max]={0} , min , mincost=0;

    printf("\n enter number of vertices = ");
    scanf("%d",&n);

    printf("\nenter the adjacency matrix");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cost[i][j]=0;

            if(i!=j)
            {
                printf("\n enter the cost from %d and %d = ",i,j);
                scanf("%d",&cost[i][j]);
            }
            if(cost[i][j]==0)
                cost[i][j]=999;
        }
    }

    printf("\n cost matrix is = \n");
    for(i=1; i<=n; i++)
    {
            for(j=1; j<=n; j++)
            {
                printf("\t%d",cost[i][j]);
            }
            printf("\n");

    }

    visited[1]=1;
    printf("\n");

    while(ne<n)
    {
        for(i=1 , min=999; i<=n; i++)
            for(j=1; j<=n; j++)
                if(cost[i][j]<min)
                {
                    if(visited[i]!=0)
                    {
                        min=cost[i][j];
                        a=u=i;
                        b=v=j;
                    }
                }
        if(visited[u]==0 || visited[v]==0)
        {
            printf("\n edge %d(%d %d) cost %d",ne,a,b,min);
            ne++;

            mincost+=min;  // mincost = mincost + min;
            visited[b]=1;
        }
        cost[a][b]=cost[b][a]=999;
    }
    printf("\n minimum cost = %d",mincost);

}



// take it for example!!!

/*                  { 0, 2, 0, 6, 0 },
                        { 2, 0, 3, 8, 5 },
                        { 0, 3, 0, 0, 7 },
                        { 6, 8, 0, 0, 9 },
                        { 0, 5, 7, 9, 0 }
*/
