def min_seeds(nums, space):
    nums.sort()
    max_targets = 0
    min_seed = float('inf')
    
    for i in range(len(nums)):
        targets = 1
        for j in range(i+1, len(nums)):
            if nums[j] <= nums[i] + (j-i) * space:
                targets += 1
        if targets > max_targets:
            max_targets = targets
            min_seed = nums[i]
    
    return min_seed

nums = [3, 7, 8, 1, 1, 5]
space = 2
print(min_seeds(nums, space)) 
