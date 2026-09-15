class Solution {
public:
    int numberOfSubstrings(string s) {
        int a = -1, b = -1, c = -1;
        int size = s.length(), result = 0;
        for (int i = 0; i < size; i++) {
            if (s[i] == 'a') {
                a = i;
            }
            if (s[i] == 'b') {
                b = i;
            }
            if (s[i] == 'c') {
                c = i;
            }
            if (a != -1 && b != -1 && c != -1) {
                result = result + min({a, b, c}) + 1;
            }
        }
        return result;
    }
};