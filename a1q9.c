#include<stdio.h>
void main()
{
    int amt;
    printf("enter amount=");
    scanf("%d",&amt);
  
    printf("\n 10 * %d=%d",(amt/10),(amt/10)*10);
    amt=amt%10;
    printf("\n 5 * %d=%d",(amt/5),(amt/5)*5);
    amt=amt%5;
    printf("\n 1 * %d=%d",(amt/1),(amt/1)*1);
}