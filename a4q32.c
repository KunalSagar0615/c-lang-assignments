#include<stdio.h>
void main()
{
    int n,i,s=0,c=0;
    printf("enter number=");
    scanf("%d",&n);
    printf("factors are=\n");
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d\t",i);
            c++;
            s=s+i;
        }
    }
    printf("\ncount of factors=%d",c);
    printf("\nsum of factors=%d",s);
}