#include<stdio.h>
void main()
{
    int x,n,i;
    printf("enter no=");
    scanf("%d",&x);
    printf("enter ^n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=x*i;
    }
    printf("\n x^n =%d",x);
}