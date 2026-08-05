class Solution {
public:
    int countDigits(int num) {
      vector<int> digits;
        int copy  =num;
        while(copy!=0){
            digits.push_back(copy%10);
            copy /=10;
        }
        int count =0;
        for(int it:digits){
            if(num%it==0){
                count++;
            }
        }
        return count;
    }
};