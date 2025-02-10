#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    n = n ^ (1 << m);
    printf("%d",n);
    return 0;
}