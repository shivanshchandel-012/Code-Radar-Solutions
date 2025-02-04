#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    int smin = INT_MAX;
    int found = -1;
    for(int i=0;i<n;i++){
        if(arr[i] < smin && min != arr[i]){
            smin = arr[i];
            found = smin;
        }
    }
    printf("%d",found);
}