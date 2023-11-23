//Q 1. Write a C program that accepts the vertices and edges of a graph and stores it as an adjacency matrix. Display the adjacency matrix.


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
}//function
