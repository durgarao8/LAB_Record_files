#include <stdio.h>

int main() {
    int arr[100]; 
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]); // calculate size of array
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nSize of array: %d\n", n);

    return 0;
}
