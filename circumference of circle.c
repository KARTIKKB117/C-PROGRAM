#include <stdio.h>
#define PI 3.14159
int main() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Circumference = %.2f\n", 2 * PI * radius);
    return 0;
}
