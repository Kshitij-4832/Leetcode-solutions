class Solution {
public:
    double myPow(double x, int n) {
        if(n<0){
            x = 1/x;
            if(n==INT_MIN){
                if(x==-1){
                    return 1;
                }
                ++n;
            }
            n = n*(-1);
        }
        if(n==0){
            return 1;
        }
        double ans =1,power = x;
        int copy  =n;
        while(copy!=0){
            int b = copy%2;
            if(b==1){
                ans  =  ans*power;
            }
            power = power*power;
            copy = copy/2;
        }
        return ans;
    }
};