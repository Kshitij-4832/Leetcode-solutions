class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        int Max = INT_MIN, size = quantities.size();
        for (int i = 0; i < size; i++) {
            Max = max(Max, quantities[i]);
        }
        int left = 1, right = Max, ans = 0;
        while (left <= right) {
            int mid = (left + right) / 2;
            long long int sum = 0;
            for(int i =  0;i<size;i++){
                if(quantities[i]%mid==0){
                    sum = sum+(quantities[i]/mid);
                }
                else{
                    sum = sum+floor(quantities[i]/mid)+1;
                }
            }
            if(sum<=n){
                right = mid-1;
                ans = mid;
            }
            else {
                left = mid+1;
            }
        }
        return min(left,ans);
    }
};