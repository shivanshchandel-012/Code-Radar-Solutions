#include<stdio.h>
int main(){
    char str[100];
    int i=0,count=0;
    int word = 0;
    while(scanf("%s",str) != EOF){
        if(str == ' ' || str == '\t' || str == '\n') word = 0;
        else if(word == 0){
            word = 1;
            count++;
        }
    }
    printf("%d",count);
    return 0;
}