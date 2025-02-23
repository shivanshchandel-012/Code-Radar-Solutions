#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int r = arr[n-1];
    arr[n-1] = -1;
    for(int i=n-2;i>=0;i--){
        int current = arr[i];
        arr[i] = r;
        if(current > r){
            r = current;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}