def bubble_sort(a): 
    n = len(a) 
    for i in range(n): 
        for j in range(0, n-i-1): 
            if a[j] > a[j+1] : 
                a[j], a[j+1] = a[j+1], a[j] 
    return a


a= [64, 34, 25, 12, 22, 11, 90] 
sorted = bubble_sort(a) 
print("Sorted array is:", sorted)