#include <stdio.h>

main() {
    int size;
    int i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    int *ptr = arr; 

    printf("Enter elements in the array:\n");
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", (ptr + i));
    }

    printf("\nCube of each element:\n");
    for (i = 0; i < size; i++) {
        int value = *(ptr + i);
        int cube = value * value * value;
        printf("Cube of %d is : %d\n", value, cube);
    }
    
    return 0;
}
