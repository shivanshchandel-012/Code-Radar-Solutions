#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int count = 0;
    for(int i=0;i<n;i++){
        int num = arr[i];
        if(num < 2) continue;
        int isprime = 1;
        for(int j=2;j*j<=num;j++){
            if(num%j == 0){
                isprime = 0;
                break;
            }
        }
        if(isprime){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}