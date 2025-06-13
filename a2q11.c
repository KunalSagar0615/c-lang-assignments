#include<stdio.h>
void main()
{
    int a,b;
    printf("enter value of a & b=");
    scanf("%d%d",&a,&b);
    if(a==b)
        printf("both are equal");
    else if(b>a)
        printf("b is greater than a");
    else if(b<a)
        printf("b is less than a");        
}