#include<stdio.h>
int main()
{
    int number;
    printf("Enter number\n");
    scanf("%d",number);

    if (number>=0)
    {
        printf("positive \n");

        if (number %2 ==0)        // nested if inside ,if
        {
            printf("even number\n");
        }

    }else
    {printf("negative\n");}

    return 0;
    }

