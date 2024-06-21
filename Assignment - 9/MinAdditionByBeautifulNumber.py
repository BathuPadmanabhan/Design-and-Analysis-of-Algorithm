def Min(n, target):
    x = 0
    while sum(int(digit) for digit in str(n + x)) > target:
        x = x + 1
    return x

n = 16
target = 6
print(Min(n, target))  
