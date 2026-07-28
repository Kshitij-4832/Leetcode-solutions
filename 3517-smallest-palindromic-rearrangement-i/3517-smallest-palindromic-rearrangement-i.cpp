class Solution {
public:
    string smallestPalindrome(string s) {
        int mid = s.length()/2;
        string copy = s;
        if(s.length()==1){
            return s;
        }
        sort(s.begin(),s.begin()+mid);
        sort(s.end()-mid,s.end());
        reverse(s.end()-mid,s.end());

        /*for(int i = 0;i<s.length()/2;i++){
            if(s[i]!=s[s.length()-i-1]){
                return copy;
            }
        }*/
        return s;
    }
};