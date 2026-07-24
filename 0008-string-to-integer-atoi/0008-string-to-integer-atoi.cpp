class Solution {
public:
    int myAtoi(string str) {
        int size = str.length(), k = 0, check = 0;
        bool sign = true;
        string ans = "";
        for (int i = 0; i < size; i++) {
            if (str[i] == ' ' && ans.length() > 0) {
                break;
            }
            if (str[i] == ' ') {
                continue;
            }
            if (ans.length() == 0 && str[i] == '-' && isdigit(str[i + 1])) {
                sign = false;
            }
            if (isalpha(str[i]) ||
                ((str[i] == '-' || str[i] == '+') && ans.length() > 0) ||
                str[i] == '.') {
                break;
            }
            if (str[i] == '+' && str[i + 1] == '-' ||
                str[i] == '-' && str[i + 1] == '+' ||
                str[i] == '-' && str[i + 1] == '-' ||
                str[i] == '+' && str[i + 1] == '+'||str[i] == '+' && str[i + 1] == ' '||str[i] == '-' && str[i + 1] == ' ') {
                break;
            }
            if (isdigit(str[i])) {
                ans = ans + str[i];
            }
        }
        if (ans.length() == 0) {
            ans = "0";
        }
        size = ans.length();
        long long int power = 1, result = 0;

        for (int i = 0; i < size; i++) {
            if (ans[i] == '0' && k == 0) {
                continue;
            } else {
                if(size-i-1>10){
                    if(sign==0){
                        result =INT_MIN;
                    }
                    else{
                        result = INT_MAX;
                    }
                    return result;
                }
                power = pow(10, size - i - 1);
                result = result + (power * ((int)ans[i] - 48));
                k = 1;
                if(result>INT_MAX){
                    break;
                }
            }
        }
        if (sign == 0) {
            result = result * (-1);
        }
        if (result >= INT_MAX && result > 0) {
            result = INT_MAX;
        }
        if (result <= INT_MIN && result < 0) {
            result = INT_MIN;
        }
        return result;
    }
};