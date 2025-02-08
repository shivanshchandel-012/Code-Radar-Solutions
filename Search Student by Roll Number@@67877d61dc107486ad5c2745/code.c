#include <stdio.h>

typedef struct stu{
    char n[50];
    int r;
    float m;
} stu;

int main(){
    int n;
    scanf("%d",&n);
    stu s[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&s[i].r,s[i].n,&s[i].m);
    }
    int r;
    scanf("%d",&r);
    for(int i=0;i<n;i++){
        if(r != s[i].r){
            printf("Roll Number: %d, Name: %s, Marks: %.2f",s[i].r,s[i].n,s[i].m);
            break;
        }
        else{
            printf("Student not found");
            break;
        }
    }
    return 0;
}