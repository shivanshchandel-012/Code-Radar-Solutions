#include <stdio.h>

typedef struct student{
    char name[50];
    int roll;
    float mark;
} student;
int main(){
    int n;
    scanf("%d",&n);
    student s[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].mark);
    }
    for(int i=0;i<n;i++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",s[i].roll,s[i].name,s[i].mark);
    }
    return 0;
}