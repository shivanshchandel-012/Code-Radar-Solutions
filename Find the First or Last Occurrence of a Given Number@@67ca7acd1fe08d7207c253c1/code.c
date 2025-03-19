int findOccurrence(int arr[],int n,int target,char mode){
    int low=0;
    int high=n-1;
    while(low <= high){
        int mid = low+(high-low)/2;
        if(arr[mid] == target){
            if(mode == 'F'){
                return mid;
                break;
            }
        }
        else if(arr[mid]>target) high = mid-1;
        else low = mid+1;
    }
    return -1;
}