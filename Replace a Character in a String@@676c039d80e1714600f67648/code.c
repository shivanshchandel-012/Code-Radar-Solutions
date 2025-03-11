#include<stdio.h>

int main(){
    char str[100];
    char l1,l2;
    scanf("%s",str);
    getchar();
    scanf("%c",&l1);
    scanf("%c",&l2);
    for(int i=0;str[i]!='\0';i++){
        if(str[i] == l1) str[i] = l2;
    }
    printf("%s",str);
    return 0;
}