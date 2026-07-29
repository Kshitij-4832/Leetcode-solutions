class Solution {
public:
    string intToRoman(int num) {
        string chars[13] = {"M",  "CM", "D",  "CD", "C",  "XC", "L",
                            "XL", "X",  "IX", "V",  "IV", "I"};
        int values[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        int itr = 0;
        string ans = "";
        while (num > 0) {
            if (num >= values[itr]) {
                ans = ans + chars[itr];
                num = num - values[itr];
            } else {
                itr++;
            }
        }
        return ans;
    }
};