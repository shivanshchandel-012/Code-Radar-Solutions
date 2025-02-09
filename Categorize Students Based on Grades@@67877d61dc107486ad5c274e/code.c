#include <stdio.h>

typedef struct student{
    int roll;
    char name[50];
    float mark;
} student;

int main(){
    int n;
    scanf("%d",&n);
    student s[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].mark);
    }
    char grade;
    for(int i=0;i<n;i++){
        if(s[i].mark >= 85) grade = 'A';
        else if(70<=s[i].mark<=84) grade = 'B';
        else if(s[i].mark < 70) grade = 'C';
    }
    for(int i=0;i<n;i++){
        if(s[i].mark == grade){
            printf("Roll number: %d, Name: %s, Grade: %c\n",s[i].roll,s[i].name,grade);
        }
    }
    return 0;
}