class Solution {
public:
    int uniquePaths(int m, int n) {
        int i = m + n - 2;
        int j = min(m - 1, n - 1);
        double ans = 1;
        while (i >= m && j >= 1) {
            ans = (ans * i) / j;
            i--;
            j--;
        }

        double flr = floor(ans);
        double cl = ceil(ans);
        if (ans-0.5>flr){
            long long int a = (int)cl;
            return a;
        }
        long long int b = (int)flr;
        return b;
    }
};