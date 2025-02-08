#include <stdio.h>

typedef struct student{
    char name[50];
    int n;
    float m;
} student;

int main(){
    int n;
    scanf("%d",&n);
    student s[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&s[i].n,s[i].n,&s[i].m);
    }
    float t;
    scanf("%f",&t);
    int count = 0;
    for(int i=0;i<n;i++){
        if(s[i].m > t){
            count++;
        }
    }
    printf("Count of students scoring above %.2f: %d",count);
    return 0;
}