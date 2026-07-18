class Solution {
public:
    int minDeletions(string s) {
        vector<int> freq(26, 0);
        int size = s.length();
        for (int i = 0; i < size; i++) {
            freq[(int)s[i] - 97]++;
        }
        int deletions = 0;
        sort(freq.begin(), freq.end());
        for (int i = 24; i >= 0; i--) {
            if (freq[i] == 0) {
                break;
            }
            if (freq[i] >= freq[i + 1]) {
                int curr = freq[i];
                freq[i] = max(0, freq[i + 1] - 1);
                deletions += curr - freq[i];
            }
        }
        return deletions;
    }
};