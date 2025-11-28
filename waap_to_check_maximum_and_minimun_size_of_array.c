#include <stdio.h>
#define ARR_SIZE 5 // Change as needed

int main() {
    int arr[ARR_SIZE];

    printf("Defined array of size: %d\n", ARR_SIZE);
    printf("Size of entire array in bytes: %zu\n", sizeof(arr));
    printf("Number of elements in array: %zu\n", sizeof(arr) / sizeof(arr[0]));
    printf("Minimum possible array size: 1\n");

    
    int *bigarr = malloc(big * sizeof(int));
    if (bigarr != NULL) {
        printf("Large array allocated successfully with %zu elements!\n", big);
        free(bigarr);//
    } else {
        printf("Failed to allocate a large array of size %zu\n", big);
    }
    */
    return 0;
}