//   Q 2. Write a C program for the implementation of Floyd Warshall’s algorithm for finding all
//   pairs shortest path using adjacency cost matrix


/// take it as an example!!!
/*
       { 0,   5,  INF, 10
        INF,  0,  3,   INF
        INF, INF, 0,   1
        INF, INF, INF, 0 }
*/



#include<stdio.h>
#define max 20


void printmatrix(int m[max][max] , int n)
{
    int  i,j;

    printf("\n the adjacency matrix is=\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            {
            if(m[i][j]==999)

                    printf("%5s","INF");

                    else
                    printf("%5d",m[i][j]);

            }

    printf("\n");
            }
}



void floydwarshall(int m[max][max] , int n)
{
int i,j,k;
    for(k=0; k<n; k++)
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(m[i][j]>m[i][k]+m[k][j])  //finding through the min cost intermediate edge with respect to vertex!!!
                m[i][j]=m[i][k]+m[k][j];
            }
        }
    }
    //printmatrix(m,n);
}



void main()
{
    int i,j,n,m[max][max];

    printf("\n enter how many vertices = ");
    scanf("%d",&n);

    //printf("\n enter the cost matrix = ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            m[i][j]=0;
            if(i!=j)
            {
                printf("\n enter the cost of edge between %d to %d (yes:1/no:0) = ",i+1,j+1);
                scanf("%d",&m[i][j]);
            }
        }
    }
    printmatrix(m,n);
    floydwarshall(m,n);
    printmatrix(m,n);
}
