int findKthMissing(int arr[],int n,int k){
    int s1 = 0;
    for(int i=0;i<=n-2;i++){
        s1 += arr[i];
    }
    int s2 = 0;
    for(int i=0;i<=n-1;i++){
        s2 += arr[i];
    }
    return s2-s1;
}