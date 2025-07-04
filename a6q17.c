#include<stdio.h>
int n,arr[100],i,j,temp;
void arrsort(int arr[],int n)
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\n array sort =\n");
    for(i=0;i<n;i++)
        printf("\t%d",arr[i]);
}
void arracept(int n)
{
    printf("\n enter array elements = \n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
}
void main()
{
    printf("enter size =");
    scanf("%d",&n);
    arracept(n);
    arrsort(arr,n);

}