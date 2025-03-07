#include <stdio.h>

void factorial() {
    int num, i;
    unsigned long long factorial = 1;  // Using unsigned long long to handle large numbers

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for negative numbers
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using a loop
        for (i = 1; i <= num; i++) {
            factorial *= i;
        }

        // Output the result
        printf("Factorial of %d is: %llu\n", num, factorial);
    }

   // return 0;
}
