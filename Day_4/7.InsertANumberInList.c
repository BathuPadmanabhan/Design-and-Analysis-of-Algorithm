#include <stdio.h>

int main() {
    int list[5] = {1, 2, 3, 4, 5};
    int number = 10;
    int position = 2;
    int i,s = 5;

    for (i = s; i >= position; i--) {
        list[i] = list[i - 1];
    }

    list[position - 1] = number;
    n++;

    for (i = 0; i < s; i++) {
        printf("%d ", list[i]);
    }

    return 0;
}
