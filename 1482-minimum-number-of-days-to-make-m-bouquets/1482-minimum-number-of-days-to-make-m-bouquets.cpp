class Solution {
public:
    int minDays(vector<int>& bloomDay, long long int m, long long int k) {
        int Min_day = INT_MAX, Max_day = INT_MIN;
        int size = bloomDay.size();
        for (int i : bloomDay) {
            Min_day = min(Min_day, i);
            Max_day = max(Max_day, i);
        }
        int left = Min_day, right = Max_day, ans = -1;
        long long int product = m*k;
        if(product>size){
            return -1;
        }
        while(left<=right){
            int mid = (left+right)/2,count =0,no_of_bouquets = 0;
            for(int i = 0;i<size;i++){
                if(bloomDay[i]<=mid){
                    count++;
                }
                else{
                    no_of_bouquets += (count/k); 
                    count = 0;
                }
            }
            no_of_bouquets += (count/k);

            if(no_of_bouquets>=m){
                ans = mid;
                right = mid-1;
            } 
            else{
                left = mid+1;
            }
        }
        return ans;

    }
};