#include <stdio.h>
#include <limit.h>

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
    float min = INT_MAX;
    for(int i=0;i<n;i++){
        if(s[i].m < min){
            min = s[i].min;
        }
    }
    for(int i=0;i<n;i++){
        if(s[i].m == min){
            printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f",s[i].n,s[i].name,s[i].m);
        }
    }
    return 0;
}