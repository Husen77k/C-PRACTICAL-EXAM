#include <stdio.h>


int findArraySum(int arr[], int size);

main() { 
    int size;
    int sum = 0;
    int i;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    int arr[size];
    
    printf("Enter elements in the array :\n");
    for (i = 0; i < size; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
 
    sum = findArraySum(arr, size);

    printf("Sum of elements in the array is : %d\n", sum);


}


int findArraySum(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total; //
}
