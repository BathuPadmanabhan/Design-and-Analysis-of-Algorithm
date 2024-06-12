def min_penalty_closing_time(customers):
    n = len(customers)

    # Cumulative counts of 'N' from the start
    cum_n = [0] * (n + 1)
    for i in range(1, n + 1):
        cum_n[i] = cum_n[i - 1] + (1 if customers[i - 1] == 'N' else 0)

    # Cumulative counts of 'Y' from the end
    cum_y = [0] * (n + 1)
    for i in range(n - 1, -1, -1):
        cum_y[i] = cum_y[i + 1] + (1 if customers[i] == 'Y' else 0)

    min_penalty = float('inf')
    min_hour = 0

    # Calculate penalty for each closing hour
    for j in range(n + 1):
        penalty = cum_n[j] + cum_y[j]
        if penalty < min_penalty:
            min_penalty = penalty
            min_hour = j

    return min_hour


# Test cases
print(min_penalty_closing_time("YYNY"))  # Output: 2
print(min_penalty_closing_time("NNNNN"))  # Output: 0
print(min_penalty_closing_time("YYYY"))  # Output: 4

