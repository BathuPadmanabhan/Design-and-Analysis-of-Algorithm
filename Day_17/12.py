def rob(nums):
    if not nums:
        return 0
    if len(nums) == 1:
        return nums[0]
    
    def rob_range(start, end):
        rob, not_rob = 0, 0
        for i in range(start, end):
            rob, not_rob = not_rob + nums[i], max(rob, not_rob)
        return max(rob, not_rob)
    
    return max(rob_range(0, len(nums) - 1), rob_range(1, len(nums)))
     

nums = [2, 3, 2]
print("The maximum money you can rob without alerting the police is", rob(nums))
