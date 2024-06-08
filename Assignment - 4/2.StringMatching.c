#include <stdio.h>
#include <string.h>

int isWithinTwoEdits(char* query, char* word) {
    int i,count = 0;
    int len = strlen(query);
    
    if (strcmp(query, word) == 0) {
        return 1;
    }
    
    for (i = 0; i < len; i++) {
        if (query[i] != word[i]) {
            count++;
        }
        if (count > 2) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    char* queries[] = {"word", "note", "ants", "wood"};
    char* dictionary[] = {"wood", "joke", "moat"};
    
    int queriesLen = sizeof(queries) / sizeof(queries[0]);
    int dictLen = sizeof(dictionary) / sizeof(dictionary[0]);
    
    for (int i = 0; i < queriesLen; i++) {
        for (int j = 0; j < dictLen; j++) {
            if (isWithinTwoEdits(queries[i], dictionary[j])) {
                printf("%s\n", queries[i]);
                break;
            }
        }
    }
    
    return 0;
}
