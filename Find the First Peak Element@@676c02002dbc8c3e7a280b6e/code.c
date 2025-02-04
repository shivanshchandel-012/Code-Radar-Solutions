#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if (n == 1 || arr[0] > arr[1]) {
        printf("%d", arr[0]);
        return 0;
    }
    int found = -1;
    for(int i=1;i<n-1;i++){
        if(arr[i] > arr[i-1] && arr[i]>arr[i+1]){
            found = arr[i];
            break;
        }
    }
    printf("%d",found);
    if (arr[n - 1] > arr[n - 2]) {
        printf("%d", arr[n - 1]);
        return 0;
    }
    return 0;
}