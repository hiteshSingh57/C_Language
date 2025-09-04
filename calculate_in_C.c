#include<stdio.h>
#include<conio.h>
void main()
{   float n1,n2,c,invalid;
    char ch;
    // First Number //
    printf("Enter first number:");
    scanf("%d",&n1);
    //operator '+' '-' '*' '/'   //
    printf("Enter user choice operation:");
    scanf("%d",&ch);
    // Second Number //
    printf("Enter second number:");
    scanf("%d",&n2);
    switch (ch)
    {
        case '+': c=n1+n2; // Sum of First and Second number
            printf("output %d",c);
            break;
        case '-': c=n1-n2; // sub second number from first 
            printf("output %d",c);
            break;
        case '*': c=n1*n2; // multiple first and second number
            printf("output %d",c);
            break;
        case '/': c=n1/n2; // divide first number from second number
            printf("output %d",c);
            break;
        default:printf("\nInvalid operation"); // default case
            break;
    }
    
}