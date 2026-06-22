class Solution {
public:
    int reverse(int x) {
        int count = 0,copy = x;
        long double ans = 0;
        while(copy!=0){
            copy = copy/10;
            count++;
        }
        count--;
        while(x!=0){
            int b = x%10;
            ans  =ans+b*(pow(10,count--));
            x  = x/10;
        }
        if(ans>INT_MAX||ans<INT_MIN){
            return 0;
        }
        else {
            return (int)ans;
        }
    }
};