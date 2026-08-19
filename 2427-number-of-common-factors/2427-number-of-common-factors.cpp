class Solution {
public:
    int commonFactors(int a, int b) {
        int itr = 1, count = 0;
        while (min(a, b) >= itr) {
            if ((a % itr == 0) && (b%itr == 0)) {
                count++;
            }
            itr++;
        }
        return count;
    }
};