class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries,
                                     int x) {
        int s1 = nums.size();
        vector<int> indices;
        for (int i = 0; i < s1; i++) {
            if (x == nums[i]) {
                indices.push_back(i);
            }
        }
        int s2 = queries.size();
        vector<int>ans;
        for(int i = 0;i<s2;i++)
        {
            if(queries[i]<=indices.size()){
                ans.push_back(indices[queries[i]-1]);
            }
            else{
                ans.push_back(-1);
            }
        }
        return ans;
    }
};