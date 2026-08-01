class Solution {
public:
    int minSteps(string s, string t) {
        int s1 = s.length(), t1 = t.length();
        unordered_map<char, int> mps;
        unordered_map<char, int> mpt;
        for (int i = 0; i < s1; i++) {
            mps[s[i]]++;
        }
        for (int i = 0; i < t1; i++) {
            mpt[t[i]]++;
        }

        int ans1 = 0,ans2=0;
        for(auto p:mps){
            if(mps.find(p.first)!=mpt.end()){
                ans1 = ans1+abs(p.second-mpt[p.first]);
            }
            else{
                ans1 = ans1+p.second;
            }
        }
        for(auto p:mpt){
            if(mpt.find(p.first)!=mps.end()){
                ans2 = ans2+abs(p.second-mps[p.first]);
            }
            else{
                ans2 = ans2+p.second;
            }
        }
        return ans2;
    }
};