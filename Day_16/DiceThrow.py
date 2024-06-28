def dice (S, m, n):
    dp = [[0] * (S + 1) for _ in range(m + 1)]
    dp[0][0] = 1
    for i in range(1, m + 1):
        for j in range(1, S + 1):
            for k in range(1, n + 1):
                if j - k >= 0:
                    dp[i][j] += dp[i - 1][j - k]
    return dp[m][S]

S = 7
m = 2
n = 6
print(dice(S, m, n)) 
