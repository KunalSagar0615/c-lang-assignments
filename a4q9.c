#include<stdio.h>
void main()
{
    int n,i,sum=0,sum1=0;
    printf("\n enter n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+i;
    printf("1 to n = %d",sum);
    sum1=n*(n+1)/2;
    printf("\n sum of 1 to n=%d",sum1);
}