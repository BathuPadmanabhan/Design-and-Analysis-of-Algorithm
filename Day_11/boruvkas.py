def boruvka(graph):
    mst = []
    subsets = [[i] for i in range(len(graph))]
    
    while len(mst) < len(graph) - 1:
        cheapest = [None] * len(graph)
        
        for i, edges in enumerate(graph):
            for u, v, weight in edges:
                set1 = next((index for index, subset in enumerate(subsets) if u in subset), None)
                set2 = next((index for index, subset in enumerate(subsets) if v in subset), None)
                
                if set1 != set2:
                    if cheapest[set1] is None or weight < cheapest[set1][1]:
                        cheapest[set1] = (v, weight, i)
                    if cheapest[set2] is None or weight < cheapest[set2][1]:
                        cheapest[set2] = (u, weight, i)
        
        for i, edge in enumerate(cheapest):
            if edge is not None:
                v, weight, j = edge
                set1 = next((index for index, subset in enumerate(subsets) if v in subset), None)
                set2 = next((index for index, subset in enumerate(subsets) if i in subset), None)
                
                if set1 != set2:
                    mst.append((i, v, weight))
                    subsets[set1] += subsets[set2]
                    subsets.pop(set2)
    
    return mst
