#include<stdio.h>
void main()
{
    int a,b;
    char op;
    printf("enter 1st no=");
    scanf("%d",&a);
    printf("enter operator=");
    scanf(" %c",&op);
    printf("enter 2nd no=");
    scanf("%d",&b);
    switch(op)
    {
        case '+':printf("addition=%d",a+b);
        break;
        case '-':printf("substraction=%d",a-b);
        break;
        case '*':printf("mutiplication=%d",a*b);
        break;
        case '/':printf("division=%.2f",a/b);
        break;
        case '%':printf("reminder=%d",a%b);
        break;
        default:printf("enter operator between +,-,*,/,%");
    }
}