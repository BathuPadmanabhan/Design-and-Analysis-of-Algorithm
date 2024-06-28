def max_element(num):
    n = len(num)
    max = num[0]
    for i in num:
        if i>max:
            max=i

    return max

num = [1,2,3,4,5]

print(max_element(num))

