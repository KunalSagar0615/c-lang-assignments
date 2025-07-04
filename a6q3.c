#include<stdio.h>
void main()
{
    int n,a[100],i,flag=-1,key;
    printf("enter array size = \n");
    scanf("%d",&n);

    printf("\nenter aray elements = \n ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    printf("\nenter element you want tos search =\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("\n element found at %d index",i);
            flag=1;
        }
    }
    if(flag==-1)
        printf("\n element not found -1 ");
}