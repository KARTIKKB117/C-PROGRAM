#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("enter two values");
    scanf("%d %d",&a,&b);
    printf("Before interchanging = %d %d",a,b);
        temp=a;
        a=b;
        b=temp;
    printf("After interchanging = %d %d",a,b);
    return 0;

}
