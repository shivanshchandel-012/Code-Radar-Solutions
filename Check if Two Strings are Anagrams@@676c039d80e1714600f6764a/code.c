#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    for(int i=0;str[i]<len-1;i++){
        for(int j=i+1;j<len;j++){
            if(str[i] < str[j]){
                char temp = str[j];
                str[j] = str[i];
                str[i] = temp;
            }
        }
    }
    if(strcmp(str1,str2) == 0) printf("Yes");
    else printf("No");
    return 0;
}