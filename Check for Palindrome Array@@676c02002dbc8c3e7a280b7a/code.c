#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    if(n<2){
        printf("YES");
        return 0;
    }
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int arr2[n];
    for(int i=0;i<n;i++){
        arr2[i] = arr[n-i-1];
    }
    int pal = 0;
    for(int i=0;i<n/2;i++){
        if(arr[i] == arr2[i]){
            pal = 1;
            break;
        }
    }
    if(pal == 1) printf("YES");
    else printf("NO");
    return 0;
}