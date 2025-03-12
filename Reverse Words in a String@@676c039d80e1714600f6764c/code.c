#include <stdio.h>
#include <string.h>
void rev(char str[],int start,int end){
    while(start < end){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main(){
    char str[100];
    fgets(str,100,stdin);
    int size = strlen(str);
    int start = 0;
    for(int i=0;i<=size;i++){
        if(str[i] == ' ' || str[i] == '\0'){
            rev(str,start,i-1);
            start = i+1;
        }
    }
    puts(str);
    return 0;
}