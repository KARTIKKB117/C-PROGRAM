#include <stdio.h>

int main() {                  // printing pattern using loops
    int rows, i, j;

    // Ask user for the number of rows
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    // Loop for each row
    for (i = 1; i <= rows; i++) {
        // Loop for printing asterisks
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
