#include<stdio.h>
#include<conio.h>
void main()
{
    int array[5],i;
    printf("Enter element in array:\n");
    for(i = 0; i < 5;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Array Elements:");
    
    for ( i = 0; i < 5; i++)
    {
        printf(" %d",array[i]);
    }
    
}