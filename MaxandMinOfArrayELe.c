#include<stdio.h>
int main()
{
    int a[100],i,size,max,min;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for(i=1;i<size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    min = a[0];
    for(i=1;i<size;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Maximum Value of array %d",max);
    printf("\nMinimum Value of array %d",min);
    return 0;
}