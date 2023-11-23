//    Q 1. Write a C program that accepts the vertices and edges of a graph. Create adjacency list.

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*v[10];

void main()
{
	int n,i,j,m[10][10];
	struct node *temp, *nw;



	printf("\nNumber of vertices: ");
	scanf("%d",&n);

	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
		{
			m[i][j] = 0;
			if(i != j)
			{
				printf("\nIs there an edge between %d & %d: ",i+1,j+1);
				scanf("%d",&m[i][j]);
			}
		}

	printf("\nAdjacency Matrix:\n");

	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			printf("%d ",m[i][j]);
		printf("\n");
	}

	// Create Adjacency List

	for(i=0; i<n; i++)
	{
		v[i] = NULL;
		for(j=0; j<n; j++)
		{
			if(m[i][j] == 1)
			{
				nw = (struct node *)malloc(sizeof(struct node));
				nw -> next = NULL;
				nw -> data = j+1;

				if(v[i] == NULL)
					v[i] = temp = nw;
				else
				{
					temp -> next = nw;
					temp = nw;
				}
			}
		}
	}

	printf("\nAdjacency List:\n");

	for(i=0; i<n; i++)
	{
		printf("V[%d] ---> ",i+1);
		temp = v[i];

		while(temp)
		{
			printf("V[%d] ---> ",temp->data);
			temp = temp -> next;
		}
		printf("NULL\n");
	} printf("\n");
}
