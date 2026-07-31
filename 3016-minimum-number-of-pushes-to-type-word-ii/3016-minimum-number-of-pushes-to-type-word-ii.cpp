class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char, int> mpp;
        for (int i = 0; i < word.length(); i++) {
            mpp[word[i]]++;
        }
        vector<int> freqs;
        for (auto p : mpp) {
            freqs.push_back(p.second);
        }
        sort(freqs.rbegin(), freqs.rend());
        int count = 0,ans = 0,k=1;
        for (int i = 0; i < freqs.size(); i++) {
            if(count<8){
                ans +=freqs[i]*k;
            }
            count++;
            if(count==8){
                count = 0;
                k++;
            }
        }
        return ans;
    }
};