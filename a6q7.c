#include<stdio.h>
int n,a[100],i;
void arrayrev(int a[],int n)
{
    printf("\n reversed array = \n");
    for(i=n-1;i>=0;i--)
    {
        printf("\t%d",a[i]);
    }
}
void main()
{
    printf("enter array size = \n");
    scanf("%d",&n);

    printf("\nEnter array element = \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    arrayrev(a,n);
}