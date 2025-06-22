#include<stdio.h>
void main()
{
    int n,sum,i,num,j;
    printf("enter number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=0;
        num=i;
        for(j=1;j<num;j++)
        {
            if(num%j==0)
            {
                sum=sum+j;
            }
        }
        if(num==sum)
        printf("\n%d",num);
    }

}