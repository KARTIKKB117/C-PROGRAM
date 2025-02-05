#include <stdio.h>
int main()
{
    int a1,d,n,an;

    printf("enter the first term\n");
    scanf("%d",&a1);                      // calculate Nth term

    printf("enter common difference\n");
    scanf("%d ",&d);

    printf("enter term n\n");
    scanf("%d",&n);

     an=a1+(n-1)*d;   // formula               // output
                                                 // 12
                                                //  22
     printf("the n term of series:%d",an,n);     // 23
                                               //  ans 496
      return 0;
}

