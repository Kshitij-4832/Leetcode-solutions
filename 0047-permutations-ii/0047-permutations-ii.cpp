class Solution {
public:
    void Generating_Permutations(vector<int>&nums,vector<vector<int>>& result,vector<int>&arr,vector<bool>&visited){
        if(arr.size()==nums.size()){
            result.push_back(arr);
            return ;
        }
        for(int i = 0;i<nums.size();i++){
            if(i>0&&nums[i]==nums[i-1]&&visited[i-1]==false){
                continue;
            }
            if(visited[i]==false){
                visited[i] = true;
                arr.push_back(nums[i]);
                Generating_Permutations(nums,result,arr,visited);
                arr.pop_back();
                visited[i] = false;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int>arr;
        vector<bool>visited(nums.size(),false);
        sort(nums.begin(),nums.end());
        Generating_Permutations(nums,result,arr,visited);
        return result;
    }
};