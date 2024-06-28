def PerfectNum(num):
    res = 0
    
    for i in range(1, num):
        if num % i == 0:
            res += i
    
    return res

def main():
    n = int(input("Enter a number: "))
    
    r = PerfectNum(n)
    
    if r == 2 * n:
        print(f"{n} is a Perfect Number")
    else:
        print(f"{n} is not a Perfect Number")

if __name__ == "__main__":
    main()
