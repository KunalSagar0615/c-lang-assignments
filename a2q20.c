#include<stdio.h>
void main()
{
    char ch;
    printf("enter digit or character=");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122)
        printf("%c is lowercase character",ch);
    else if(ch>=65 && ch<=90)
        printf("%c is uppercase character",ch);
    else if(ch>=48 && ch<=58)
        printf("%c is digit",ch);
    }