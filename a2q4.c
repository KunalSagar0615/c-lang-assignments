#include<stdio.h>
void main()
{
    int p,l,sp,cp;
    printf("\n enter cost price=");
    scanf("%d",&cp);
    printf("\n enter selling price=");
    scanf("%d",&sp);
    if(sp>cp)
    printf("profit is %d",(sp-cp));
    else if(cp>sp)
    printf("loss is %d",(cp-sp));
    else
    printf("no profit no loss");
}