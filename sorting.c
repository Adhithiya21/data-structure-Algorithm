#include <stdio.h>
#include <limits.h> 

int main() {
    
    int nums[] = {2, 3, 1, 2, 4, 3}; 
    int target = 7;  
    int n = sizeof(nums) / sizeof(nums[0]);

    int min_length = INT_MAX;  
    int current_sum = 0;  
    int left = 0;  
 
    for (int right = 0; right < n; right++) {
        current_sum += nums[right]; 

       
        while (current_sum >= target) {
           
            int current_length = right - left + 1;
            if (current_length < min_length) {
                min_length = current_length;
            }

            
            current_sum -= nums[left];
            left++;
        }
    }

    
    if (min_length == INT_MAX) {
        printf("0\n");  
    } else {
        printf("%d\n", min_length); 
    }

    return 0;
}