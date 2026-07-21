class Solution {
public:
    int kthFactor(int n, int k) {
        int copy = k;

        for (int i = 1; i <= sqrt(n); i++) {
            if (n % i == 0) {
                k--;
            }
            if (k == 0) {
                return i;
            }
        }
        //ans = -1;
        for (int i = sqrt(n); i >= 1; i--) {
            if (i * i == n) {
                continue;
            }
            if (n % i == 0) {
                k--;
                if (k == 0) {
                    return n / i;
                }
            }
        }
        return -1;
    }
};