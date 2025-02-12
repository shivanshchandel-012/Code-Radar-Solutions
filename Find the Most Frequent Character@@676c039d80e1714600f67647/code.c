// Your code here...
#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    scanf("%s",str);
    int len = strlen(str);
    int freq = str[0];
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(str[i] == str[j]){
                printf("%c",str[j]);
            }
        }
    }
    return 0;
}