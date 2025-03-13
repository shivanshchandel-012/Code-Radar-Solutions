#include<stdio.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    int a=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'){
            a = 1;
        }
    }
    if(a == 1) printf("Yes");
    else printf("No");
    return 0;
}