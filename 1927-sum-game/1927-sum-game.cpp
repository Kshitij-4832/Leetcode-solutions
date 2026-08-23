class Solution {
public:
    bool sumGame(string nums) {
        int size = nums.length();
        int q1 = 0 , q2 = 0;
        double sum1 = 0.0,sum2 = 0.0;
        for(int i = 0;i<size/2;i++){
            if(nums[i]=='?'){
                q1++;
            }
            else{
                sum1 = sum1+((int)nums[i]-48); 
            }
        }
        sum1 = sum1+(q1*4.5);

        for(int i = size/2;i<size;i++){
            if(nums[i]=='?'){
                q2++;
            }
            else{
                sum2 = sum2+((int)nums[i]-48);
            }
        }
        sum2 = sum2+(q2*4.5);
        if(sum1==sum2){
            return false;
        }
        return true;
    }
};