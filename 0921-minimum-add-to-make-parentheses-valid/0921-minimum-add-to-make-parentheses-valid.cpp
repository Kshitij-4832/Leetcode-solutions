class Solution {
public:
    int minAddToMakeValid(string s) {
        int size =s.length(),count=0;
        stack<char>st;
        for(int i=0;i<size;i++){
            if(s[i]=='('){
                st.push('(');
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
                else{
                    count++;
                }
            }
        }
        size =0;
        while(!st.empty()){
            st.pop();
            size++;
        }
        return size+count;
    }
};