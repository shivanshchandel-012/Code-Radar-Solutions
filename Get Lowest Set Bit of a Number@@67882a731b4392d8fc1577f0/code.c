#include <stdio.h>

int main(){
    unsigned int n;
    scanf("%u",&n);
    unsigned int bit = n & (-n);
    printf("%u",bit);
    return 0;
}