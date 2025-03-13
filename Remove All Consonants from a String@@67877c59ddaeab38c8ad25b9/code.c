#include<stdio.h>

int main() {
    char str[100];
    fgets(str, 100, stdin);

    int isPreviousVowelOrNumber = 0; 
    int isFirstWord = 1;             
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            if (isPreviousVowelOrNumber == 0 && !isFirstWord) {
                printf(" ");
            }
            printf("%c", str[i]);
            isPreviousVowelOrNumber = 1; 
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            if (isPreviousVowelOrNumber == 0 && !isFirstWord) {
                printf(" ");
            }
            printf("%c", str[i]);
            isPreviousVowelOrNumber = 1; 
        }
        else if (str[i] == ' ') {
            isPreviousVowelOrNumber = 0; 
            isFirstWord = 0;              
        }
    }
    return 0;
}

