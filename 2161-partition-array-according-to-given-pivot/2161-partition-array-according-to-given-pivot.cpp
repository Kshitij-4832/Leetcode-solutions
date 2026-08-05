class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less_pivot;
        vector<int> more_pivot;
        vector<int> at_pivot;
        for (int i : nums) {
            if (i < pivot) {
                less_pivot.push_back(i);
            } else if (i > pivot) {
                more_pivot.push_back(i);
            } else {
                at_pivot.push_back(i);
            }
        }
        int itr = 0;
        for(int i:less_pivot){
            nums[itr] = i;
            itr++;
        }
        for(int i:at_pivot){
            nums[itr] = i;
            itr++;
        }
        for(int i:more_pivot){
            nums[itr] = i;
            itr++;
        }
        return nums;
        
    }
};