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
    printf("Average Temperature: %.2f",s[3].temp);
    return 0;
}