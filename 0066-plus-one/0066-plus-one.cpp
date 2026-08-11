class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size(), sum = 0, carry = 1;
        for (int i = size - 1; i >= 0; i--) {
            sum = carry;
            carry = (digits[i] + sum) / 10;
            digits[i] = (digits[i] + sum) % 10;
        }
        if (carry != 0) {
            digits.insert(digits.begin(), carry);
        }
        return digits;
    }
};