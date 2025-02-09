#include <stdio.h>

typedef struct temperature{
    char day[50];
    double temp;
} temperature;

int main(){
    temperature t[7];
    for(int i=0;i<=7;i++){
        scanf("%s %lf",t[i].day,&t[i].temp);
    }
    printf("Average Temperature: %.2f",t[3].temp);
    return 0;
}