#include<stdio.h>
int n,arr1[100],arr2[100],i;
void arrcpy(int arr1[],int n)
{
    for(i=0;i<n;i++)
    {
        arr2[i]=arr1[i];
    }
    printf("\n new array =\n");
    for(i=0;i<n;i++)
        printf("\t%d",arr2[i]);
}
void main()
{
    printf("enter array size =\n");
    scanf("%d",&n);

    printf("\n enter array elements =\n ");
    for(i=0;i<n;i++)
        scanf("%d",&arr1[i]);

    arrcpy(arr1,n);
}