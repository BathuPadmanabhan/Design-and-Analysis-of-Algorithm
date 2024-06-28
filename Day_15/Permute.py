def permute(a, n):
    if n == 1:
        print(a)
    else:
        for i in range(n):
            permute(a, n - 1)
            if n % 2 == 0:
                a[i], a[n - 1] = a[n - 1], a[i]
            else:
                a[0], a[n - 1] = a[n - 1], a[0]

a = [1, 2, 3]

permute(a, len(a))
