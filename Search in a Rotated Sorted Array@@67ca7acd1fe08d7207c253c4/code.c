int searchInRotatedArray(int arr[],int n,int target){
    int low=0;
    int high=n-1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid]==target) return mid;
        else if(arr[low] <= arr[mid]){
            if(arr[low] <= target && target < arr[mid]){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        else{
            if(arr[mid] < taregt && target <= arr[high]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
    return -1;
}