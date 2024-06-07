#include<stdio.h>

int main(){
    int i, j;
    int n = 4;
    int c = 1;
    
    for (i = 0; i < n; i++){
        for (j = 0; j <= i; j++){
            printf("%d ", c);
            c = c * (i - j) / (j + 1);
            c++;
        }
        printf("\n");
    }
    return 0;
}
