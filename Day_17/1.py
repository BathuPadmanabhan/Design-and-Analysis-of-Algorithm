def palin(string):
    for word in string:
        if word == word[::-1]:
            return word
    return ""

string = ["abc","car","ada","racecar","cool"]

palin(string)