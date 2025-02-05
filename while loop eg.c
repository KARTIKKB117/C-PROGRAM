#include <stdio.h>

int main()                    // print a no given by the user
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);

    int i=0;
    while(i<=n)
    {
        printf("%d \n",i);
        i++;
    }
    return 0;
}

