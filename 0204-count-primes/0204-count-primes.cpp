class Solution {
public:
    int countPrimes(int n) {
        if(n==0||n==1||n==2)
        return 0;
        vector<int>primes(n,1);
        for(long long int i=2;i<n;i++){
            if(primes[i]==1){
                for(long long int j=i*i;j<n;j=j+i){
                    primes[j] = 0;
                }
            }
        }
        int count = 0;
        primes[0] = 0;
        primes[1] = 0;
        for(int ans:primes){
            if(ans==1){
                count++;
            }
        }
        return count;
    }
};