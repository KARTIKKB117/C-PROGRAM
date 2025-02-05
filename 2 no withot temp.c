#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("Before interchanging values = %d %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After interchanging values = %d %d",a,b);
    return 0;
}

/* temp = a;
a=b;
b=temp; */
