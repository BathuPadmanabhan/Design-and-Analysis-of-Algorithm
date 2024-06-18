from collections import defaultdict

class Graph:
    def __init__(self, vertices):
        self.V = vertices
        self.graph = defaultdict(list)

    def add_edge(self, u, v, w):
        self.graph[u].append((v, w))
        self.graph[v].append((u, w))

    def min_key(self, key, mst_set):
        min_val = float('inf')
        min_index = -1

        for v in range(self.V):
            if key[v] < min_val and mst_set[v] is False:
                min_val = key[v]
                min_index = v

        return min_index

    def prim_mst(self):
        key = [float('inf')] * self.V
        parent = [None] * self.V
        key[0] = 0
        mst_set = [False] * self.V

        parent[0] = -1

        for _ in range(self.V):
            u = self.min_key(key, mst_set)
            mst_set[u] = True

            for v, w in self.graph[u]:
                if mst_set[v] is False and w < key[v]:
                    key[v] = w
                    parent[v] = u

        return parent
