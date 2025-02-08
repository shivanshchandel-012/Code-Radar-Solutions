#include <stdio.h>

typedef struct top{
    char name[50];
    int roll;
    float mark;
} top;

int main(){
    int n;
    scanf("%d",&n);
    top s[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].mark);
    }
    float high = 0.0;
    for(int i=0;i<n;i++){
        if(s[i].mark > high){
            high = s[i].mark;
        }
    }
    for(int i=0;i<n;i++){
        if(s[i].mark == high){
            printf("Top Scorer: Roll number: %d, Name: %s, Marks: %.2f",s[i].roll,s[i].name,s[i].mark);
        }
    }
    return 0;
}