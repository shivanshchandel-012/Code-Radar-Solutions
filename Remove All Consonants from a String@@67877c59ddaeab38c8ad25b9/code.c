#include<stdio.h>

int main() {
    char str[100];
    fgets(str, 100, stdin);  // Read input sentence

    int isPreviousVowelOrNumber = 0; // Flag to check if the previous character was a vowel or number
    int isFirstWord = 1;             // Flag to check if it's the first word (to not print space at the beginning)

    // Iterate through each character of the string
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is a vowel (both lowercase and uppercase)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            
            // If it's not the first word and we haven't already printed a vowel or number, print a space
            if (isPreviousVowelOrNumber == 0 && !isFirstWord) {
                printf(" ");
            }

            // Print the vowel
            printf("%c", str[i]);
            isPreviousVowelOrNumber = 1; // Mark that a vowel has been printed
        }
        // Check if the character is a number
        else if (str[i] >= '0' && str[i] <= '9') {
            
            // If it's not the first word and we haven't already printed a vowel or number, print a space
            if (isPreviousVowelOrNumber == 0 && !isFirstWord) {
                printf(" ");
            }

            // Print the number
            printf("%c", str[i]);
            isPreviousVowelOrNumber = 1; // Mark that a number has been printed
        }
        // Check for space, indicating a new word
        else if (str[i] == ' ') {
            isPreviousVowelOrNumber = 0;  // Reset flag for new word
            isFirstWord = 0;              // Mark that we've moved past the first word
        }
    }
    return 0;
}

