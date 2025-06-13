#include<stdio.h>
void main()
{
    int i,x,y;
    printf("enter x=");
    scanf("%d",&x);
    printf("enter y=");
    scanf("%d",&y);
    for(i=x;i<=y;i++)
    { 
        if(i%2==0)
        {
        printf("\n %d",i);
        }
    }
}