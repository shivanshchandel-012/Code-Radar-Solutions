#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = 0;
    for(int i=1;i<n;i++){
        if(arr[i-1] < arr[i] && arr[i] > arr[i+1]){
            arr[i] = max;
        }
        else arr[i] = -1;
    }
    printf("%d",max);
    return 0;
}