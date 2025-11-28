#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    printf("Enter %d elements for the first array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Copy elements from arr1 to arr2
    for(i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    printf("Elements of the second array after copying:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}

