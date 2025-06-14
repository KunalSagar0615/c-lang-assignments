#include<stdio.h>
void main()
{
    int temp,n,sum=0,r;
    printf("enter number=");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
        printf("%d is armstrong",temp);
    else
        printf("%d is not armstrong",temp);
}