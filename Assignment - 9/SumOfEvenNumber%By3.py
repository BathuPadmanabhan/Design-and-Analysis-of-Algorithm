def AverageSum(nums):
    even = [num for num in nums if num % 2 == 0 and num % 3 == 0]
    if not even:
        return 0
    return sum(even) // len(even)

nums = [1, 3, 6, 10, 12, 15]
result = AverageSum(nums)
print(result) 
