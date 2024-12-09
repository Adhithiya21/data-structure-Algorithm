#include <stdio.h>

int main() {
    int n, num, found = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int ar[n]; 
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &ar[i]); 
    }

    printf("The elements in the array are: ");
    for (int i = 0; i < n; i++) {
        printf("%d\t", ar[i]);  
    }

    
    int temp;
    for (int i = 0; i < n - 1; i++) { 
        
        for (int j = 0; j < n - i - 1; j++) {  
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }

    
    printf("\nThe sorted array in descending order is: ");
    for (int i = 0; i < n; i++) {
        printf("%d\t", ar[i]); 
    }

    return 0;
