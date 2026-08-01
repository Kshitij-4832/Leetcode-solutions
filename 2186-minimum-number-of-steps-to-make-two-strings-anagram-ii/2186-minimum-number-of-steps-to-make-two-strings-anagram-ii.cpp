class Solution {
public:
    int minSteps(string s, string t) {
        int s1 = s.length(), t1 = t.length();
        vector<int>vec1(26,0);
        vector<int>vec2(26,0);
        for(int i = 0;i<s1;i++){
            vec1[(int)s[i]-97]++;
        }

        for(int i = 0;i<t1;i++){
            vec2[(int)t[i]-97]++;
        }
        int ans = 0;
        for(int i = 0;i<26;i++){
            ans += abs(vec1[i]-vec2[i]);
        }
        return ans;
    }
};