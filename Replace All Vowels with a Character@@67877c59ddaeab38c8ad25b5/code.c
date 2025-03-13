#include<stdio.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    char ch;
    scanf("%c",&ch);
    for(int i=0;str[i]!='\0';i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            str[i] = ch;
        }
    }
    printf("%s",str);
    return 0;
}