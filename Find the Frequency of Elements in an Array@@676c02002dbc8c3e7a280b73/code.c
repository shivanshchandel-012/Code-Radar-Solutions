#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int f = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                f++;
                printf("%d %d\n",arr[i],f);
            }else{
                f = 1;
                printf("%d %d\n",arr[i],f);
            }
        }
    }
    return 0;
}