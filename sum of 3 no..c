##include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 values\n");
    scanf("%d %d %d",&a,&b,&c);
    if (a>c)
    {
        printf("The largest number = %d",a);
    }
    else
    {
        printf("the largest number = %d",c);
    }

    if (b>c)
    {
        printf("the largest number = %d",b);
    }
    else
    {
        printf("the largest number = %d",c);
    }
    return 0 ;
}
