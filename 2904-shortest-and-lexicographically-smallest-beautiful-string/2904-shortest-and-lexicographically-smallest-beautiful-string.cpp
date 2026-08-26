class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int left = 0, right = 0, size = s.length(), Min = INT_MAX, freq = 0;
        string ans = "";
        while (right < size) {
            if (s[right] == '1') {
                freq++;
            }
            while (left <= right && freq == k) {
                int len = right - left + 1;
                if (ans.empty() || len < ans.length()) {
                    ans = s.substr(left, len);
                } else if (len == ans.length()) {
                    ans = min(ans, s.substr(left, len));
                }
                if (s[left] == '1') {
                    freq--;
                }
                left++;
            }

            right++;
        }
        return ans;
    }
};