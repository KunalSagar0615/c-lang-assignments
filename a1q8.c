#include<stdio.h>
void main()
{
    int id;
    float bs,hra=10,da=30,tax=5,sal;
    char  ename[20];
    FILE *fp;
    fp=fopen("empsalslip.txt","w");
    printf("enter emp name=\n");
    scanf("%s",&ename);
    printf("\nenter emp id=\n");
    scanf("%d",&id);
    printf("\nenter basic salary=\n");
    scanf("%f",&bs);
    sal=bs+((bs*(hra+da-tax))/100);
    
    fprintf(fp,"\n\t\t--------------Employee salary slip-------------");
    fprintf(fp,"\n\t\tID           : %d",id);
    fprintf(fp,"\n\t\tName         : %s",ename);
    fprintf(fp,"\n\t\tDA (%%)      :%f",da);
    fprintf(fp,"\n\t\tHRA (%%)     :%f",hra);
    fprintf(fp,"\n\t\tTAX (%%)     :%f",tax);
    fprintf(fp,"\n\t\ttotal salary :%.2f",sal);   
}