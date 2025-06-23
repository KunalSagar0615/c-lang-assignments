#include<stdio.h>
void main()
{
    int i,n;
    printf("enter indexe=");
    scanf("%d",&n);
    float a[n],avg,sum=0;
    printf("enter array values = \n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("average = %.2f",avg);
}