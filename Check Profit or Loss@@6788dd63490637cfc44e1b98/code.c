#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a-b > 0){
        printf("Profit");
    }
    else if(a-b < 0){
        printf("Loss");
    }
    else if(a-b == 0){
        printf("No Profit No Loss")
    }
    return 0;
}