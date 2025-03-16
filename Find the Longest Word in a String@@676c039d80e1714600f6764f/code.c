#include<stdio.h>
#include<string.h>
int main(){
    char str[100],word[100],lw[100];
    int maxlen=0,len=0;
    fgets(str,100,stdin);
    str[strcspn(str,"\n")] = 0;
    for(int i=0;i<=strlen(str);i++){
        if(str[i] != ' ' && str[i] != '\0'){
            word[len++] = str[i];
        }
        else{
            word[len] = '\0';
            if(len > maxlen){
                len = maxlen;
                strcpy(lw,str);
            }
            len = 0;
        }
    }
    printf("%c",lw);
    return 0;
}