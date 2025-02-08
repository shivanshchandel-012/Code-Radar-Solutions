#include <stdio.h>

#include <stdio.h>
#include <limits.h>

typedef struct student{
    char name[50];
    int r;
    float m;
} student;

int main(){
    int n;
    scanf("%d",&n);
    student s[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&s[i].r,s[i].name,&s[i].m);
    }
    float t = 50.00;
    int a = 0;
    for(int i=0;i<n;i++){
        if(s[i].m > t){
            printf("All Passed");
            a = 1;
            break;
        }
        else printf("Not All Passed");
    }
    return 0;
}