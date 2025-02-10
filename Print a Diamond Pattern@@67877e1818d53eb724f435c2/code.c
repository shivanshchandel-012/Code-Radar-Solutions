#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int nsp = a/2;
    int ns = 1;
    int ml = a/2 + 1;
    for(int i=0;i<=a;i++){
        for(int j=0;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=ns;k++){
            printf("*");
        }
        if(i<ml){
            nsp--;
            ns += 2;
        }
        else{
            nsp++;
            ns -= 2;
        }
        printf("\n");
    }
    return 0;
}