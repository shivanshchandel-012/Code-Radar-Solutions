#include <stdio.h>

typedef struct library{
    char book[50];
    char author[50];
    double price;
} library;

int main(){
    int n;
    scanf("%d",&n);
    library s[n];
    for(int i=0;i<n;i++){
        scanf("%s %s %lf",s[i].book,s[i].author,&s[i].price);
    }
    double t;
    scanf("%lf",&t);
    printf("Books above price %.2f:\n",t);
    for(int i=0;i<n;i++){
        if(s[i].price > t){
            printf("Title: %s, Author: %s, Price: %.2f\n",s[i].book,s[i].author,s[i].price);
        }
    }
    return 0;
}