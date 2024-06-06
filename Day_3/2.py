def check_if_can_break(s1, s2):
    s1_sorted = sorted(s1)
    s2_sorted = sorted(s2)
    
    if all(s1_char >= s2_char for s1_char, s2_char in zip(s1_sorted, s2_sorted)) or all(s1_char <= s2_char for s1_char, s2_char in zip(s1_sorted, s2_sorted)):
        return True
    else:
        return False


s1 = "abc"
s2 = "xyab"
print(check_if_can_break(s1, s2))
