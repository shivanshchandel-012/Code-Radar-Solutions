#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    n = n ^ (1 << m);
    for(int i=31;i>0;i--){
        printf("%d",(n >> i)&1);
    }
    return 0;
}