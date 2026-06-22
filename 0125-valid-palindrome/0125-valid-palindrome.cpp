class Solution {
public:
    bool isPalindrome(string s) {
        string copy =  s;
        int size = s.length(),start=0,end=size-1;
        while(start<=end){
            if(!iswalnum(s[start])){
                start++;
            }
            else if(!iswalnum(s[end])){
                end--;
            }
            else{
                if(tolower(s[start])!=tolower(s[end])){
                    return false;
                }
                start++;
                end--;
            }

        }
        return true;
    }
};