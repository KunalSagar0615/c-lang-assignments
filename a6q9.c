#include<stdio.h>
int n,arr1[100],arr2[100],i,j;

void arraycompair(int arr1[],int arr2[],int n)
{
    for(i=0;i<n;i++)
    {
        if(arr1[i]==arr2[i])
        {
            printf("\n%d of %d index are same",arr1[i],i);
        }
    }
}
void main()
{
    printf("enter size of array = \n");
    scanf("%d",&n);

    printf("\n enter first array elements =\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr1[i]);

    printf("\n enter second array elements =\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr2[i]);

    arraycompair(arr1,arr2,n);
}