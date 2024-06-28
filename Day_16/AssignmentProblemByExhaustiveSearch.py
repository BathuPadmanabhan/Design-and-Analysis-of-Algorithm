import itertools

def calculate_cost(assignment, cost_matrix):
    total_cost = 0
    for i, j in enumerate(assignment):
        total_cost += cost_matrix[i][j]
    return total_cost

def brute(matrix):
    n = len(matrix)
    min_cost = float('inf')
    best_assignment = None

    for perm in itertools.permutations(range(n)):
        cost = calculate_cost(perm, matrix)
        if cost < min_cost:
            min_cost = cost
            best_assignment = perm

    return best_assignment, min_cost

matrix = [
    [10, 5, 8],
    [6, 9, 7],
    [8, 6, 4]
]

assignment, min_cost = brute(matrix)
print("Best Assignment:", assignment)
print("Minimum Cost:", min_cost)
