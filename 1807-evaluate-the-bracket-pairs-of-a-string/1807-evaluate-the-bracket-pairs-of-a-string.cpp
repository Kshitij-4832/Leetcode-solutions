class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string res;
        unordered_map<string, string> mpp;
        for (auto& it : knowledge) {
            mpp[it[0]] = it[1];
        }

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                int j = i + 1;
                while (j < s.length() && s[j] != ')') {
                    j++;
                }
                string key = s.substr(i + 1, j - i - 1);

                auto it = mpp.find(key);

                if (it != mpp.end()) {
                    res +=it->second;
                } else {
                    res += "?";
                }
                i = j;
            } else {
                res.push_back(s[i]);
            }
        }
        return res;
    }
};
/*

                while (j < s.length() && s[j] != ')') {
                    j++;
                }

                string key = s.substr(i + 1, j - i - 1);

                auto it = mpp.find(key);

                if (it != mpp.end()) {
                    res += it->second;
                } else {
                    res += '?';
                }
*/