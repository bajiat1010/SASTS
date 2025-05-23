#include <stdio.h>

// Function to calculate sum of array
int calculateSum(int arr[], int n) {
    int sum = 0, i = 0;
    do {
        sum += arr[i];
        i++;
    } while (i < n);
    return sum;
}

// Function to calculate average of array
float calculateAverage(int arr[], int n) {
    int sum = calculateSum(arr, n);
    return (float)sum / n;
}

int main() {
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: Number of elements must be positive.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = calculateSum(arr, n);
    float avg = calculateAverage(arr, n);

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
