#include<stdio.h>
void main()
{
    int x,y,i;
    printf("enter x:");
    scanf("%d",&x);
    printf("enter y=");
    scanf("%d",&y);
    for(i=x;i<=y;i++)
        printf("\t%d",i);
}