#include<stdio.h>

int main() {
    char str[100];
    fgets(str, 100, stdin);  

    int freq[256] = {0};  
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] > 0) {
            printf("%c:%d ", str[i], freq[(unsigned char)str[i]]);
            freq[(unsigned char)str[i]] = 0; 
        }
    }
    return 0;
}
