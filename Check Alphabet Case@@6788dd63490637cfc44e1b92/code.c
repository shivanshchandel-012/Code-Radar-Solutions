#include <stdio.h>

int main(){
    char a;
    scanf("%c",&a);
    int b = (int)a;
    if(b >= 65 && b <= 90){
        printf("Uppercase");
    }
    else if(b >= 97 && b <= 122){
        printf("Lowercase");
    }
    return 0;
}