class Solution {
public:
    int romanToInt(string s) {
        int size = s.length();
        unordered_map<char, int> mpp;
        mpp.insert({'I', 1});
        mpp.insert({'V', 5});
        mpp.insert({'X', 10});
        mpp.insert({'L', 50});
        mpp.insert({'C', 100});
        mpp.insert({'D', 500});
        mpp.insert({'M', 1000});
        if(size==1){
            return mpp[s[0]];
        }
        int sum = 0;
        for (int i = size - 1; i >= 0; i--) {
            if (i <= size - 2 && mpp[s[i]] < mpp[s[i + 1]]) {
                sum = sum - mpp[s[i]];
            } else {
                sum = sum + mpp[s[i]];
            }
        }
        return sum;
    }
};