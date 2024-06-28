def find_substrings(words):
    substrings = []
    for i in range(len(words)):
        for j in range(len(words)):
            if i != j and words[i] in words[j]:
                substrings.append(words[i])
                break
    return list(set(substrings))

words = ["mass", "as", "hero", "superhero"]
print(find_substrings(words))
