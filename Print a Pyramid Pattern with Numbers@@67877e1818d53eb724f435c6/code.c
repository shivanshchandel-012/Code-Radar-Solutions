#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    nsp = n/2;
    ns = 1;
    ml = n/2 + 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=ns;k++){
            printf("%d ",ns);
        }
        if(i<ml){
            nsp--;
            ns++;
        }else if(i == ml){
            break;
        }
        printf("\n");
    }
    return 0;
}