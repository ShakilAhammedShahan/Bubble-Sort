// sort: bubble sort
#include<stdio.h>
#define s 50
void main()
{
    int A[s],i,j,n,temp;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0; i<n-i; i++)
    {
        for(j=0; j<n; j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
    }
}
    for(i=0; i<n; i++)
    {
        printf("%d ",A[i]);
    }
}
