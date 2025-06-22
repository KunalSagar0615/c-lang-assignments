#include<stdio.h>
void main()
{
    int n,i,j;
    printf("ente rnoumber=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n \n table of %d \n",i);
        for(j=1;j<=10;j++)
        {
            printf("%d * %d = %d\n",i,j,(i*j));
        }
        
    }
}