def sum_array(nums):
    n = len(nums)
    total_sum = 0

    for i in range(n):
        count = {}
        for j in range(i, n):
            if nums[j] in count:
                count[nums[j]] += 1
            else:
                count[nums[j]] = 1
            total_sum += sum([val ** 2 for val in count.values()])

    return total_sum

nums = [1, 2, 1]
print(sum_array(nums))  
