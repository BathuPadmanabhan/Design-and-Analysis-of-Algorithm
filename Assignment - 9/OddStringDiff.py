def odd(words):
    def get_diff(word):
        return [ord(word[i + 1]) - ord(word[i]) for i in range(len(word) - 1)]

    diff = [get_diff(word) for word in words]
    odd_array = next(iter(set(words) - set([word for word in words if words.count(word) > 1])))

    return odd_array

words = ["adc", "wzy", "abc"]
result = odd(words)
print(result)  