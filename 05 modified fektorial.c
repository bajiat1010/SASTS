#include <stdio.h>

int factorialForLoop(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int factorialWhileLoop(int n) {
    int result = 1;
    int i = 1;
    while (i <= n) {
        result *= i;
        i++;
    }
    return result;
}

int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    int factFor = factorialForLoop(number);
    int factWhile = factorialWhileLoop(number);

    printf("Factorial using for loop: %d\n", factFor);
    printf("Factorial using while loop: %d\n", factWhile);

    if (factFor == factWhile) {
        printf("✅ Both results match. Factorial is %d.\n", factFor);
    } else {
        printf("❌ Mismatch in results! Check the logic.\n");
    }

    return 0;
}
