def nextGreaterElement(nums):
    result = []
    
    for i in range(len(nums)):
        found = False
        for j in range(i+1, len(nums)):
            if nums[j] > nums[i]:
                result.append(nums[j])
                found = True
                break
        if not found:
            result.append(-1)
    
    return result

nums = [5, 3, 7, 2, 8]
print(nextGreaterElement(nums))  
