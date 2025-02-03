#include <stdio.h>

int main(){
    char s[50];
    scanf("%s",s);
    int count = 0;
    for(int i=0;i<s[50];i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}