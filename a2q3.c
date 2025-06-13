#include<stdio.h>
void main()
{
    int n;
    printf("enter no=");
    scanf("%d",&n);
    printf("\nusing if condition");
    if(n&1==0)
    printf("\neven no");
    else
    printf("\n odd no");
    printf("\n using ternery operator=");
    (n%2==0)?printf("\n no is even"):printf("\n no is odd");
}