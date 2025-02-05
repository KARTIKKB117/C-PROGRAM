#include<stdio.h>
int main ()
{
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);

    if (ch>='A' && ch<='Z')
    {

        printf("Upper case\n");
    }
    else if(ch>='a' && ch<='z')
    {
     printf("Lower case\n");
    }
    else
    {
     printf("Not a english letter"); //can be#,$,*
    }
    return 0;
}
