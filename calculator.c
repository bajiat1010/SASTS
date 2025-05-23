#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator, equalSign;

    printf("Enter an expression (e.g., 1+2=): ");
    scanf("%d%c%d%c", &num1, &operator, &num2, &equalSign);

    if (equalSign != '=') {
        printf("Error: Expression must end with '='\n");
        return 1;
    }

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%d%c%d=%d\n", num1, operator, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d%c%d=%d\n", num1, operator, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d%c%d=%d\n", num1, operator, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("%d%c%d=%d\n", num1, operator, num2, result);
            }
            break;
        case '%':
            if (num2 == 0) {
                printf("Error: Modulo by zero is not allowed.\n");
            } else {
                result = num1 % num2;
                printf("%d%c%d=%d\n", num1, operator, num2, result);
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
