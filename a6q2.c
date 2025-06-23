#include<stdio.h>
void main()
{
    int n,i,max,min;
    printf("enter array index = \n ");
    scanf("%d",&n);
    int a[n];
    printf("enter array elements = \n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max>a[i])
            max=a[i];
    }
    printf("\n largest element = %d",max);
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(min<a[i])
            min=a[i];
    }
    printf("\n smallest element = %d",min);
}