class Solution {
public:
    int maxProduct(int n) {
        int l1 = 0,l2 = 0;
        while(n!=0){
            int digit = n%10;
            if(digit>=l1){
                l2 = l1;
                l1 = digit;
            }
            else if(digit>l2){
                l2  = digit;
            }
            n = n/10;
        }
        return l1*l2;
    }
};