class Solution {
public:
    int smallestNumber(int n, int t) {
        while(n<=100){
            int pro = 1,current = n;
            while(current!=0){
                pro = pro*(current%10);
                current = current/10;
            }
            if(pro%t==0){
                return n;
            }
            n++;
        }
        return -1;
    }
};