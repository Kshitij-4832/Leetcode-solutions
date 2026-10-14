class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string res = "";
        string numbers = "9876543210";
        int j = 0, nsum = 0,copy = sum;
        for (int i = 1; i <= num; i++) {
            if (sum >= ((int)numbers[j] - 48)) {
                res.push_back(numbers[j]);
                nsum = nsum + ((int)numbers[j] - 48);
                sum = sum - ((int)numbers[j] - 48);
            } else {
                while (sum < ((int)numbers[j] - 48)) {
                    j++;
                }
                if (j < numbers.length()) {
                    res.push_back(numbers[j]);
                    nsum = nsum + ((int)numbers[j] - 48);
                    sum = sum - ((int)numbers[j] - 48);
                } else {
                    break;
                }
            }
        }
        if(nsum<copy){
            return "";
        }
        return res;
    }
};