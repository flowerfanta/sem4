//    Q1. Write a C program for the Implementation of Kruskal’s Minimum spanning tree algorithm.


/// take it as an example
/*
   {  0 3 2 7
      3 0 4 0
      2 4 0 5
      7 0 5 0  }

*/




#include<stdio.h>
#include<stdlib.h>
#define max 20

int i , j , k , a , b , u , v , n , ne=1;
int min , mincost=0 , cost[max][max] , parent[max];

int find(int);
int uni(int,int);

void main()
{
    printf("\n\t\t\t\t implementation of kruskal's algorithm\n");
    printf("\n enter the no of vertices = ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cost[i][j]=0;
            if(i!=j)
            {
                printf("\n enter the cost from vertex %d to %d = \n",i,j);
                scanf("%d",&cost[i][j]);
            }
            if(cost[i][j]==0)
                cost[i][j]=999;
        }
    }

    printf("\n the adjacency matrix is = \n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("%6d",cost[i][j]);
        }
            printf("\n");
    }
    printf("\n the edges of MST are = ");

    while(ne<n)
    {
        min=999;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(cost[i][j]<min)
                {
                    min=cost[i][j];
                    a=u=i;
                    b=v=j;
                }
            }
        }
        u=find(u);
        v=find(v);
        if(uni(u,v))
        {
            printf("%d edge (%d %d) = %d\n",ne++,a,b,min);
            mincost+=min;
        }
        cost[a][b]=cost[b][a]=999;
    }
        printf("\n MST cost is = %d\n",mincost);

}




int find(int i)
{
    while(parent[i])
    i=parent[i];
    return i;
}




int uni(int i , int j)
{
    if(i!=j)
    {
        parent[j]=i;
        return 1;
    }
    return 0;
}
