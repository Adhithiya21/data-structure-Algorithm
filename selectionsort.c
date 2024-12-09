#include <stdio.h>
#include <string.h>


void selectionSort(char arr[][100], int n) {
    int i, j, minIdx;
    char temp[100];

    
    for (i = 0; i < n - 1; i++) {
        
        minIdx = i;
        for (j = i + 1; j < n; j++) {
            if (strcmp(arr[j], arr[minIdx]) < 0) 
            {
                minIdx = j;
            }
        }

        
        if (minIdx != i) {
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[minIdx]);
            strcpy(arr[minIdx], temp);
        }
    }
}


void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}

int main() {
    int n;

   
    printf("Enter number of strings: ");
    scanf("%d", &n);

    
    char arr[n][100];
    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    
    selectionSort(arr, n);

    
    printf("\nSorted strings are:\n");
    printArray(arr, n);

    return 0;
}
