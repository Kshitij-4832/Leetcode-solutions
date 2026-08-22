class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0, pro = 1;
        int final_sum = 0;
        int copy = n;
        while (copy != 0) {
            sum = sum+(copy%10);
            pro = pro*(copy%10);
            copy = copy/10;
        }
        final_sum = sum+pro;
        if(n%final_sum==0){
            return true;
        }
        return false;
    }
};