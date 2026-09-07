class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int size = weights.size();
        int max_weight = 0, total_weight = 0;
        for (int i = 0; i < size; i++) {
            max_weight = max(max_weight, weights[i]);
            total_weight += weights[i];
        }
        int left = max_weight, right = total_weight,ans = -1;
        while(left<=right){
            int mid = (left+right)/2,curr_sum = 0,count = 0;
            for(int i = 0;i<size;i++){
                curr_sum = curr_sum+weights[i];
                if(curr_sum==mid){
                    count++;
                    curr_sum = 0;
                }
                if(curr_sum>mid){
                    count++;
                    i--;
                    curr_sum = 0;
                }
            }
            if(curr_sum!=0){
                count++;
            }
            if(count<=days){
                right = mid-1;
                ans = mid;
            }
            else{
                left = mid+1;
            }
        }
        return ans;
    }
};