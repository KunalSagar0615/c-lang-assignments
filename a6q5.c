#include<stdio.h>
void main()
{
    int n,i,sum=0,max,ele,count=0;
    float avg;
    printf("enter array index = \n");
    scanf("%d",&n);
    int a[n];
    printf("enter array element = \n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n \n array elements are = \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n \n average of array elemnts =");
     for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("%.2f\n",avg);
    printf("\n \n maximum element of array =");
    max=a[0];
     for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("%d",max);
    printf("\n\n enter element to search = ");
    scanf("%d",&ele);
     for(i=0;i<n;i++)
    {
        if(ele==a[i])
        {
            printf("\n %d found at %d index ",a[i],i);
            count++;
            // break;
        }
    }
    if(count==0)
        printf("elemnt not found\n");
    printf("\n\nenter elemnt to count occurence = ");
    scanf("%d",&ele); 
    count=0;
    for(i=0;i<n;i++)
    {
        if(ele==a[i])
            count++;
    }
    printf("%d times %d occured in array ",count,ele);
}