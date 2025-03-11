#include<stdio.h>

int main() {
    char str[100];
    int freq[256] = {0}; 
    int i = 0;
    while (scanf("%c", &str[i]) && str[i] != '\n') {
        i++;
    }
    str[i] = '\0'; 
    for (int j = 0; str[j] != '\0'; j++) {
        freq[str[j]]++;
    }
    char mf = str[0];
    int mc = freq[str[0]];

    for (int j = 1; str[j] != '\0'; j++) {
        if (freq[str[j]] > mc) {
            mc = freq[str[j]];
            mf = str[j];
        }
        else if (freq[str[j]] == mc) {
            if (str[j] < mf) {  
                mf = str[j];
            }
        }
    }

    printf("%c",mf);
    return 0;
}
