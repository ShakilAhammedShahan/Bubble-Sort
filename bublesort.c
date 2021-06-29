#include<stdio.h>
#define s 10
void bubblesort(int A[],int x)
{
    int i,j,temp;
    for(i=0;i<x;i++)
    {
        for(j=0;j<x-1;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j+1];
                A[j+1]=A[j];
                A[j]=temp;
            }
        }
    }
	printf("Sorted :\n");
    for(i=0;i<x;i++)
    {
        printf("%d \t",A[i]);
    }

}
void main()
{
    int A[s],i,m;
    printf("How many elements: \n");
    scanf("%d",&m);
    printf("Enter the value: \n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&A[i]);
    }
    bubblesort(A,m);
}

