#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i])
    }
    int count = 0;
    int rev=0,rem;
    for(int i=0;i<n;i++){
        rem = arr[i]%10;
        rev = rev*10+rem;
        arr[i] /= 10;
        if(arr[i] == rev) count++;
    }
    printf("%d",count);
}