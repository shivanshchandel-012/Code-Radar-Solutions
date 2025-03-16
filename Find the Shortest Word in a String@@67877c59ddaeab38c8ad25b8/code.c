#include<stdio.h>
#include<string.h>
int main(){
    char str[100],word[100],sw[100];
    int minlen = 1000,len=0,j=0;
    fgets(str,100,stdin);
    str[strcspn(str,'\n')] = 0;
    for(int i=0;i<strlen(str);i++){
        if(str[i]!=' ' && str[i]!='\0'){
            word[len++] = str[i];
        }else{
            word[len] = '\0';
            if (len > 0 && len < minlen) {
                minLen = len;
                strcpy(sw, word);
            }
            len = 0;
        }
    }
    printf("%c",sw);
    return 0;
}