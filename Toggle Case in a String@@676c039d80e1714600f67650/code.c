#include<stdio.h>
#include<ctype.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    for(int i=0;str[i]!='\0';i++){
        if(isupper(str[i])){
            str[i] = tolower(str[i]);
        }
        else if(islower(str[i])){
            str[i] = toupper(str[i]);
        }
    }
    puts(str);
    return 0;
}