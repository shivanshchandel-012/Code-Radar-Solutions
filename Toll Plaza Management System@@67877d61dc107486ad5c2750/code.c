#include <stdio.h>

typedef struct vehicle{
    char num[50];
    char v[15];
    double n;
} vehicle;

int main(){
    int a;
    scanf("%d",&a);
    vehicle s[n];
    for(int i=0;i<n;i++){
        scanf("%s %s %lf",s[i].num,s[i].v,&s[i].n);
    }
    float toll1 = 0.0;
    float toll2 = 0.0;
    float toll3 = 0.0;
    for(int i=0;i<n;i++){
        if(s[i].v == "Car") toll1 += s[i].n;
        else if(s[i].v == "Truck") toll2 += s[i].n;
        else if(s[i].v == "Bike") toll3 += s[i].n;
        printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",toll1,toll2,toll3);
    }
    return 0;
}