#include<stdio.h>
int main(){
    char str;
    int count = 0;
    int word = 0;
    while(scanf("%c",&str) != EOF){
        if(str == ' ' || str == '\t' || str == '\n') word = 0;
        else if(word == 0){
            word = 1;
            count++;
        }
    }
    printf("%d",count);
    return 0;
}