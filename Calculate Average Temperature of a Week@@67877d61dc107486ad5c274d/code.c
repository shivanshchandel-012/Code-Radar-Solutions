#include <stdio.h>

typedef struct temperature{
    char day[50];
    int temp;
} temperature;

int main(){
    temperature t[7];
    for(int i=0;i<=7;i++){
        scanf("%s %d",t[i].day,&t[i].temp);
    }
    float sum = 0;
    for(int i=0;i<=7;i++){
        sum += t[i].temp;
    }
    float avg = sum/7.0;
    printf("Average Temperature: %.2f",avg);
    return 0;
}