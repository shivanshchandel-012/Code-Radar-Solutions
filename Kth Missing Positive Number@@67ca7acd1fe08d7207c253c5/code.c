int findKthMissing(int arr[],int n,int k){
    int count = 0;
    int exp = 1;
    int i;
    while(count < k){
        if(i<n && arr[i]==exp){
            i++;
        }else{
            count++;
            if(count == k){
                return exp;
            }
        }
        exp++;
    }
}