#include <stdio.h>
#include <string.h>

int main() {
    int size;
    
    printf("Enter size: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]); 
    }
    
    printf("The elements are: \n");
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]); 
    }
    int candidate;
    int count;
    for (int i = 0; i < size; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
     count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }
    
    if (count > size / 2) {
        printf("The majority element is: %d\n", candidate);
    } else {
        printf("There is no majority element.\n");
    }

    return 0;
}
