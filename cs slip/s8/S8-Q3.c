//   Q 2. Write a C program that accepts the vertices and edges of a graph and store it as an adjacency
//   matrix. Implement functions to print indegree of all vertices of graph.




#include<stdio.h>
#define max 20
void ad_matrix(int m[max][max],int n)
{
    int i,j;
   for(i=0;i<n;i++)
    for(j=0;j<n;j++)
   {
       m[i][j]=0;
       if(i!=j)
       {
           printf("\n Is there an edge between vertex %d and %d(1/0): ",i+1,j+1);
           scanf("%d",&m[i][j]);
       }
   }

}



int degree(int m[max][max],int n)
{
    int i,j,indegree=0;


    for(i=0; i<n; i++)
    {
        indegree=0;
    for(j=0; j<n; j++)
    {
        if(m[j][i]==1)
            indegree++;
    }
        printf("\n\n indegree=%d\n",indegree);
    }
}


void main()
{
    int m[max][max],n,i,j;

    printf("\n How many vertices:");
    scanf("%d",&n);

        ad_matrix(m,n);

    printf("\n\n The adjacency matrix is:\n");
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)

        printf(" %d\t",m[i][j]);

        printf("\n");
    }
        degree(m,n);
}
