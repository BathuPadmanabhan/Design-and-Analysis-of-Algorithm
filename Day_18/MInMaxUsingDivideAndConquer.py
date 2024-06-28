def find_max_min(arr, low, high):
    if low == high:
        return arr[low], arr[low]
    elif high - low == 1:
        return (arr[low], arr[high]) if arr[low] < arr[high] else (arr[high], arr[low])
    else:
        mid = (low + high) // 2
        min1, max1 = find_max_min(arr, low, mid)
        min2, max2 = find_max_min(arr, mid + 1, high)
        return min(min1, min2), max(max1, max2)











a = [5, 7, 3, 4, 9, 12, 6, 2]
N = len(a)

min_val, max_val = find_max_min(a, 0, N - 1)

print(f"Min = {min_val}, Max = {max_val}")
