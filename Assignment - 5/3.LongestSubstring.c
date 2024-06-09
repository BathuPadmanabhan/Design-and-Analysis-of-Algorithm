#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    int visited[256];
    memset(visited, -1, sizeof(visited));
    int maxLength = 0, start = -1;
    
    for (int i = 0; i < n; i++) {
        if (visited[s[i]] > start)
            start = visited[s[i]];
        visited[s[i]] = i;
        maxLength = (i - start > maxLength) ? i - start : maxLength;
    }
    
    return maxLength;
}

int main() {
    char s[] = "abcabcbb";
    int length = lengthOfLongestSubstring(s);
    printf("Length of the longest substring without repeating characters: %d\n", length);
    
    return 0;
}
