class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char, int> mpp;
        int left = 0, right = 0, size = s.length();
        int Max=0;
        while(right<size){
            mpp[s[right]]++;
            while(mpp[s[right]]>2){
                mpp[s[left]]--;
                left++;
            }
            Max = max(Max,right-left+1);
            right++;
        }
        return Max;
    }
};