class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, right = 0;
        int n = s.length(), Max = 0;
        unordered_map<char, int> mpp;
        while (right < n) {
            if (mpp.find(s[right]) != mpp.end() && left <= mpp[s[right]]) {
                left = mpp[s[right]]+1;
            }
            Max = max(Max,right-left+1);
            mpp[s[right]] = right;
            right++;
        }
        return Max;
    }
};