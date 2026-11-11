class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1,
                          int need2) {
        long long int c1 = cost1, c2 = cost2, cb = costBoth;
        long long int n1 = need1, n2 = need2;
        long long int r1 = n1*c1+n2*c2;
        long long int r2 = max(n1,n2)*cb;

        long long int z = 0;
        if(n1>=n2){
            z = c1; 
        }
        else{
            z = c2;
        }
        long long int r3 = min(n1,n2)*cb+abs(n1-n2)*z;
        return min({r1,r2,r3});
    }
};