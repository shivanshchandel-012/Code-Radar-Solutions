#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    if(n<2){
        printf("-1");
        return 0;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min_diff = INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int diff = arr[i] - arr[j];
            if(diff < 0) diff = -diff;
            if(diff < min_diff){
                min_diff = diff;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int diff = arr[i] - arr[j];
            if(diff < 0) diff = -diff;
            if(diff == min_diff){
                printf("%d %d",arr[i],arr[j]);
                return 0;
            }
        }
    }
    return 0;
}