#include<stdio.h>
void main()
{
    int x,y,i,sum=0;
    printf("\n enter x=");
    scanf("%d",&x);
    printf("\n enter y=");
    scanf("%d",&y);
    for(i=x;i<=y;i++)
        sum=sum+i;
    printf("x to y = %d",sum);
    
}