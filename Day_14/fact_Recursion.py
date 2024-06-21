def fact(num):
    if num <=0:
        return 1
    else:
        return fact(num-1) * num 

num = 6

print(fact(num))