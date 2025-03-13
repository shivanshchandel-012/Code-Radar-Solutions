#include<stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    fgets(str,100,stdin);
    int i=0;
    while(str[i] != '\0'){
        freq[str[i]]++;
        i++;
    }
    char mf = str[0];
    int count = freq[mf];
    for(i=1;str[i]!='\0';i++){
        if(freq[str[i]] > mf){
            mf = str[i];
            count = freq[str[i]];
        }
        else if(freq[str[i]] == count){
            if (str[i] < mf){
                mf = str[i];
            }
        }
    }
    printf("%c",mf);
    return 0;
}
