#include <stdio.h>
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main() {
    int a, b, GCD, LCM;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    GCD = gcd(a, b);
    LCM = (a * b) / GCD;
    printf("GCD = %d, LCM = %d\n", GCD, LCM);
    return 0;
}
