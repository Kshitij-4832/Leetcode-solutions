class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mps;
        unordered_map<char,int>mpt;
        if(s.length()!=t.length()){
            return false;
        }
        for(int i = 0;i<s.length();i++){
            mps[s[i]]++;
        }
        for(int i = 0;i<t.length();i++){
           mpt[t[i]]++;
        }
        for(auto p:mps){
            if(mpt.find(p.first)!=mpt.end()){
                if(p.second!=mpt[p.first]){
                    return false;
                }
            }
            else{
                return false;
            }
        }
        return true;
    }
};