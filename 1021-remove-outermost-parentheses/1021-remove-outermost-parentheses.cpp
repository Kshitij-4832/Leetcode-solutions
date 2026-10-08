class Solution {
public:
    string removeOuterParentheses(string s) {
        int size = s.length();
        string temp;
        string res="";
        vector<string>primitives;
        stack<char>st;
        for(int i = 0;i<size;i++){
            if(s[i]=='('){
                st.push('(');
                temp.push_back('(');
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
                temp.push_back(')');
            }

            if(st.empty()){
                res+=temp.substr(1,temp.length()-2);
                temp="";
            }
        }
        return res;
    }
};