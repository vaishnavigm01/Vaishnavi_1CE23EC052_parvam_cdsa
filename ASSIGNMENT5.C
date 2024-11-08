#include <stdio.h>

int count_occurrences(int *arr, int size, int target) {
    int count = 0;

    
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == target) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int n, target;

 
    do {
        printf("Enter the number of elements (1 to 100): ");
        scanf("%d", &n);
    } while (n < 1 || n > 100);

    int arr[n];

    
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

   
    printf("Enter the target element to count: ");
    scanf("%d", &target);

  
    int occurrences = count_occurrences(arr, n, target);

    
    printf("The element %d appears %d times in the array.\n", target, occurrences);
    getchar();
    getchar();
    return 0;
}