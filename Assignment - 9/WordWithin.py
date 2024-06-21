def find(queries, dict):
    result = set()
    for query in queries:
        for word in dict:
            if len(query) == len(word) and set(query) & set(word):
                result.add(query)
    return list(result)

queries = ["word", "note", "ants", "wood"]
dictionary = ["wood", "joke", "moat"]
output = find(queries, dictionary)
print(output) 