class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int size = nums.size();
        vector<int>arr1;
        vector<int>arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int l1 = 0,l2 = 0;
        for(int i = 2;i<size;i++){
            if(arr1[l1]>arr2[l2]){
                arr1.push_back(nums[i]);
                l1++;
            }
            else{
                arr2.push_back(nums[i]);
                l2++;
            }
        }
        vector<int> result;
        for(int i:arr1){
            result.push_back(i);
        }
        for(int i:arr2){
            result.push_back(i);
        }
        return result;
        
    }
};