#include <stdio.h>
#include <string.h>

typedef struct sub{
    char name[50];
    char subs[50];
    float price;
} sub;

int main(){
    int n;
    scanf("%d",&n);
    sub s[n];
    for(int i=0;i<n;i++){
        scanf("%s %s %f",s[i].name,s[i].subs,&s[i].price);
    }
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    float rev1 = 0.0;
    float rev2 = 0.0;
    float rev3 = 0.0;
    for(int i=0;i<n;i++){
        if(strcmp(s[i].subs,"Basic") == 0){
            count1++;
            rev1 += s[i].price;
        }
        else if(strcmp(s[i].subs,"Premium") == 0){
            count2++;
            rev2 += s[i].price;
        }
        else if(strcmp(s[i].subs,"Standard") == 0){
            count3++;
            rev3 += s[i].price;
        }
    }
    printf("Basic: %d Users, Revenue: %.2f; Standard: %d Users, Revenue: %.2f; Premium: %d Users, Revenue: %.2f",count1,rev1,count2,rev2,count3,rev3);
    return 0;
}