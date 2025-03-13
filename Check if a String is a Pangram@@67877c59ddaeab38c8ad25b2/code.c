#include<stdio.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    int a=1;
    for(int i=0;str[i]!=EOF;i++){
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
            a = 0;
            break;
        }
    }
    if(a==0) printf("Yes");
    else if(a)printf("No");
    return 0;
}