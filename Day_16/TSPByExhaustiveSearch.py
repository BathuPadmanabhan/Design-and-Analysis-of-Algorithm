import itertools

def tsp_brute_force(graph):
    n = len(graph)
    nodes = set(range(n))
    min_cost = float('inf')
    best_path = None

    for path in itertools.permutations(nodes):
        cost = 0
        for i in range(n - 1):
            cost += graph[path[i]][path[i + 1]]
        cost += graph[path[-1]][path[0]]

        if cost < min_cost:
            min_cost = cost
            best_path = path

    return min_cost, best_path

graph = [
    [0, 10, 15, 20],
    [10, 0, 35, 25],
    [15, 35, 0, 30],
    [20, 25, 30, 0]
]

min, path = tsp_brute_force(graph)
print(f"Minimum Cost: {min}")
print(f"Best Path: {path}")
