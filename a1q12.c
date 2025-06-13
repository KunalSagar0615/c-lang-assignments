#include<stdio.h>
void main()
{
    char c;
    printf("enter the character from alphabet=\n");
    scanf("%c",&c);
    if(c>=65 && c<=90 || c>=97 && c<=122)
    {
    
    printf("\n next value of character =%c",(c+1));
    printf("\n previous character is=%c",(c-1));

    }
    else{
        printf("you do not enter character...!");
    }
}