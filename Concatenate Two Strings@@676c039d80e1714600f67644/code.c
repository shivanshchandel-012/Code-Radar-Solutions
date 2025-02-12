#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
    char str2[100];
    scanf("%s %s",str1,str2);
    char str3[100];
    for(int i=0;i<'\0';i++){
        str3[i] = str1[i] + str2[i];
    }
    printf("%s",str3);
    return 0;
}