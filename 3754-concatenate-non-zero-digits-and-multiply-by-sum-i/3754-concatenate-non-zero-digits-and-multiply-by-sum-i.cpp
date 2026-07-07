class Solution {
public:
    long long sumAndMultiply(int n) {
        long long pow = 1,x = 0,sum=0;
        while(n!=0){
            if(n%10!=0){
                x += (n%10)*pow;
                pow = pow*10;
                sum += n%10; 
            }
            n = n/10;
        }
        return sum*x;
        
    }
};