/* c program to find prime or not*/


#include<stdio.h>
int main()
{
    int a,j;
    printf("enter a number:");
    scanf("%d",&a);
    for(j=2;j<=a;j++)
        if(a%j==0)
            break;

        if(a==j)
        printf("is a prime no: %d",j);
        else{
            printf("not a prime no: %d ");
        }


    return 0;
}
