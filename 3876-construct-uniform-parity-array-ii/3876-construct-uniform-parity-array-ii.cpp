class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int Min =INT_MAX;
        for(int i:nums1){
            Min =min(Min,i);
        }
        if(Min%2!=0){
            return true;
        }
        else{
            for(int i:nums1){
                if(i%2!=0){
                    return false;
                }
            }
        }
        return true;
    }
};