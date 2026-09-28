class Solution {
public:
    int maxDepth(string s) {
        int size = s.length();
        int maxdepth = 0, temp = 0;
        stack<char> st;
        for (int i = 0; i < size; i++) {
            if (s[i] == '(') {
                st.push(s[i]);
                temp++;
            }
            if (s[i] == ')') {
                temp--;
                st.pop();
            }
            maxdepth = max(maxdepth, temp);
        }
        return maxdepth;
    }
};