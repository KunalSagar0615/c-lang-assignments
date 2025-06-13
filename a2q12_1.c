#include<stdio.h>
#include<math.h>
void main()
{   
    int a,b,c;
    printf("enter 3 nos=");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a>c)
    printf("%d is max ",a);
    else if(b>a && b>c)
    printf("%d is max",b);
    else
    printf("%d is max",c);
    printf("\n \n ==================================");
    if(a>b)
    b=a;
    if(c>b)
    b=c;
    printf("\n max no is %d",b);
    printf("\n\n====================================");
    b=(a>b)?a:b;
    b=(c>b)?c:b;
    printf("\nmax no is %d",b);
    printf("\n\n====================================");
    printf("\nmax no is %.2f",fmax(a,fmax(b,c)));


}