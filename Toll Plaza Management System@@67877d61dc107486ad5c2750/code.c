#include <stdio.h>
#include <string.h>

typedef struct vehicle{
    char num[50];
    char v[15];
    double n;
} vehicle;

int main(){
    int a;
    scanf("%d",&a);
    vehicle s[a];
    for(int i=0;i<a;i++){
        scanf("%s %s %lf",s[i].num,s[i].v,&s[i].n);
    }
    float toll1 = 0.0;
    float toll2 = 0.0;
    float toll3 = 0.0;
    for(int i=0;i<a;i++){
        if(strcmp(s[i].v,"Car") == 0) toll1 += s[i].n;
        else if(strcmp(s[i].v,"Truck") == 0) toll2 += s[i].n;
        else if(strcmp(s[i].v,"Bike") == 0) toll3 += s[i].n;
    }
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",toll1,toll2,toll3);
    return 0;
}