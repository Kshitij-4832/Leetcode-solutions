class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char,int>mpp;
        int size = s.length();
        int count = 0;
        for(int i = 0;i<size;i++){
            if(mpp.find(s[i])==mpp.end()){
                count++;
            }
            mpp[s[i]]++;
        }
        return count;
    }
};