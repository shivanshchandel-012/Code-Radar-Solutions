#include<stdio.h>

int main() {
    unsigned char str[100];
    fgets(str, 100, stdin);  

    int freq[256] = {0};  
    for (int i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[str[i]] > 0) {
            printf("%c: %d\n", str[i], freq[str[i]]);
            freq[str[i]] = 0; 
        }
    }
    return 0;
}
