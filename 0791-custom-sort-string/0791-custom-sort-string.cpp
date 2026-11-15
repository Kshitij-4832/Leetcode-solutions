class Solution {
public:
    string customSortString(string order, string s) {
        int freq[26] = {0};
        string res;
        for(int i = 0;i<s.length();i++){
            freq[(int)(s[i]-'a')]++;
        }
        for(int i = 0;i<order.length();i++){
            for(int j = 0;j<freq[(int)(order[i]-'a')];j++){
                res.push_back(order[i]);
            }
            freq[(int)(order[i]-'a')] = -1;
        }

        for(int i = 0;i<26;i++){
            if(freq[i]>0){
                for(int j = 0;j<freq[i];j++){
                    res.push_back('a'+i);
                }
                freq[i] = -1;
            }
        }
        return res;
    }
};