#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
    char str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    printf("%s",str1.concat(str2));
    return 0;
}