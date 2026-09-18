class Solution {
public:
    int maxVowels(string s, int k) {
        int size = s.length();
        int left = 0,right = k-1;
        int count = 0 ,maxcount = 0;
        for(int i = 0;i<k;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                count++;
            }
        }
        maxcount = count;

        while(right<size-1){
            if(s[left]=='a'||s[left]=='e'||s[left]=='i'||s[left]=='o'||s[left]=='u'){
                count--;
            }
            if(s[right+1]=='a'||s[right+1]=='e'||s[right+1]=='i'||s[right+1]=='o'||s[right+1]=='u'){
                count++;
            }
            maxcount = max(maxcount,count);
            right++;
            left++;   
        }
        return maxcount;
        
    }
};