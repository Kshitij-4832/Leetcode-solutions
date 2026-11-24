class Solution {
public:
    int maxLength(vector<int>& nums) {
        int length = INT_MIN,n = nums.size();
        for(int i = 0;i<n;i++){
            for(int j = i;j<n;j++){
                long long int pro = 1;
                int LCM = 1,GCD = 0;
                bool check = true;
                for(int k = i;k<=j;k++){
                    pro = pro*nums[k];
                    if(pro>25200){
                        check = false;
                        break;
                    }
                    LCM = lcm(LCM,nums[k]);
                    GCD = gcd(GCD,nums[k]);
                }
                if(pro==LCM*GCD&&check){
                    length = max(length,j-i+1);
                }
            }
        }
        return length;
    }
};