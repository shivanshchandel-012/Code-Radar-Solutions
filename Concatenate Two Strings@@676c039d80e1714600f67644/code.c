#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
    char str2[100];
    fgets(str1,100,stdin);
    fgets(str2,100,stdin);
    char str3[100];
    int i=0,j=0;
    while(str1[i] != '\0'){
        str3[i] = str1[i];
        i++;
    }
    while(str2[j] != '\0'){
        str3[i] = str2[j];
        i++;
        j++;
    }
    str3[i] = '\0';
    printf("%s",str3);
    return 0;
}