class Solution {
public:
    int tribonacci(int n) {
        int x = 0,y=1,z=1;
        if(n==0)
        return x;
        if(n==1)
        return y;
        if(n==2)
        return z;

        int ans = 0;
        for(int i=3;i<=n;i++){
            ans = x+y+z;
            x = y;
            y = z;
            z = ans;
        }
        return ans;
    }
};