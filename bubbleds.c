// #include <stdio.h>

// int main() {
//     int n;

//     // Take user input for the size of the array
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     int arr[n];

//     // Take user input for the array elements
//     printf("Enter the elements of the array:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Bubble Sort to sort the array in descending order
//     for (int i = 0; i < n-1; i++) {
//         for (int j = 0; j < n-i-1; j++) {
//             // Swap if the element found is smaller than the next element
//             if (arr[j] < arr[j+1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }

//     // Print the sorted array in descending order
//     printf("Sorted array in descending order:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }
#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nSorting process:\n");
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
        printf("Pass %d: ", i + 1);
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }

    printf("\nFinal sorted array in descending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
