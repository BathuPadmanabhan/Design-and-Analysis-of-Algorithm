def Unique(num):
    n = len(num)
    num2 = []

    for i in range(0,n):
        a = num[i]
        is_unique = True
        for j in range (i+1,n):
            if a ==num[j]:
                is_unique = False
        if is_unique:
            num2.append(a)
    return num2

num = [3, 7, 3, 5, 2, 5, 9, 2]

print(Unique(num))
