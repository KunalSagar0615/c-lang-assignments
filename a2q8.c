#include<stdio.h>
void main()
{
    char ch;
    printf("\n enter lowercase char=");
    scanf("%s",&ch);
    if(ch>=97 && ch<=122)
    {
    if(ch=='a' || ch == 'e' || ch== 'i'|| ch =='o' || ch=='u')
    printf("given character is vovel");
    else
    printf("given character is consonant");
    }
    else
    printf("you entered other than lowercase character");
}
