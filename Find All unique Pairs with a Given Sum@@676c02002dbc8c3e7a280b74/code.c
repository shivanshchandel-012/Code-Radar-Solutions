#include <stdio.h>

int main(){
    int n,a=0,b=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int t;
    scanf("%d",&t);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] + arr[j] == t){
                if(arr[i]==a && arr[j]==b) return 0;
                 a=arr[i];
                b=arr[j];
                printf("%d %d\n",arr[i],arr[j]);
                break;
                
            }
        }
    }
    return 0;
}