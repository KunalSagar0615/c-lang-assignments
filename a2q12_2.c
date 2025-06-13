#include<stdio.h>
#include<math.h>
void main()
{   
    int a,b,c;
    printf("enter 3 nos=");
    scanf("%d%d%d",&a,&b,&c);
    printf("\n \n ==================================");
    if(a<=b&&a<c)
    printf("%d is min ",a);
    else if(b<a && b<c)
    printf("%d is min",b);
    else
    printf("%d is min",c);
    printf("\n \n ==================================");
    if(a<b)
    b=a;
    if(c<b)
    b=c;
    printf("\n min no is %d",b);
    printf("\n\n====================================");
    b=(a<b)?a:b;
    b=(c<b)?c:b;
    printf("\nmin no is %d",b);
    printf("\n\n====================================");
    printf("\nmin no is %.2f",fmin(a,fmin(b,c)));
}