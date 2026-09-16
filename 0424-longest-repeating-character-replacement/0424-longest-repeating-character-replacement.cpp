class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0,right = 0,size = s.length();
        int maxfreq = 0,maxlen = 0;
        int alphabets[26]={0};
        while(right<size){
            alphabets[s[right]-'A']++;
            maxfreq = max(maxfreq,alphabets[s[right]-'A']);
            if((right-left+1)-(maxfreq)>k){
                alphabets[s[left]-'A']--;
                maxfreq = 0;
                left++;
            }
            if((right-left+1)-(maxfreq)<=k){
                maxlen = max(maxlen,right-left+1);
            }
            right++;
        }
        return maxlen;
    }
};