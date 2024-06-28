def frequency(n1, n2):
    set1 = set(n1)
    set2 = set(n2)
    
    common_elements = set1.intersection(set2)
    
    res = [n1.count(elem) + n2.count(elem) for elem in common_elements]
    
    return res

n1 = [1, 2, 3, 4, 5]
n2 = [1, 2, 6, 7, 8]

print(frequency(n1, n2))
