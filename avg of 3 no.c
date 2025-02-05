#include<stdio.h>
int main()                           // u can use even float instead of int
{
   int a,b,c,avg;
    printf("Enter the value\n");
    scanf("%d %d %d",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("Average of 3 = %d",avg);
    return 0;
}
