#include<stdio.h>
int main()
{
    int a,b,add,sub,mul,div;
    double mod;
    printf("Enter number a:");
    scanf("%d",&a);
    printf("Enter number b:");
    scanf("%d",&b);

    add = a+b;
    printf("Addition of a and b:%d \n",add); 

    sub =a-b;
    printf("Addition of a and b:%d \n",sub); 

    mul =a*b;
    printf("Addition of a and b:%d \n",mul); 

    div =a/b;
    printf("Addition of a and b:%d \n",div); 

    mod =a%b;
    printf("Addition of a and b:%lf \n",mod); 

    return 0;
}