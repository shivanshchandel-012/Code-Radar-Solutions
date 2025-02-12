#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
    char str2[100];
    scanf("%s %s",str1,str2);
    char str3[100];
    int i=j=0;
    while(str1[i] != '\0'){
        str3[i] = str1[i];
        i++;
    }
    while(str2[j] != '\0'){
        str3[i] = str2[j];
        i++;
        j++;
    }
    printf("%s",str3);
    return 0;
}