#include <stdio.h>

int main(){
    int q,w;
    scanf("%d %d",&q,&w);
    if(q > 0 && w > 0){
        printf("Same Sign")
    }if(q < 0 && w < 0){
        printf("Same Sign");
    }else{
        printf("Different Sign");
    }
    return 0;
}