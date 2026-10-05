class Solution {
public:
    int scoreOfParentheses(string s) {
        int size = s.length(), score = 0, depth = 0;
        for (int i = 0; i < size; i++) {
            if(s[i]=='('){
                depth++;
            }
            else{
                depth--;                
                if(s[i-1]=='('){
                    score = score+(int)pow(2,depth);
                }
            }
        }
        return score;
    }
};