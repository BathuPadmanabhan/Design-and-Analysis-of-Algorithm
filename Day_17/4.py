def sum_array(num,k):
    n = len(num)
    count = 0


    for i in range(n):
        for j in range(i, n):
            if  num[i] == num[j] and (i * j) % k:
                count += 1

    return count

num = [3,1,2,2,2,1,3]
k = 2
print(sum_array(num,k))
