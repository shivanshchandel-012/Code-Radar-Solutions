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
    float sum = 0.0;
    for(int i=0;i<n;i++){
        sum += s[i].mark;
    }
    float avg = sum/n;
    printf("Total Marks: %.2f",sum);
    printf("Average Marks: %.2f",avg);
    return 0;
}