class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int size = nums.size(),ans =0;
       unordered_map<int,int> freq;
       for(int i=0;i<size;i++){
         freq[nums[i]]++;
       } 
       for(auto p:freq){
        if(p.second==1){
            ans = p.first;
        }
       }
       return ans;
    }
};