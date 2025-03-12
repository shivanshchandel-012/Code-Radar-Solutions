#include<stdio.h>
#include<ctype.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    for(int i=0;s[i]!='\0';i++){
        if(isupper(str[i])){
            str[i] = tolower();
        }
        else if(islower(str[i])){
            str[i] = toupper;
        }
    }
    puts(str);
    return 0;
}