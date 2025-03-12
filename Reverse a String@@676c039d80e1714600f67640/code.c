#include <stdio.h>
#include <string.h>
int main(){
    char str[40];
    puts("Enter a string:");
    scanf("%s",str);
    int size = 0;
    int i = 0;
    while(str[i] != '\0'){
        size++;
        i++;
    }
    int k = size-1;
    for(int j=0;j<=k;j++){
        char temp = str[j];
        str[j] = str[k];
        str[k] = temp;
        k--;
    }
    puts(str);
    return 0;
}