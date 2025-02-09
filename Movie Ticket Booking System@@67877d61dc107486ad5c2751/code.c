#include <stdio.h>

typedef struct ticket{
    char movie[50];
    char seat[50];
    double price;
} ticket;

int main(){
    int n;
    scanf("%d",&n);
    ticket s[n];
    for(int i=0;i<n;i++){
        scanf("%s %s %lf",s[i].movie,s[i].seat,&s[i].price);
    }
    float total1 = 0.0;
    float total2 = 0.0;
    float total3 = 0.0;
    for(int i=0;i<n;i++){
        if(strcmp(s[i].seat,"Standard") == 0) total1 += s[i].price;
        else if(strcmp(s[i].seat,"Premium") == 0) total2 += s[i].price;
        else if(strcmp(s[i].seat,"VIP") == 0) total3 += s[i].price;
    }
    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f",total1,total2,total3);
    return 0;
}