class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int size = arr.size();
        int start = 1, end = size - 2;
        while (start <= end) {
            int mid = (start + end) / 2;

            if ((arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]) &&
                (mid > 0 && mid < size - 1)) {
                return mid;
            }
            else if(arr[mid]>arr[mid+1]&&arr[mid]<arr[mid-1]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return -1;
    }
};