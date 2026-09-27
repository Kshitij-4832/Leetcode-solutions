class Solution {
public:
    string reverseParentheses(string s) {
        int size = s.length();
        stack<int> st;
        vector<int> portal_index(size, 0);
        for (int i = 0; i < size; i++) {
            if (s[i] == '(') {
                st.push(i);

            } else if (s[i] == ')') {
                portal_index[i] = st.top();
                portal_index[st.top()] = i;
                st.pop();
            }
        }
        int direction = 1;
        string result;
        for (int i = 0; i < size; i += direction){
            if(s[i]>='a'){
                result.push_back(s[i]);
            }
            else{
                i = portal_index[i];
                direction = -direction;
            }
        }
        return result;
    }
};