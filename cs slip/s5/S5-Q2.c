//   Q 2. Write a program to sort n randomly generated elements using Heapsort method.



#include <stdio.h>

void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}



void heapify(int a[], int n, int i)
{
    int temp;
    int largest = i;
    int left = 2*i+1;//left child
    int right = 2*i+2;//right child

    if (left < n && a[left] > a[largest])
        largest = left;

    if (right < n && a[right] > a[largest])
        largest = right;

    if (largest!=i)
    {

        //temp = a[i];
        //a[i] = a[largest];
        //a[largest] = temp;
        swap(&a[i],&a[largest]);
        heapify(a,n,largest);
    }
}

void heapSort(int a[],int n)
{
    int i,temp;
    for (i=n/2-1; i>=0; i--)
        heapify(a,n,i);

    for (i=n-1; i>=0; i--)
        {

        swap(&a[0],&a[i]);
        //temp = a[0];
        //a[0]=a[i];
        //a[i]=temp;

        heapify(a,i,0);
    }
}

void printarry(int a[],int n)
{
    int i;
    for (i=0; i<n; ++i)
    {
        printf("\n %d",a[i]);
       // printf("\n");
    }

}


void main()
{
    int a[10],n,i;

    printf("\nenter how many elements= ");
    scanf("%d",&n);

    printf("\nenter the elemenets of array= ");
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);

    printf("before sorting array elements are= ");
    printarry(a,n);
    heapSort(a,n);
    printf("\nafter sorting array elements are= ");
    printarry(a,n);

}
