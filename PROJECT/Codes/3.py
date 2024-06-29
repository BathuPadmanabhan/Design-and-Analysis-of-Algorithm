def degree_centrality(graph):
    return {node: len(edges) for node, edges in graph.items()}


def pagerank(graph, d=0.85, max_iterations=100, tol=1e-6):
    nodes = graph.keys()
    n = len(nodes)
    ranks = {node: 1/n for node in nodes}
    new_ranks = ranks.copy()

    for _ in range(max_iterations):
        for node in nodes:
            rank_sum = sum(ranks[neighbor] / len(graph[neighbor]) for neighbor in graph[node])
            new_ranks[node] = (1 - d) / n + d * rank_sum
        
        if max(abs(new_ranks[node] - ranks[node]) for node in nodes) < tol:
            break
        ranks = new_ranks.copy()

    return ranks

graph = {
    'A':{ ['B', 'C']},
    'B': {['A', 'D', 'E']},
    'C': {['A', 'F']},
    'D': {['B']},
    'E':{ ['B', 'F']},
    'F': {['C', 'E']}
}


pagerank_scores = pagerank(graph)
print("PageRank Scores:", pagerank_scores)

degree_centrality_scores = degree_centrality(graph)
print("Degree Centrality Scores:", degree_centrality_scores)


