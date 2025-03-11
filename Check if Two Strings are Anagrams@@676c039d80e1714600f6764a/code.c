#include<stdio.h>
#include<strings.h>
int main(){
    char str1[100],str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    int a = 0;
    for(int i=0;str1[i]!='\0';i++){
        if(str1[i] == str2[i]) a = 1;
    }
    if(a == 1) printf("Yes");
    else printf("No");
    return 0;
}