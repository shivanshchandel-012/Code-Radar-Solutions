#include<stdio.h>
int main(){
    char str[50];
    scanf("%s",str);
    char str2[50];
    for(int i='\0';i>str[0];i--){
        str[i] = str2[i-1];
    }
    if(strcmp(str2,str1) == 0){
        printf("Yes");
    }
    else printf("No");
    return 0;
}