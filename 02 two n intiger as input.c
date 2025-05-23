#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int numbers[100];
    int count = 0;
    char input[1000], *token;
    char operator;

    printf("Enter integers followed by an operator (e.g., 4 5 7 8 20 40 +):\n");
    fgets(input, sizeof(input), stdin);
    token = strtok(input, " \n");
    while (token != NULL) {
        if (strchr("+-*/%", token[0]) && strlen(token) == 1) {
            operator = token[0];
            break;
        }
        numbers[count++] = atoi(token);
        token = strtok(NULL, " \n");
    }
    if (count % 2 != 0) {
        printf("Invalid input: odd number of integers.\n");
        return 1;
    }

    for (int i = 0; i < count; i += 2) {
        int a = numbers[i];
        int b = numbers[i + 1];
        int result;
        switch (operator) {
            case '+': result = a + b; break;
            case '-': result = a - b; break;
            case '*': result = a * b; break;
            case '/': result = (b != 0) ? a / b : 0; break;
            case '%': result = (b != 0) ? a % b : 0; break;
            default:
                printf("Invalid operator.\n");
                return 1;
        }
        printf("%d ", result);
    }
    printf("\n");
    return 0;
}
