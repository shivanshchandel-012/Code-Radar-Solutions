#include <stdio.h>
#include <string.h>

int main(){
    char str;
    int len = 0;
    scanf("%c",str);
    while(str != '\n'){
        len++;
    }
    printf("%d",len);
    return 0;
}