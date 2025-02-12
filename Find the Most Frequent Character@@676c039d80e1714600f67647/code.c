// Your code here...
#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    scanf("%s",str);
    int len = strlen(str);
    int freq[256];
    for(int i=0;i<len;i++){
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
            printf("%c",max_freq);
            break;
        }
    }
    return 0;
}