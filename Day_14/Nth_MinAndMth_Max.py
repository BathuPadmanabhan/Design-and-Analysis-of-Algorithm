def find(arr, m, n):
    a = sorted(arr)
    max = a[-m]
    min = a[n-1]
    sum = max + min
    dif = max - min
    return sum, dif

array = [-12, -78, -35, -42, -85]
m = 3
n = 3
sum, dif = find(array, m, n)
print(f"Sum of {m}-th maximum and {n}-th minimum: {sum}")
print(f"Difference of {m}-th maximum and {n}-th minimum: {dif}")
