
/* prime number btwn 2 integers */

#include <stdio.h>

int main()
{
    int a,b,j;
    printf("enter range");
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)    /*output 10-30
        */
    {
        for(j=2;j<=i;j++)

        if(i%j==0)
        break;

        if(i==j)
            printf("%d\n",j);

    }
    return 0;
}
