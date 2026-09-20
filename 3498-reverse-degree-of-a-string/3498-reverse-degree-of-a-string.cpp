class Solution {
public:
    int reverseDegree(string s) {
        int ans  = 0,size = s.length();
        for(int i = 0;i<size;i++){
            ans  = ans+((26-(s[i]-'a'))*(i+1));
        }
        return ans;
    }
};