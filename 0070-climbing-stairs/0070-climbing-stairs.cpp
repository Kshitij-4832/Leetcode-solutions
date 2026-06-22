class Solution {
public:
    int climbStairs(int n) {
        if(n==2)
        return 2;
        if(n==3)
        return 3;
        if(n==1)
        return 1;

        int a = 2,b=3,x = n-b,ans=2;
        for(int count =0;count<x;count++){
            ans  = a+b;
            a = b;
            b =ans;
        }
        return ans;
    }
};