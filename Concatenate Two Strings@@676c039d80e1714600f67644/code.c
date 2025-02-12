#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
    char str2[100];
    scanf("%s\n%s",str1,str2);
    printf("%s%s",str1 + str2);
    return 0;
}