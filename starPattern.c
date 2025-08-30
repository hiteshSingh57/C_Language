#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(* );
        }
        printf(n);
    }
      
printf(n);
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf(* );
        }
        printf(n);
    }

    printf(n);
    for(i=1;i<=5;i++) //raws
    {
        for(j=i;j<5;j++) //space
        {
            printf( );
        }
        for (k=1;k<=i;k++) //columns
        {
            printf(*);
        }
        printf(n);
    }

    printf(n);

    for(i=1;i<=5;i++) //raws
    {
        for(j=1;j<i;j++) //space
        {
            printf( );
        }
        for (k=i;k<=5;k++) //columns
        {
            printf(*);
        }
        printf(n);
    }
    return 0;
}
