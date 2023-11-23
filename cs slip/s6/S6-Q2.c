//   Q 2. Write a C program for the implementation of Dijkstra’s shortest path algorithm for findingshortest path
//   from a given source vertex using adjacency cost matrix.



/// can take the directed or undirected graph(both)!!!
/// take it as an example!!!

/*
     {  0 6 0 1 0
        6 0 5 2 2
        0 5 0 0 5
        1 2 0 0 1
        0 2 5 1 0  }
*/







#include<stdio.h>
#define max 10

void dijkstra(int cost[max][max] , int n , int v)
{
    int distance[max];
    int visited[max]={0} , count , mindistance , u , w , i , j;

    visited[v]=1;

    for(i=0; i<n; i++)
    {
        distance[i]=cost[v][i];
    }

    distance[v]=0;
    count=1;

    while(count<n)
    {
        mindistance=999;

        for(i=0; i<n; i++)
        {
            if(visited[i]==0 && distance[i]<mindistance)
            {
                mindistance=distance[i];
                u=i;
            }
            visited[u]=1;

            for(w=0; w<n; w++)

                if(!visited[w])
                if(distance[u]+cost[u][w]<distance[w])
            {
                distance[w]=distance[u]+cost[u][w];
            }
            count++;
        }
        printf("\nshortest path from vertex %d\n",v);
        for(i=0; i<n; i++)
        {
            if(i!=v)
                printf("%d\t",distance[i]);
        }
        printf("\n");
    }
}







void main()
{
    int cost[max][max] , i , j , n , v;

    printf("\n enter the number of vertices = ");
    scanf("%d",&n);

    printf("\n enter the adjacency matrix");
    for(i=0; i<n; i++)
    for(j=0; j<n; j++)
    {
        cost[i][j]=0;;
        if(i!=j)
        {
            printf("\n enter the cost from vertex %d to %d = ",i+1,j+1);
            scanf("%d",&cost[i][j]);
        }
    }
    printf("\n print cost matrix\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(cost[i][j]==999)
                printf("%s\t","INF");
            else
                printf("%d\t",cost[i][j]);
        }
        printf("\n");
    }

    printf("\n enter the starting vertex = ");
    scanf("%d",&v);

    dijkstra(cost,n,v);
}

