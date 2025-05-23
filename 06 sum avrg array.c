#include <stdio.h>

// Function to calculate the sum of array elements
int calculateSum(int arr[], int size) {
    int sum = 0, i = 0;
    do {
        sum += arr[i];
        i++;
    } while (i < size);
    return sum;
}

// Function to calculate the average of array elements
float calculateAverage(int sum, int size) {
    return (float)sum / size;
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    int i = 0;
    do {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        i++;
    } while (i < n);

    int sum = calculateSum(arr, n);
    float avg = calculateAverage(sum, n);

    printf("\nSum of array elements = %d\n", sum);
    printf("Average of array elements = %.2f\n", avg);

    return 0;
}
