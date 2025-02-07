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
            if(arr[i] - arr[j] == min_diff || arr[j] - arr[i] == min_diff){
                printf("%d %d",arr[i],arr[j]);
            }
        }
    }
    return 0;
}