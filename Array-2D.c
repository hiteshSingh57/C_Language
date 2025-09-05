#include<stdio.h>
int main()
{
    int array[0][0],i,j,n;
    printf("Enter the size of Array:");
    scanf("%d",&n);
    printf("Enter element in array:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("[%d%d]",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("Array Elements in matrix form:\n");
    for (i=0;i<n;i++)
    {   
        for(j=0;j<n;j++)
        {
        printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}