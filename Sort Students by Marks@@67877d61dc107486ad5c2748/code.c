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
        scanf("%d %s %f",&s[i].n,s[i].name,&s[i].m);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(s[j].m < s[j+1].m){
                int temp = s[j+1].m;
                s[j+1].m = s[j].m;
                s[j].m = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",s[i].n,s[i].name,s[i].m);
    }
    return 0;
}