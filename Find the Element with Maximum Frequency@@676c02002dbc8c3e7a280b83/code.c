#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int found = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                found = arr[i];
            }
        }
    }
    int smallest = INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(found < smallest){
                smallest = found;
            }
        }
    }
    printf("%d",found);
    return 0;
}