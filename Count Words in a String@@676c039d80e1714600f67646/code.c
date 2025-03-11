#include<stdio.h>
int main(){
    char str[50];
    scanf("%s",&str);
    int i=0,count=0;
    while(str[i] != '\0'){
        count++;
    }
    printf("%d",count);
    return 0;
}