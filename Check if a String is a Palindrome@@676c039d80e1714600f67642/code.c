#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    scanf("%s",str);
    int len = strlen(str);
    char str2[50];
    for(int i=0;i<len;i++){
        str2[i] = str[len - i - 1];
    }
    if(strcmp(str,str2) == 0){
        printf("Yes");
    }
    else printf("No");
    return 0;
}