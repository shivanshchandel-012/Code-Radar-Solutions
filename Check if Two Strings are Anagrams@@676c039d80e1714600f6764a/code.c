#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    if(strcmp(str1,str2) == 0) printf("Yes");
    else printf("No");
    return 0;
}