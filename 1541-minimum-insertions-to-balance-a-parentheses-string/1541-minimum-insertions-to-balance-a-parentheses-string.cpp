class Solution {
public:
    int minInsertions(string s) {
        int size = s.length(), ans = 0;
        int closed = 0, open = 0;
        for (int i = 0; i < size; i++) {
            if (s[i] == '(') {
                if(closed%2==1){
                    open++;
                    closed--;
                }
                closed +=2;
            }
            else{
                closed--;
                if(closed<0){
                    open++;
                    closed = 1;
                }
            }
        }
        return open+closed;
    }
};