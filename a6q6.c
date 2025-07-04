#include<stdio.h>
int n,a[100],i,j,temp;
void arrsort(int a[],int n)
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\n sorted array =\n");
    for(i=0;i<n;i++)
        printf("\t%d",a[i]);
}
void main()
{
    printf("enter array size = \n");
    scanf("%d",&n);

    printf("\nenter array elements =\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    arrsort(a,n);
}