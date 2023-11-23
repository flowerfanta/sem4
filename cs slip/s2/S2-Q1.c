//   Q1. Write a C program for the implementation of Topological sorting.



///take it as a example!!!
/*
{0 0 1 1 0
0 0 1 1 0
0 0 0 0 1
0 0 0 0 1
0 0 0 0 0
}
*/






#include<stdio.h>
#define sz 10
struct stk
{
 int data[sz];
 int top;
};

struct stk *s1;
void inits(struct stk *s1)
{
  s1 -> top = -1;
}

int isempty(struct stk *s1)
{
  return(s1->top==-1);
}
void push(struct stk *s1,int num)
{

  s1->top++;
  s1->data[s1->top]=num;
}

int pop(struct stk *s1)
{
  int num;
  num=s1->data[s1->top];
  s1->top--;
  return num;
}

void topological_sort(int m[10][10],int n)
{
  int i,j,v,w;
  int visited[20]={0};
  int ind[10]={0};
  struct stk *s1;
  for(i=0;i<n;i++)
   for(j=0;j<n;j++)
    ind[i] = ind[i]+m[j][i];

    inits(&s1);
     while(1)
     {
         for(v=0;v<n;v++)
          {
             if((visited[v]==0)&&(ind[v]==0))
               {
                 visited[v]=1;
                 push(&s1,v);
                 printf("v%d  ",v+1);
                }
           }
        if(isempty(&s1))
           break;
           v = pop(&s1);
            for(w=0;w<n;w++)
               if(m[v][w]==1)
                 ind[w]=ind[w]-1;
      }
}

void main()
{
   int i,j,m[10][10],n;

 printf("How many vertices: ");
 scanf("%d",&n);

 for(i=0;i<n;i++)
   for(j=0;j<n;j++)
    {
       m[i][j]=0;
        if(i!=j)
         {
           printf("Is there is egde between %d--->%d(1/0): ",i+1,j+1);
           scanf("%d",&m[i][j]);
         }
     }
printf("Adacency matrix is:\n");
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
   printf("%d",m[i][j]);
   printf("\n");
 }
printf("Topological sort is = ");

topological_sort(m,n);
}


///take it as a example!!!
/*
{0 0 1 1 0
0 0 1 1 0
0 0 0 0 1
0 0 0 0 1
0 0 0 0 0
}
*/
