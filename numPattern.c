#include<stdio.h>
int main()
{   //first pattern
    int i,j,count=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }

    //second pattern
    printf("\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    //third pattern
    printf("\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",count);
            ++count;
        }
        printf("\n");
    }
    // fourth pattern
    // printf("\n");
    // char i,j,count='A';
    // for(i='A';i<='E';i++)
    // {
    //     for(j='A';j<=i;j++)
    //     {
    //         printf("%c",count);
    //         ++count;
    //     }
    //     printf("\n");
    // }

    //fivth pattern
    printf("\n");
    for(i=65;i<=70;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
}
