def sort(a):
    if len(a) <= 1:
        return a
    
    mid = len(a) // 2
    l = a[:mid]
    r = a[mid:]
    
    left = sort(l)
    right = sort(r)
    
    return merge(left, right)

def merge(left, right):
    result = []
    i = j = 0
    
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1
    
    result.extend(left[i:])
    result.extend(right[j:])
    
    return result


def find_max(result):
    if result == []:
        return []
    else:
        return max(result)

a = [3,3,3,3,3,3,3]

sorted = sort(a)

print(find_max(sorted))
