class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int new_size = nums1.size() + nums2.size();
        vector<int> arr(new_size,0);
        int k = 0;
        for(int i = 0;i<nums1.size();i++){
            arr[k] = nums1[i];
            k++;
        }
        for(int i = 0;i<nums2.size();i++){
            arr[k] = nums2[i];
            k++;
        }
        sort(arr.begin(),arr.end());
        if(new_size%2==0){
            double a = (arr[(new_size-1)/2]+arr[((new_size-1)/2)+1]);
            return a/2;
        }
        return arr[new_size/2];
    }
};