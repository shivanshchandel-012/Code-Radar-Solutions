#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i])
    }
    int count = 0;
    for(int i=0;i<n;i++){
        int or = arr[i];
        int rev = 0,rem;
        while(arr[i] != 0){
            rem = arr[i]%10;
            rev = rev*10 + rem;
            arr[i] /= 10;
        }
        if(rev == or) count++;
    }
    printf("%d",count);
}