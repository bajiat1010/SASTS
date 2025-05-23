#include <stdio.h>

int main() {
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");

    if (fin == NULL) {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }
    if (fout == NULL) {
        printf("Error: Cannot open output.txt\n");
        fclose(fin);
        return 1;
    }

    int numbers[100], count = 0;
    // Read all integers from input.txt
    while (fscanf(fin, "%d", &numbers[count]) == 1) {
        count++;
    }
    fclose(fin);

    if (count % 2 != 0) {
        fprintf(fout, "Error: Odd number of integers in input.\n");
        fclose(fout);
        return 1;
    }

    int case_num = 1;
    for (int i = 0; i < count; i += 2) {
        int a = numbers[i];
        int b = numbers[i+1];

        int sum = a + b;
        int sub = a - b;
        int mul = a * b;
        int div = (b != 0) ? (a / b) : 0;

        fprintf(fout, "Case-%d: %d %d %d %d\n", case_num, sum, sub, mul, div);
        case_num++;
    }

    fclose(fout);
    printf("Output written to output.txt\n");
    return 0;
}
