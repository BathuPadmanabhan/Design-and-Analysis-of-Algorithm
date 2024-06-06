#include <stdio.h>
#include <string.h>

int canBreakStrings(char *s1, char *s2) {
    int count1[26] = {0}, count2[26] = {0};
    
    for (int i = 0; i < strlen(s1); i++) {
        count1[s1[i] - 'a']++;
        count2[s2[i] - 'a']++;
    }
    
    int sum1 = 0, sum2 = 0;
    int flag1 = 0, flag2 = 0;
    
    for (int i = 0; i < 26; i++) {
        sum1 += count1[i];
        sum2 += count2[i];
        
        if (sum1 > sum2)
            flag1 = 1;
        if (sum2 > sum1)
            flag2 = 1;
    }
    
    return !flag1 || !flag2;
}

int main() {
    char s1[] = "abc";
    char s2[] = "xya";
    
    if (canBreakStrings(s1, s2))
        printf("Output: true\nExplanation: A permutation of s2 can break s1.\n");
    else
        printf("Output: false\nExplanation: No permutation can break the other.\n");
    
    return 0;
}
