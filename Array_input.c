#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int n;
    int arr[MAX_SIZE];

    // Ask the user for the array size
    printf("How many elements? (1-%d): ", MAX_SIZE);
    scanf("%d", &n);

    // Validate the array size
    if (n < 1 || n > MAX_SIZE) {
        printf("Invalid array size! Please enter a value between 1 and %d.\n", MAX_SIZE);
        return 1;
    }

    // Take input for each element
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the array elements
    printf("You entered: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}