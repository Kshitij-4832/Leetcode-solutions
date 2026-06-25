class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Moore's volting algo
        /*int size =  nums.size(),freq=0,ans=0;
        for(int i=0;i<size;i++){
            if(freq==0){
                ans = nums[i];
            }
            if(nums[i]!=ans){
                freq--;
            }
            if(nums[i]==ans){
                freq++;
            }
        }
        freq = 0;
        for(int i=0;i<size;i++){
            if(nums[i]==ans){
                freq++;
            }
        }
        if(freq>size/2){
            return ans;
        }*/

        //
        int size =  nums.size();
        unordered_map<int,int> freq;
        for(int i=0;i<size;i++){
            freq[nums[i]]++;
            if(freq[nums[i]]>(size/2)){
                return nums[i];
            }
        }
        return -1;
    }
};