#include <stdio.h>

int main() {
    int n;
    scanf("%d",n)  
    int msb = (n >> 31) & 1;  

    if (msb == 1) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}
