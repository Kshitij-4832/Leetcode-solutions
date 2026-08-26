class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int size = s.length(), left = 0, right = 0, ones = 0;
        string ans = "";
        while (right < size) {
            if (s[right] == '1') {
                ones++;
            }
            while (left <= right && ones == k) {
                int len = right - left + 1;
                if (ans.empty() || len < ans.length()) {
                    ans = s.substr(left, len);
                } else if (len == ans.length()) {
                    ans = min(ans, s.substr(left, len));
                }
                if (s[left] == '1') {
                    ones--;
                }
                left++;
            }
            right++;
        }
        return ans;
    }
};