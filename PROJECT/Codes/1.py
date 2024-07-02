import heapq


def dijkstra(graph, start):
    queue = [(0, start)]
    shortest_paths = {node: float('inf') for node in graph}
    shortest_paths[start] = 0
    previous_nodes = {node: None for node in graph}
 


     while queue:
        (current_cost, current_node) = heapq.heappop(queue)
       
        if current_cost > shortest_paths[current_node]:
            continue
       
        for neighbor, weight in graph[current_node].items():
            cost = current_cost + weight
            if cost < shortest_paths[neighbor]:
                shortest_paths[neighbor] = cost
                previous_nodes[neighbor] = current_node
                heapq.heappush(queue, (cost, neighbor))
   
    return shortest_paths, previous_nodes


graph = {
    'A': {'B': 2, 'C': 5, 'D': 1},
    'B': {'A': 2, 'C': 3, 'D': 2, 'E': 4},
    'C': {'A': 5, 'B': 3, 'E': 1},
    'D': {'A': 1, 'B': 2, 'E': 3},
    'E': {'B': 4, 'C': 1, 'D': 3}
}


start_node = 'A'
shortest_paths, previous_nodes = dijkstra(graph, start_node)
print("Shortest paths:", shortest_paths)
print("Previous nodes:", previous_nodes)
