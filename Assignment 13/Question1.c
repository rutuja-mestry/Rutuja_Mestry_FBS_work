#include <stdio.h>
#include <stdlib.h>

// Function to check prime
int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n, i, search, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamic memory allocation
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory not allocated!\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 1. Min and Max
    int min = arr[0], max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    // 2. Search number
    printf("Enter number to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Number found at position %d\n", i);
    else
        printf("Number not found\n");

    // 3. Sum of elements
    int sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Sum = %d\n", sum);

    // 4. Odd and Even
    printf("Even numbers: ");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }

    printf("\nOdd numbers: ");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }

    // 5. Alternate elements
    printf("\nAlternate elements: ");
    for (i = 0; i < n; i += 2) {
        printf("%d ", arr[i]);
    }

    // 6. Prime numbers
    printf("\nPrime numbers: ");
    for (i = 0; i < n; i++) {
        if (isPrime(arr[i]))
            printf("%d ", arr[i]);
    }

    // 7. Add two arrays into third array
    int *brr = (int *)malloc(n * sizeof(int));
    int *crr = (int *)malloc(n * sizeof(int));

    printf("\nEnter elements for second array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &brr[i]);
    }

    for (i = 0; i < n; i++) {
        crr[i] = arr[i] + brr[i];
    }

    printf("Sum array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", crr[i]);
    }

    // 8. Merge two arrays
    int *merge = (int *)malloc(2 * n * sizeof(int));

    for (i = 0; i < n; i++) {
        merge[i] = arr[i];
        merge[i + n] = brr[i];
    }

    printf("\nMerged array: ");
    for (i = 0; i < 2 * n; i++) {
        printf("%d ", merge[i]);
    }

    // 9. Reverse array
    printf("\nReversed array: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    // 10. Sort array (Bubble Sort)
    for (i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Free memory
    free(arr);
    free(brr);
    free(crr);
    free(merge);

    return 0;
}