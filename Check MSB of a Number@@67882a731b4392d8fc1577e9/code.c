#include <stdio.h>

int main() {
    long long int n;
    scanf("%lld",n)  
    long long int msb = (n >> 31) & 1;  
    if (msb == 1) {
        printf("Set");
    } else {
        printf("Not Set");
    }
    return 0;
}
