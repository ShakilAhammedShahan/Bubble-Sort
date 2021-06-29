#include<stdio.h>
#define s 10
void bubblesort(int A[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(A[j]>A[j+1])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
	printf("sorted form:");
	for(i=0;i<n;i++)
	{
		printf(" %d ",A[i]);
	}
}
void main()
{
	int A[s],n,i;
	printf("Enter the number:\n");
	scanf("%d",&n);
	printf("Enter the number:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	bubblesort(A,n);
}
