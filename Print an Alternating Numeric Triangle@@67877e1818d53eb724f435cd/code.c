#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a = 1;
        for(int j=1;j<=i;j++){
            if((i+j)%2 != 0) printf("%d ",a);
            else printf("%d ",a-1);
        }
        printf("\n");
    }
    return 0;
}