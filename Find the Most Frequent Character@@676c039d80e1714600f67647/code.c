// Your code here...
#include<stdio.h>

int main(){
    char str[50];
    scanf("%s",str);
    int freq[256];
    for(int i=0;str[i]!='\0';i++){
        freq[str[i]]++;
    }
    int max_freq = 0;
    for(int i=0;i<256;i++){
        if(freq[i] > max_freq){
            max_freq = freq[i]
        }
    }
    for(int i='a';i<='z';i++){
        if(freq[i] == max_freq){
            printf("%c",i);
            break;
        }
    }
    return 0;
}