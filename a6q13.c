#include<stdio.h>
void main()
{
    int n,a[100],earr[100],oarr[100],i,ecount=0,ocount=0;
    printf("enter array size = \n ");
    scanf("%d",&n);

    printf("\n enter elements = \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                earr[ecount]=a[i];
                ecount++;
            }
            else{
                oarr[ocount]=a[i];
                ocount++;
            }
        }
        printf("\n  even array = \n");
        for(i=0;i<ecount;i++)
        printf("\t%d",earr[i]);

        printf("\n  odd array = \n");
        for(i=0;i<ocount;i++)
        printf("\t%d",oarr[i]);
}