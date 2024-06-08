#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* findDifferenceString(char** words, int wordsSize) {
    int n = strlen(words[0]);
    int* diff = (int*)malloc((n - 1) * sizeof(int));
    
    for (int i = 0; i < n - 1; i++) {
        diff[i] = words[0][i + 1] - words[0][i];
    }
    
    for (int j = 1; j < wordsSize; j++) {
        int* temp = (int*)malloc((n - 1) * sizeof(int));
        for (int k = 0; k < n - 1; k++) {
            temp[k] = words[j][k + 1] - words[j][k];
        }
        
        int same = 1;
        for (int l = 0; l < n - 1; l++) {
            if (temp[l] != diff[l]) {
                same = 0;
                break;
            }
        }
        
        if (!same) {
            return words[j];
        }
        
        free(temp);
    }
    
    return NULL;
}
1
