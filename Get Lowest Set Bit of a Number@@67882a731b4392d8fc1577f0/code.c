#include <stdio.h>

int main(){
    unsigned int n;
    scanf("%d",&n);
    unsigned int bit = n & -n;
    printf("%d",bit);
    return 0;
}