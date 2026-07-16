class Solution {
public:
    int GCD(int a ,int b){
        if(a==0){
            return b;
        }
        if(b==0){
            return a;
        }
        if(a==b){
            return a;
        }
        if(a>b){
            return GCD(a-b,b);
        }
        return GCD(a,b-a);
    }
    long long gcdSum(vector<int>& nums) {
        vector<long long> prefix;
        vector<long long > ans;
        int max = INT_MIN;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            if(max<nums[i]){
                max = nums[i];
            }
            int x =  gcd(max,nums[i]);
            prefix.push_back(x);
        }
        sort(prefix.begin(),prefix.end());
        int start = 0,end = prefix.size()-1;
        while(start<end){
            ans.push_back(gcd(prefix[start],prefix[end]));
            start++;
            end--;
        }
        long long sum = 0;
        for(int i=0;i<ans.size();i++){
            sum  = sum+ans[i];
        }
        return sum;
    }
};