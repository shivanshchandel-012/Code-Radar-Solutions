#include <stdio.h>

int main(){
    int n,a,b;
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
                if(arr[i]=a && arr[j]=b)
                    return 0;
                else{ 
                arr[i]=a;
                arr[j]=b;
                printf("%d %d\n",arr[i],arr[j]);
                break;}
            }
        }
    }
    return 0;
}