// read 2 integer value & print prime no. btwn them//

#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Found a divisor, not prime
    }
    return 1; // Number is prime
}

int main() {
    int lower, upper;

    // Prompt user for input
    printf("Enter two integer values (lower and upper bounds): ");
    scanf("%d %d", &lower, &upper);

    // Ensure lower is less than upper
    if (lower > upper) {
        printf("Lower bound should be less than or equal to upper bound.\n");
        return 1;
    }

    printf("Prime numbers between %d and %d are:\n", lower, upper);
    for (int num = lower; num <= upper; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}
