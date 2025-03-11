#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char l1,l2;
    scanf("%s",str);
    scanf("%c",&l1);
    scanf("%c",&l2);
    for(int i=0;str[i]!='\0';i++){
        if(strcmp(str[i],l1) == 0) str[i] = l2;
    }
    printf("%s",str);
    return 0;
}