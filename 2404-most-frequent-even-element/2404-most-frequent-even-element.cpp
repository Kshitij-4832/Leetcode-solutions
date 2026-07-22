class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int size = nums.size();
        unordered_map<int, int> mpp;
        for (int i = 0; i < size; i++) {
            if (nums[i] % 2 == 0) {
                mpp[nums[i]]++;
            }
        }
        int value = -1;
        int key  =  -1;
        int prevfreq = 0;
        for(auto p:mpp){
            if(p.second>value){
                value = p.second;
                key = p.first;
                prevfreq = value;
            }
            else if(p.second==prevfreq){
                key = min(p.first,key);
            }
        }
        return key;
    }
};