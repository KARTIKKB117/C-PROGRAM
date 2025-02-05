#include <stdio.h>
int main()
{
    int n,rev=0,rem,original;                           // palindrome = 101,202,515,3113,4554
    printf("enter a number to check for palindrome\n");  // not palindrome = 123,678,795,54346
    scanf("%d",&n);

    original = n;
    while (n!=0)
    {
        rem = n%10;
        rev = (rev*10)+rem;
        n = n/10;
    }
    if(original==rev)
    {
        printf("%d is palindrome\n",original);
    }
    else
    {
        printf("%d is not palindrome\n",original);
    }
    return 0;
}
