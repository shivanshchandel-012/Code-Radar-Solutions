#include<stdio.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    int a=0;
    for(int i=0;str[i]!=EOF;i++){
        char ch = tolower(str);
        if(str[i] >= 'a' && str[i] <= 'z'){
            a = 1;
        }
    }
    if(a==1) printf("Yes");
    else if(a == 0)printf("No");
    return 0;
}