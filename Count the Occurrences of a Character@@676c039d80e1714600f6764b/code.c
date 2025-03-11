#include<stdio.h>
int main(){
    char str[100];
    char let;
    scanf("%s",str);
    scanf(" %c",&let);
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i] == let) count++;
    }
    printf("%d",count);
    return 0;
}