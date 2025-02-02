#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] >= arr[j] || arr[i] <= arr[j]){
                a = 1;
            }
        }
    }
    if(a == 1) printf("YES");
    else printf("NO");
    return 0;
}