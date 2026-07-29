class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> mpt;
        unordered_map<char, int> mps;
        int size = s.length();
        for (int i = 0; i < size; i++) {
            mpt[t[i]]++;
        }
        for (int i = 0; i < size; i++) {
            mps[s[i]]++;
        }
        // s1 = mpt.size(), s2 = mps.size();
        int ans = 0;
        for (auto p : mps) {
            if (mpt[p.first] < p.second) {
                ans = ans + abs(mpt[p.first] - p.second);
            }
        }
        return ans;
    }
};