// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int m = arr[n-1];
    for(int i=0;i<n;i++){
        if(arr[i] > m){
            m = arr[i];
            printf("%d %d",m,arr[i]);
        }
    }
    return 0;
}