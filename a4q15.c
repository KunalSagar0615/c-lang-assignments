#include<stdio.h>
void main()
{
    int i,sum=0;
    for(i=1;i<=10;i++)
    { 
        if(i%2==0)
        {
        sum=sum+i;
        }
    }
    printf("\n sum=%d",sum);
}