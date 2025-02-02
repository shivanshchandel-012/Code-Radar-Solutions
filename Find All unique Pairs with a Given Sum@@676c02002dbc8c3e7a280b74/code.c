#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int t;
    scanf("%d",&t);
    int i = 0;
    int j = n-1;
    while(i<j){
        if(arr[i] + arr[j] == t){
            printf("%d %d\n",arr[i],arr[j]);
        }
        else if(arr[i] + arr[j] > t) j--;
        else i++;
    }
    return 0;
}