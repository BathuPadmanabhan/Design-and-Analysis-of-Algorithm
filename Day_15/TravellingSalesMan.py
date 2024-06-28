from itertools import permutations

def tsp(graph):
    n = len(graph)
    all_cities = set(range(n))
    min_cost = float('inf')
    best_path = None

    for path in permutations(range(1, n)):
        current_cost = 0
        current_path = [0] + list(path) + [0]

        for i in range(n):
            current_cost += graph[current_path[i]][current_path[i + 1]]

        if current_cost < min_cost:
            min_cost = current_cost
            best_path = current_path

    return best_path, min_cost

graph = [
    [1, 10, 15, 20],
    [10, 1, 35, 25],
    [15, 35, 1, 30],
    [20, 25, 30, 1]
]

best_path, min_cost = tsp(graph)
print("Best Path:", best_path)
print("Minimum Cost:", min_cost)

