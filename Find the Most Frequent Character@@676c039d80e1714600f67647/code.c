// Your code here...
#include<stdio.h>

int main(){
    char str[100];
    int freq[256] = {};
    int i=0;
    while(scanf("%c",&str[i]) != '\n' && str[i] != '\n'){
        i++;
    }
    i = '\0';
    for(int j=0;str[j]!=EOF;j++){
        freq[str[j]]++;
    }
    char mf = str[0];
    int mc = str[0];
    for(int j=1;str[j]!=EOF;j++){
        if(freq[str[j]] > mc){
            mc = freq[str[j]];
            mf = str[j];
        }
        else if(mc == freq[str[j]]){
            if(str[j] < mf) mf = str[j];
        }
    }
    printf("%c",mf);
    return 0;
}