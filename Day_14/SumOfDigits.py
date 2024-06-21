def sum_of_digits(num):
    return sum(int(digit) for digit in str(num))

def max_sum_of_digits(nums):
    max_sum = 0
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            if sum_of_digits(nums[i]) == sum_of_digits(nums[j]):
                print(nums[i],nums[j])
                max_sum = max(max_sum, nums[i] + nums[j])
    return max_sum

nums = [123, 456, 789, 111, 222]
result = max_sum_of_digits(nums)
print(result)
