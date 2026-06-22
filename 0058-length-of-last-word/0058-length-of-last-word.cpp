class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.length(),count = 0;
        if(size==1)
        return size;

        bool check  = false;
        for(int i=size-1;i>=0;i--){
            if(((int)s[i]>=65&&(int)s[i]<=90)||((int)s[i]>=97&&(int)s[i]<=122)){
                count++;
                check =  true;
            }
            if(check&&s[i]==' '){
                return count;
            }
        }
        return count;
    }
};