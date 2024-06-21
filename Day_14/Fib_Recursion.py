def fib(num):
    if num <= 1:
        return num
    else:
        return fib(num-1) + fib(num-2)

num = 6
sum = 0
for i in range(num):
    sum += fib(i)
    print(fib(i), end = " ")
print()
print(f"Sum of Fibonacci : {sum}")
