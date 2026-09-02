class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 1,right = arr.size()-2;
        int peak= 0;
        if(arr[arr.size()-1]>arr[arr.size()-2]){
            return arr.size()-1;
        }
        if(arr[0]>arr[1]){
            return 0;
        }
        while(left<=right){
            int mid = left+(right-left)/2;
            if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1]){
                peak = mid;
                return peak;
            }
            else if(arr[mid]<arr[mid+1]&&arr[mid]>arr[mid-1]){
                left  = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return peak;
    }
};