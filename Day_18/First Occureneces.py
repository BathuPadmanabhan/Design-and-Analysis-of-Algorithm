def str(haystack, needle):
    counter = []
    for i in range(len(needle)):
        for j in range(i, len(haystack)):
            if needle[i] == haystack[j]:
                counter.append(needle[i])
        if counter and counter[-1] == needle[i]:
            return True
    return False


haystack = "sadbutsad"
needle = "sad"

print(str(haystack,needle))