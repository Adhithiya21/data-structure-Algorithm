int nums = [2, 3, 1, 2, 4, 3]  
int target = 7 


float min_length = float('')
int current_sum = 0
int left = 0


for right in range(len(nums)):
    current_sum += nums[right]
    
    while current_sum >= target:
        min_length = min(min_length, right - left + 1)
        current_sum -= nums[left]
        left += 1


if min_length == float(''):
    print(0)
else:
    print(min_length)