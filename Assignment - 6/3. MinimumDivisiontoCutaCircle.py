def minimum_cuts(n):
    if n == 1:
        return 0
    return n

# Test cases
print(minimum_cuts(4))  # Output: 2
print(minimum_cuts(3))  # Output: 3
