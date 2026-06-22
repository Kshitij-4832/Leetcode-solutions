class Solution {
public:
    int maxPower(string s) {
        int size =  s.length(),power = 0,curr_freq=1;
        if(size==1)
        return 1;
        for(int i=0;i<size-1;i++){
            if(s[i]!=s[i+1]){
                curr_freq = 1;
            }
            else{
                curr_freq++;
            }
            if(curr_freq>power){
                    power = curr_freq;
            }
        }
        return power;
    }
};