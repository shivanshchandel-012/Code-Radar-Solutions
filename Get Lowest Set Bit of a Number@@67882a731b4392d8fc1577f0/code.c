#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int bit = n & -n;
    printf("%d",bit);
    return 0;
}