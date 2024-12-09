#include <stdio.h>

int main() {
    int n,minindx,temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
   
    
    for(int i = 0;i<n-1;i++){
        minindx=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]< arr[minindx])
              {
                  minindx=j;
              }

              
        }
        temp=arr[minindx];
        arr[minindx]=arr[i];
        arr[i]=temp;
    }
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
    
}