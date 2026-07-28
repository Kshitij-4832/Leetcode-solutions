class Solution {
public:
    string smallestPalindrome(string s) {
        int mid = s.length()/2;
        if(s.length()==1){
            return s;
        }
        sort(s.begin(),s.begin()+mid);
        sort(s.end()-mid,s.end());
        reverse(s.end()-mid,s.end());

        return s;
    }
};