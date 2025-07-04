#include<stdio.h>
int n,a[100],para,i,count=0;
void array(int a[],int n,int para)
{
    for(i=0;i<n;i++)
    {
        if(a[i]==para)
        {
            count++;
        }
    }
    if(count>0)    
    printf("\n %d occurs at %d times",para,count);
    else
    printf("\n element not found ");

}
void main()
{
    printf("enter size of array = ");
    scanf("%d",&n);

    printf("\nenter array elements =");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\nenter parameter =\n");
    scanf("%d",&para);
    array(a,n,para);

}