#include <stdbool.h>
#include <string.h>

bool isMatch(char *s, char *p) {
    if (*p == '\0') return *s == '\0';

    bool firstMatch = (*s != '\0' && (*s == *p || *p == '.'));

    if (*(p + 1) == '*') {
        return (isMatch(s, p + 2) || (firstMatch && isMatch(s + 1, p)));
    } else {
        return firstMatch && isMatch(s + 1, p + 1);
    }
}

int main() {
    char *s = "aa";
    char *p = "a";
    
    bool result = isMatch(s, p);
    
    return 0;
}
