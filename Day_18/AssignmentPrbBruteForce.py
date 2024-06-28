import itertools

def total_cost(assignment, cost_matrix):
    total = 0
    for worker, task in assignment:
        total += cost_matrix[worker][task]
    return total

def assignment_problem(cost_matrix):
    workers = range(len(cost_matrix))
    min_cost = float('inf')
    optimal_assignment = None

    for perm in itertools.permutations(workers):
        assignment = list(zip(perm, range(len(cost_matrix))))
        cost = total_cost(assignment, cost_matrix)
        if cost < min_cost:
            min_cost = cost
            optimal_assignment = assignment

    return optimal_assignment, min_cost

cost_matrix_1 = [[3, 10, 7], [8, 5, 12], [4, 6, 9]]
optimal_assignment_1, total_cost_1 = assignment_problem(cost_matrix_1)
print("Test Case 1:")
print("Optimal Assignment:", [(f"worker {w+1}", f"task {t+1}") for w, t in optimal_assignment_1])
print("Total Cost:", total_cost_1)

cost_matrix_2 = [[15, 9, 4], [8, 7, 18], [6, 12, 11]]
optimal_assignment_2, total_cost_2 = assignment_problem(cost_matrix_2)
print("\nTest Case 2:")
print("Optimal Assignment:", [(f"worker {w+1}", f"task {t+1}") for w, t in optimal_assignment_2])
print("Total Cost:", total_cost_2)
