class Solution {
public:
    int countRotations(string s, int k) {
        vector<int> scores;
        int size = s.length();
        for(int i = 0 ;i<size;i++){
            int count = 0;
            for(int j = 1;j<size;j++){
                if(s[j]==s[j-1]){
                    count++;
                }
            }
            scores.push_back(count);
            for(int j = 1;j<size;j++){
                swap(s[j-1],s[j]);
            }
        }
        int ans = 0;
        for(int itr:scores){
            if(itr==k){
                ans++;
            }
        }
        return ans;
    }
};