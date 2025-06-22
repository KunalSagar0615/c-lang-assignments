#include<stdio.h>
void main()
{
    int n,s=0,i;
    printf("enter no=");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    if(n==s)
    printf("number is perfect");
    else
    printf("no is not perfect");
}