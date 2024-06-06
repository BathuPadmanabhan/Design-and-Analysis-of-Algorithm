def max_sum_no_adjacent(nums, queries):
    def max_sum_subsequence(arr):
        incl = 0
        excl = 0

        for i in arr:
            new_excl = max(incl, excl)
            incl = excl + i
            excl = new_excl

        return max(incl, excl)

    result = 0
    for query in queries:
        posi, xi = query
        nums[posi] = xi
        result += max_sum_subsequence(nums)

    return result % (10**9 + 7)

nums = [1, 2, 3, 4, 5]
queries = [[1, 6], [3, 7]]
print(max_sum_no_adjacent(nums, queries))  
