#include <stdio.h>
#include <string.h>

int main(){
    char str;
    int len = 0;
    while(scanf("%c",str)==1 && str != '\n'){
        len++;
    }
    printf("%d",len);
    return 0;
}