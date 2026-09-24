class Solution {
public:
    string frequencySort(string s) {
        int size = s.length();
        unordered_map<char,int> mpp;
        for (int i = 0; i < size; i++) {
            mpp[s[i]]++;
        }

        string ans = "";
        while (mpp.size() != 0) {
            int Max = 0;
            char ch;
            for (auto itr : mpp) {
                if (Max < itr.second) {
                    Max = itr.second;
                    ch = itr.first;
                }
            }
            for(int i = 0;i<Max;i++){
                ans.push_back(ch);
            }
            mpp.erase(ch);
        }
        return ans;
    }
};