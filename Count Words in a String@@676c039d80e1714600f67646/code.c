#include<stdio.h>
int main(){
    char str[100];
    int i=0,count=0;
    int word = 0;
    while(scanf("%s",str) != '/0'){
        if(word == 0){
            word = 1;
            count++;
        }
    }
    printf("%d",count);
    return 0;
}