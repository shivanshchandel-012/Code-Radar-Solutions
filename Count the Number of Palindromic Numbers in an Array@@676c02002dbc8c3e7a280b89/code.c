#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i=0;i<n;i++){
        int or = arr[i];
        if(arr[i] < 0) arr[i] = -arr[i];
        int rev = 0;
        while(arr[i] != 0){
            rev = rev*10;
            rev += arr[i]%10;
            arr[i] /= 10;
        }
        if(rev == or) count++;
    }
    printf("%d",count);
}