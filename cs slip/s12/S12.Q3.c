//   Q 2. Write a C program that acceptsthe vertices and edges of a graph and store it as an adjacency
//  matrix. Implement functions to print indegree, outdegree and total degree of all vertices of
//  graph.


/// take it as an example
/*
  {
    0 1 1
    0 0 1
    0 0 0
  }

*/


#include<stdio.h>
#define max 20


void ad_matrix(int m[max][max],int n)
{
    int i,j;
   for(i=0;i<n;i++)
    for(j=0;j<n;j++)
   {
       m[i][j]=0;    //initializing row and column as 0!!!

       if(i!=j)    //to avoid same row and column circumstances e.g=m[1][1]!!!
       {
           printf("\n Is there an edge between %d and %d(1/0): ",i+1,j+1);
           scanf("%d",&m[i][j]);
       }//if
   }//for

}//function



int degree(int m[max][max],int n)
{
    int i,j,outdegree=0,indegree=0,totaldegree=0;


     printf("\n\n in-degree  +   out-degree   =   total-degree\n");     //for designing purpose on terminal can avoid these
        printf("\n\n    |\t\t    |\t\t   |\n\n");       //for designing purpose on terminal can avoid these
        printf("    |\t\t    |\t\t   |\n");     //for designing purpose on terminal can avoid these

    for(i=0; i<n; i++)
    {
        indegree=0;
        outdegree=0;
    for(j=0; j<n; j++)
    {
        if(m[i][j]==1)  //m[row][column]!!!
            outdegree++;
        if(m[j][i]==1)    //accessing it as like m[column][row]!!!
            indegree++;

            totaldegree=indegree+outdegree;
    }//for
        printf("\n\n in-degree=%d\tout-degree=%d\ttotal-degree=%d \n",indegree,outdegree,totaldegree);
    }//for
}//function


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
    }//for
        degree(m,n);
}//function
