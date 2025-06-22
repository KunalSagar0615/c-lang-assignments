#include<stdio.h>
void main()
{
    int n,temp,s,r,i,num;
    printf("enter number=");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
    s=0;
    temp=i;
    num=temp;
    while(num>0)
    {
       r=num%10;
       s=s+(r*r*r);
       num=num/10;
    }
    if(temp==s)
        printf("\n%d",temp);
    }
}