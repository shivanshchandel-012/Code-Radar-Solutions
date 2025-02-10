#include <stdio.h>

int main(){
    int n,bit,num;
    scanf("%d",&n);
    scanf("%d",&num);
    bit = (n >> num) & 1;
    printf("%d",bit);
    return 0;
}