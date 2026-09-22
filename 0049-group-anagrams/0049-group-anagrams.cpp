class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int size = strs.size();
        unordered_map<string,vector<string>>mpp;
        for(int i = 0;i<size;i++){
            string key = strs[i];
            sort(key.begin(),key.end());
            mpp[key].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto itr:mpp){
            ans.push_back(itr.second);
        }
        return ans;
    }
};