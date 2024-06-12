def min_penalty_closing_time(customers):
    n = len(customers)

    cum_n = [0] * (n + 1)
    for i in range(1, n + 1):
        cum_n[i] = cum_n[i - 1] + (1 if customers[i - 1] == 'N' else 0)

    cum_y = [0] * (n + 1)
    for i in range(n - 1, -1, -1):
        cum_y[i] = cum_y[i + 1] + (1 if customers[i] == 'Y' else 0)

    min_penalty = float('inf')
    min_hour = 0

    for j in range(n + 1):
        penalty = cum_n[j] + cum_y[j]
        if penalty < min_penalty:
            min_penalty = penalty
            min_hour = j

    return min_hour

print(min_penalty_closing_time("ABCD"))  
print(min_penalty_closing_time("CCCCC"))  
print(min_penalty_closing_time("AAAA"))  

