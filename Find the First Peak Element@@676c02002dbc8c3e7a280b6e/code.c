#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = -1;
    for(int i=1;i<n;i++){
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
            if(arr[i] > max) arr[i] = max;
        }
    }
    if(max != -1) printf("%d",max);
    return 0;
}