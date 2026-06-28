class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.length(),start = 0,end = 0,maxlen = 0;
        unordered_map<char,int>mpp;
        while(end<size){
            if(mpp.find(s[end])!=mpp.end()&&mpp[s[end]]>=start){
                start = mpp[s[end]]+1;
            }
            maxlen = max(maxlen,end-start+1);
            mpp[s[end]] = end;
            end++;
        }
        return maxlen;
    }
};