#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        int num = arr[i];
        while(num != 0){
            int digit = num%10;
            sum += digit;
            num /= 10;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",sum);
    }
    return 0;
}