class Solution {
public:
    string removeOuterParentheses(string s) {
        int size = s.length(), balance = 0;
        string res = "";
        for (int i = 0; i < size; i++) {
            if (s[i] == '(') {
                if (balance > 0) {
                    res.push_back('(');
                }
                balance++;
            }
            else{
                balance--;
                if(balance>0){
                    res.push_back(')');
                }
            }
        }
        return res;
    }
};