#include<stdio.h>
void main()
{
    int n;
    printf("\n enter week day in no:");
    scanf("%d",&n);
    switch(n)
    {
    case 1:printf("\n Monday");
        break;
    case 2:printf("\n Tuesday");
        break;
    case 3:printf("\n Wednesday");
        break;
    case 4:printf("\n Thursday");
        break;
    case 5:printf("\n Friday");
        break;
    case 6:printf("\n Saturday");
        break;
    case 7:printf("\n Sunday");
        break;
    default:printf("enter no between 1 to 7");
    }
}