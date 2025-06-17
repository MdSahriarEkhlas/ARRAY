#include <stdio.h>

int main() {
    int arr[100];  // Use fixed large size for now
    int n;

    // 1. Get size of the array
    printf("Enter the size of array: ");
    scanf("%d", &n);

    // 2. Input elements
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    // 3. Get position and value to insert
    int pos, val;
    printf("Enter the position to insert (0 to %d): ", n);
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &val);

    // 4. Shift elements to the right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // 5. Insert the value
    arr[pos] = val;
    n++;  // increase size

    // 6. Print the updated array
    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
