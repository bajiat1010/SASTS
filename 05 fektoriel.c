#include <stdio.h>

// Function using for loop
unsigned long long factorial_for(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function using while loop
unsigned long long factorial_while(int n) {
    unsigned long long fact = 1;
    int i = 1;
    while (i <= n) {
        fact *= i;
        i++;
    }
    return fact;
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1;
    }

    unsigned long long result_for = factorial_for(num);
    unsigned long long result_while = factorial_while(num);

    printf("Factorial of %d using for loop: %llu\n", num, result_for);
    printf("Factorial of %d using while loop: %llu\n", num, result_while);

    // Verification
    if (result_for == result_while) {
        printf("✅ Both methods give the same result.\n");
    } else {
        printf("❌ Results do not match. There is an error.\n");
    }

    return 0;
}
