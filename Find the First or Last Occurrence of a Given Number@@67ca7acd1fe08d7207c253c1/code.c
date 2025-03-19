int findOccurrence(int arr[],int n,int target,char mode){
    int low=0;
    int high=n-1;
    int result = -1;
    while(low <= high){
        int mid = low+(high-low)/2;
        if(arr[mid] == target){
            result = mid;
            if(mode == 'F'){
                high = mid-1;
            }
            else if(mode == 'L') low = mid+1;
        }
        else if(arr[mid]>target) high = mid-1;
        else low = mid+1;
    }
    return result;
}