#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a = 0;
        for(int j=1;j<=i;j++){
            if(i%2 != 0) printf("%d ",a+1);
            else printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}