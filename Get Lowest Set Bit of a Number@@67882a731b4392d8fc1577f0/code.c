#include <stdio.h>

int main() {
    unsigned int n;
    scanf("%u", &n);
    
    unsigned int bit = n & (~(n - 1));  
    
    printf("%u", bit);
    return 0;
}
