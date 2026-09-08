class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int left = 0, right = arr.size() - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            int missing = arr[mid] - (mid + 1);
            if(missing<k){
                left = mid+1;
            }
            else{
                right  = mid-1;
            }
        }
        //   ans = arr[right]-more
        //more = k-missing
        //missing = arr[right] - right -1;
        //therefore  ans = right + 1 +k or ans = left+k
        return left+k;
    }
};