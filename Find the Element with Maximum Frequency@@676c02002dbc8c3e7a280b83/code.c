#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = 0;
    int small = INT_MAX;
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > max){
            max = count;
            small = arr[i];
        }
        else if(count == max && arr[i]<small){
            small = arr[i];
        }
    }
    printf("%d",small);
    return 0;
}