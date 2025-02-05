/* c program to find power of the numbers = 2 power 3=8*/



#include <stdio.h>

int main(void) {
    int a, b, result=1;
    printf("Enter a base number: ");
    scanf("%d", &a);
    printf("Enter an exponent: ");
    scanf("%d", &b);

    for(int i=0; i<b; i++){
        result*=a;
    }

    printf("%d raised to the power of %d is = %d", a, b, result);
    return 0;
}
