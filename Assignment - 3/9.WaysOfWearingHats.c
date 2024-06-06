#include <stdio.h>
#include <stdlib.h>

#define MOD 1000000007  //stdlib file 

int numberWays(int** hats, int hatsSize, int* hatsColSize) {
    int n = hatsSize;
    long dp[1 << n] = {0};
    dp[0] = 1;

    for (int i = 1; i <= 40; i++) {
        int next[41] = {0};
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < hatsColSize[j]; k++) {
                next[hats[j][k]] += dp[1 << j];
                next[hats[j][k]] %= MOD;
            }
        }

        for (int j = 0; j < (1 << n); j++) {
            for (int k = 0; k < n; k++) {
                if (!(j & (1 << k))) {
                    dp[j | (1 << k)] += next[i];
                    dp[j | (1 << k)] %= MOD;
                }
            }
        }
    }

    return dp[(1 << n) - 1];
}

int main() {
    int hatsSize = 3;
    int hatsColSize[] = {2, 2, 1};
    int* hats[] = {{3, 4}, {4, 5}, {5}};

    int ways = numberWays(hats, hatsSize, hatsColSize);
    printf("Number of ways: %d\n", ways);

    return 0;
}
