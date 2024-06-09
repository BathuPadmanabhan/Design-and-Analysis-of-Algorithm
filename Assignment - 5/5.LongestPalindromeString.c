#include <stdio.h>
#include <string.h>

char* longestPalindrome(char* s) {
    if (s == NULL || strlen(s) < 1) return "";
    
    int start = 0, end = 0;
    for (int i = 0; i < strlen(s); i++) {
        int len1 = expandAroundCenter(s, i, i);
        int len2 = expandAroundCenter(s, i, i + 1);
        int len = len1 > len2 ? len1 : len2;
        
        if (len > end - start) {
            start = i - (len - 1) / 2;
            end = i + len / 2;
        }
    }
    
    char* result = (char*)malloc((end - start + 2) * sizeof(char));
    strncpy(result, s + start, end - start + 1);
    result[end - start + 1] = '\0';
    
    return result;
}

int expandAroundCenter(char* s, int left, int right) {
    int L = left, R = right;
    while (L >= 0 && R < strlen(s) && s[L] == s[R]) {
        L--;
        R++;
    }
    return R - L - 1;
}

int main() {
    char s[] = "babad";
    char* result = longestPalindrome(s);
    printf("Longest Palindromic Substring: %s\n", result);
    free(result);
    return 0;
}
