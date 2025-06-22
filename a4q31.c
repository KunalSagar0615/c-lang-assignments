#include<stdio.h>
void main()
{
    int n,c=0,i;
    printf("enter number=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    printf("count =%d",c);
}