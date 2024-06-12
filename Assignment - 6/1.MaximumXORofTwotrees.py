class Solution:
    def max_xor_subtrees(self, n: int, edges: List[List[int]], values: List[int]) -> int:
        graph = defaultdict(list)
        for u, v in edges:
            graph[u].append(v)
            graph[v].append(u)

        subtree_values = [0] * n
        total_values = [0] * n

        def dfs(node, parent):
            total_values[node] = values[node]
            for neighbor in graph[node]:
                if neighbor != parent:
                    total_values[node] += dfs(neighbor, node)
            return total_values[node]

        def calculate_subtree_values(node, parent):
            subtree_values[node] = total_values[node]
            for neighbor in graph[node]:
                if neighbor != parent:
                    total_values[node] -= total_values[neighbor]
                    total_values[neighbor] += total_values[node]
                    calculate_subtree_values(neighbor, node)
            return subtree_values[node]

        dfs(0, -1)
        calculate_subtree_values(0, -1)

        max_xor = 0
        for i in range(n):
            for j in range(i + 1, n):
                if subtree_values[i] + subtree_values[j] - total_values[i] == total_values[j]:
                    max_xor = max(max_xor, subtree_values[i] ^ subtree_values[j])

        return max_xor
