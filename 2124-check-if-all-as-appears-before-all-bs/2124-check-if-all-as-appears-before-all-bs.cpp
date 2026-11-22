class Solution {
public:
    bool checkString(string s) {
        int n = s.length();
        for(int i = 0;i<n;i++){
            if(i>0&&s[i]=='a'){
                if(s[i-1]=='b'){
                    return false;
                }
            }
        }
        return true;
    }
};