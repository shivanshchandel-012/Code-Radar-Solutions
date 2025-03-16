#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int len = strlen(str);
    fgets(str,100,stdin);
    for(int i=0;str[i]!=len;i++){
        for(int j=i+1;str[j]!=len;j++){
            if(str[i] == str[j]){
                for(int k=j;k!=len;k++){
                    str[k] = str[k+1];
                }
                len--;
                j--;
            }
        }
    }
    printf("%s",str);
    return 0;
}