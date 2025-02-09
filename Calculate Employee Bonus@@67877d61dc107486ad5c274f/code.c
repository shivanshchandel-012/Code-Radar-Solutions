#include <stdio.h>

typedef struct emp{
    int id;
    char name[50];
    double salary;
} emp;

int main(){
    int n;
    scanf("%d",&n);
    emp s[n];
    for(int i=0;i<n;i++){
        scanf("%d %s &lf",&s[i].id,s[i].name,&s[i].salary);
    }
    float bonus;
    for(int i=0;i<n;i++){
        if(s[i].salary < 50000) bonus = 0.10*s[i].salary;
        else bonus = 0.05*s[i].salary;
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n",s[i].id,s[i].name,bonus);
    }
    return 0;
}