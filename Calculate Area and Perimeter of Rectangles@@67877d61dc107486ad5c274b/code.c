#include <stdio.h>

typedef struct area{
    double l;
    double b;
} area;

int main(){
    int n;
    scanf("%d",&n);
    area s[n];
    for(int i=0;i<n;i++){
        scanf("%lf %lf",&s[i].l,&s[i].b);
    }
    for(int i=0;i<n;i++){
        printf("Rectancle %d: Area = %.2f, Perimeter = %.2f\n",i+1,s[i].l*s[i].b,2*(s[i].l+s[i].b));
    }
    return 0;
}