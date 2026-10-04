class Solution {
public:
    int minRotations(string s) {
        int initial = 0, sum = 0;
        for (int i = 0; i < 10; i++) {
            int temp = (int)s[i] - 48;
            sum += min({abs(temp - initial), abs(temp - 10 - initial),
                        abs(initial - 10 - temp)});
            initial =  temp;
        }
        return sum;
    }
    
};