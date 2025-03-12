#include<stdio.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    int count = 0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i] != ' '){
            count++;
        }
        printf("%c: %d\n",str[i],count);
    }
    return 0;
}