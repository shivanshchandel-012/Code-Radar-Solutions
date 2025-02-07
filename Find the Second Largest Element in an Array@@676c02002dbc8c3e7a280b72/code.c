#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    if(n < 2){
        printf("-1");
        return 0;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int b = INT_MIN;
    int c = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > b){
            b = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(c < arr[i] && b != arr[i]){
            c = arr[i];
        }
    }
    if(c == INT_MIN) printf("-1");
    else printf("%d",c);
    return 0;
}