#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len = strlen(str);
    int i, j = 0;
    int seen[256] = {0};
    for (i = 0; i < len; i++) {
        if (seen[str[i]] == 0) {
            str[j++] = str[i]; 
            seen[str[i]] = 1; 
        }
    }
    str[j] = '\0';
    printf("%s",str);
    return 0;
}
