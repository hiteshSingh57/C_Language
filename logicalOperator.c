#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter number a:");
    scanf("%d",&a);
    printf("Enter number b:");
    scanf("%d",&b);


    printf("Logical AND(&&):%d \n",(a<b)&&(a>b));
    printf("Logical OR(||):%d \n",(a<b)||(a>b));
    printf("Logical NOT(!):%d \n",!(a<b));
} 
