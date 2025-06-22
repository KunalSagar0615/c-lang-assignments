#include<stdio.h>
void main()
{
    int n,c,i,num,j;
    printf("enter no = ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
        {
            c=0;
            num=i;
            for(j=2;j<num;j++)
            {
                if(num%j==0)
                {
                c++;
                }
            }
            if((c==0 || num==2)&&num!=1)
            printf("\n%d",num);
        }    
}