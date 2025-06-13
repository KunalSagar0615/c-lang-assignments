#include<stdio.h>
void main()
{
    char ch;
    printf("enter lower case character=");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122)
    printf("uppercase character=%c",(ch-32));
    else
    printf("enter character between a to z");
}