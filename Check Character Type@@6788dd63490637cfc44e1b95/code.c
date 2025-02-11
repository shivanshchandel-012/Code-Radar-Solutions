#include <stdio.h>

int main(){
    char c;
    scanf("%c",&c);
    if('a'<= c <='z'){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            printf("Vowel");
        }
        else if('0' <= c <= '9'){
            printf("Digit");
        }
        else if (c =! 'a' || c =! 'e' || c =! 'i' || c =! 'o' || c =! 'u'){
            printf("Consonant");
        }
    }
    else printf("Special Character");
    return 0;
}