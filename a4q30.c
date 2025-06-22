#include<stdio.h>
void main()
{
    int i,f,n,s=0;
    printf("enter number=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    printf("sum of factors=%d",s);
}