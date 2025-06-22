#include<stdio.h>
void main()
{
    int n,i,c=0;
    printf("enter number=");
    scanf("%d",&n);
    if(n<=1)
    {
        printf("no is not prime");
    }
    else{
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0 || n==2)
        {
            printf("no is prime");
        }
        else
        {
            printf("no is not prime");
        }
    }

}