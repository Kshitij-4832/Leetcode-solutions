class Solution {
public:
    int maxDistinct(string s) {
        set<char>mpp;
        int size = s.length();
        for(int i = 0;i<size;i++){
            mpp.insert(s[i]);
        }
        return mpp.size();
    }
};