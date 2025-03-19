int kthSmallest(int arr[],int n,int k){
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-2;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    if(k>0 && k<=n) return arr[k-1];
    else return -1;
}